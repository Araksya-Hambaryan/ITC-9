var coockieParser = require('coockie-parser');
var session = require('express-session');

var PGSQL = require('connect-pgsql')(session);
var pg = require('pg');

module.exports = {
  createStore : function(){
    var config = {
      user: 'test',
      password: '12345',
      server: 'localhost',
      database: 'psql_store',
      port: 8081,
      pool: {
        max: 10,
        min: 0,
        idlTimeoutMillis : 30000

      }
    }
    return new PGSQL(config);
  }
}

