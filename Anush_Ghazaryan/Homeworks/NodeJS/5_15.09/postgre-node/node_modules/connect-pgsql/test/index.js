var http = require('http')
  , connect = require('connect')
  , pg = require('pg')
  , PgSqlStore = require('../')(connect);

var app = connect()
  , connectionString = 'pg://activationUser:activationUser@localhost/activationTests';

// app.use(connect.logger())
app.use(connect.cookieParser()),
app.use(connect.session({
  secret: 'dupadupa',
  key: 'sid',
  store: new PgSqlStore({
    getClient: function(fn) { pg.connect(connectionString, fn); }
  }),
  cookie: { maxAge: 60 * 1000 }
}));
app.use(function(req, res, next) {
  req.session.myValue = req.session.myValue || parseInt(Math.random() * 1000);
  return next();
});
app.use(function(req, res, next) {
  res.end(JSON.stringify(req.session));
});

http.createServer(app).listen(3000, function() {
  console.log('Test server listening on port 3000');
});
