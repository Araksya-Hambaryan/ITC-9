var express = require('express');
var formidable = require('formidable');
const events = require('events');
const path = require('path');
var element = require('html-element');
var document = element.document;
var app = express();

app.use('/', express.static(path.join(__dirname, 'public')))
const rootDir = path.dirname(path.dirname(__dirname));
app.get('/', function (req, res){
    res.sendFile(rootDir + '/public/index.html');
});

var filePath = null;

app.post('/', function (req, res){
    var form = new formidable.IncomingForm();
    form.parse(req);
    form.on('fileBegin', function (name, file){
        file.path = rootDir + '/uploads/' + file.name;
        filePath = file.path;
    });
    form.on('file', function (name, file){
        console.log('Uploaded ' + file.name);
        var ext = path.extname('index.html')
        eventEmitter.emit(ext);
    });
}).listen(8081, () => console.log('App listening on port 8081!'));

var eventEmitter = new events.EventEmitter();
var elem = null;

eventEmitter.on('.img', function(){
    elem = document.createElement("h1");
    element.appendChild(elem);
});

eventEmitter.on('.txt', function(){
});