var util = require('util');

module.exports = function(connect) {

  /**
   * Connect's Store.
   */

  var Store = connect.session.Store;

  /**
   * Initialize PgSqlStore with the given `options`.
   *
   * @param {Object} options
   * @api public
   */

  function PgSqlStore(options) {
    if (!options || typeof options.getClient !== 'function')
      throw new Error('You have to provide `options` object, and `options.getClient` function!');

    Store.call(this, options);

    this.getClient = options.getClient;
    this.table = options.table || 'connect_session';
  };

  /**
   * Inherit from `Store`.
   */

  util.inherits(PgSqlStore, Store);

  /**
   * Attempt to fetch session by the given `sid`.
   *
   * @param {String} sid
   * @param {Function} fn
   * @api public
   */

  PgSqlStore.prototype.get = function(sid, fn) {
    var _this = this
      , now = (new Date()).toISOString();

    this.getClient(function(err, client, done) {
      if (err) return fn(err);

      client.query('SELECT * FROM ' + _this.table + ' WHERE sid = $1 AND expires > cast($2 as timestamp without time zone);', [ sid, now ], function(err, result) {
        done();
        if (!result.rows.length)
          fn();
        else
          fn(null, result.rows[0].session);
      });
    });
  };

  /**
   * Commit the given `sess` object associated with the given `sid`.
   *
   * @param {String} sid
   * @param {Session} sess
   * @param {Function} fn
   * @api public
   */

  PgSqlStore.prototype.set = function(sid, sess, fn) {
    var _this = this;

    this.getClient(function(err, client, done) {
      var q = 'with new_values (sid, expires, session) as (' +
              '  values ($1, $2::timestamp without time zone, $3::json)' +
              '), ' +
              'upsert as ' +
              '( ' +
              '  update ' + _this.table + ' cs set ' +
              '    sid = nv.sid, ' +
              '    expires = nv.expires, ' +
              '    session = nv.session ' +
              '  from new_values nv ' +
              '  where cs.sid = nv.sid ' +
              '  returning cs.* ' +
              ')' +
              'insert into ' + _this.table + ' (sid, expires, session) ' +
              'select sid, expires, session ' +
              'from new_values ' +
              'where not exists (select 1 from upsert up where up.sid = new_values.sid)';

      if (err) return fn(err);

      client.query(q, [ sid, sess.cookie.expires.toISOString(), JSON.stringify(sess) ], function(err, result) {
        done();
        if (err) return fn(err);
        fn();
      });
    });
  };

  /**
   * Destroy the session associated with the given `sid`.
   *
   * @param {String} sid
   * @api public
   */

  PgSqlStore.prototype.destroy = function(sid, fn) {
    var _this = this;

    this.getClient(function(err, client, done) {
      if (err) return fn(err);

      client.query('DELETE FROM ' + _this.table + ' WHERE sid = $2;', [ sid ], function(err) {
        done();
        if (err) return fn(err);
        fn();
      });
    });
  };

  return PgSqlStore;
};
