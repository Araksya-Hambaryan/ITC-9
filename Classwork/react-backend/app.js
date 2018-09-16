var createError = require('http-errors');
var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');

var indexRouter = require('./routes/index');
var usersRouter = require('./routes/users');

var app = express();

// view engine setup
app.set('views', path.join(__dirname, 'views'));
app.set('view engine', 'jade');

app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use('/', indexRouter);
app.use('/users', usersRouter);

// catch 404 and forward to error handler
app.use(function (req, res, next) {
  next(createError(404));
});
app.get('/', function (req, res){
    res.sendFile(__dirname + '/index.html');
});
// error handler
app.use(function (err, req, res, next) {
  // set locals, only providing error in development
  res.locals.message = err.message;
  res.locals.error = req.app.get('env') === 'development' ? err : {};
  // render the error page
  res.status(err.status || 500);
  res.render('error');
});

const table = require('./createTable');
const insert = require('./insertPath');
const folder = require('./createFolder');
const formidable = require('formidable');
const TABLE_NAME = 'paths';

folder.createFolder('../res');
folder.createFolder('../res/images');
table.createTable(TABLE_NAME);

app.use('/', express.static(path.join(__dirname, 'public')));
const rootDir = path.dirname(__dirname);
app.get('/', function (req, res) {
    res.sendFile(rootDir + '/public/index.html');
});

app.post('/', function (req, res) {
    var form = new formidable.IncomingForm();

    form.parse(req);
    form.on('fileBegin', function (name, file) {
        file.path = rootDir + '/res/images/' + file.name;
        console.log('filePath = ' + file.path);
        insert.insertPath(TABLE_NAME, file.path)
        insert.getPaths(TABLE_NAME);
    });
}).listen(8081, () => console.log('App listening on port 8081!'));

module.exports = app;