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
        console.log(fileName)
        eventEmitter.emit(ext);
    });
    eventEmitter.on('.jpg', function () {
        res.write('<html><body>\
                    <img src="/home/arman/Desktop/git/ITC-9/Arman_Avdalyan/\
                    Homeworks/Web/NodeJs/1_10.09/uploadFile/uploads/app_logo.jpg">\
                </body></html>');
        res.end();
    });

    eventEmitter.on('.txt', function () {
        fs.readFile(fileName, function(err, data) {
            if(err) {
                console.log('Failed');
                return;
            }
            res.end('<html><body>\
                    <textarea ${data}\
                </body></html>');
        });
    });
}).listen(8081, () => console.log('App listening on port 8081!'));