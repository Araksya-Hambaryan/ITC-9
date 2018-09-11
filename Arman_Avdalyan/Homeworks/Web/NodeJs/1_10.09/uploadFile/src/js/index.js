var express = require('express');
var formidable = require('formidable');
const events = require('events');
const path = require('path');
var fs = require('fs');

var app = express();

app.use('/', express.static(path.join(__dirname, 'public')))
const rootDir = path.dirname(path.dirname(__dirname));
app.get('/', function (req, res) {
    res.sendFile(rootDir + '/public/index.html');
});

var filePath = null;

app.post('/', function (req, res) {
    var form = new formidable.IncomingForm();
    var eventEmitter = new events.EventEmitter();
    var ext = null;
    var fileName = null;
    
    form.parse(req);
    form.on('fileBegin', function (name, file) {
        file.path = rootDir + '/uploads/' + file.name;
        filePath = file.path;
    });

    form.on('file', function (name, file) {
        console.log('Uploaded ' + file.name);
        ext = path.extname(file.name);
        fileName = file.name;
        eventEmitter.emit(ext);
    });

    eventEmitter.on('.jpg', function () {
        showImage();
    });

    eventEmitter.on('.png', function () {
        showImage();
    });

    function showImage() {
        res.writeHead(200, { 'Content-Type': 'text/html' });
        res.write(`<html><body>\
                    <img src="../../uploads/Table.png">\
                </body></html>`);
        res.end();
    }

    eventEmitter.on('.txt', function () {
        fs.readFile(filePath, function (err, data) {
            res.write(`<html><body>\
                    <textarea> ${data.toString()}</textarea>\
                </body></html>`);
            res.end();
        });
    });

    eventEmitter.on('.html', function () {
        fs.readFile(filePath, function (err, data) {
            res.write(data.toString());
            res.end();
        });
    });
}).listen(8081, () => console.log('App listening on port 8081!'));