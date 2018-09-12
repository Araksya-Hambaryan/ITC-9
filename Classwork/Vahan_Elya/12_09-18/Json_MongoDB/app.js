var express = require('express');
var formidable = require('formidable');
var fs = require('fs');
var app = express();
var createDB = require('./mongo_create_db');
var createCollection = require('./mongo_create_collection');
var insertData = require('./mongo_insert');


createDB.createDB
createCollection.createCollection

function insertDataFromJsonFile(filePath) {
    fs.readFile(filePath, 'utf8', function (err, data) {
        if (err) throw err;
        var json = JSON.parse(data);
        insertData.insertData(json);
    });
}

//'./data.json'

app.get('/', function (req, res) {
    res.sendFile(__dirname + '/index.html');
});

app.post('/', function (req, res) {
    var form = new formidable.IncomingForm();

    form.parse(req);

    form.on('fileBegin', function (name, file) {
        file.path = __dirname + '/uploads/' + file.name;
    });
    form.on('file', function (name, file) {
        console.log("-->>> " + file.path);
        insertDataFromJsonFile(file.path);
    });
    res.sendFile(__dirname + '/index.html');
});


app.listen(3000);
