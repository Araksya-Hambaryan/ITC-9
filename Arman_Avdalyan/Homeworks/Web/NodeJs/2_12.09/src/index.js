var express = require('express');
var formidable = require('formidable');
const path = require('path');
var fs = require('fs');
var MongoClient = require('mongodb').MongoClient;
var app = express();

var url = "mongodb://localhost:27017";

MongoClient.connect(url, function (err, db) {
    if (err) throw err;
    var dbo = db.db("user");
    dbo.createCollection("users", function (err, res) {
        if (err) throw err;
        console.log("Collection created!");
        db.close();
    });
});

app.use('/', express.static(path.join(__dirname, 'public')));
const rootDir = path.dirname(__dirname);
app.get('/', function (req, res) {
    res.sendFile(rootDir + '/public/index.html');
});

app.post('/', function (req, res) {
    var form = new formidable.IncomingForm();
    form.parse(req);
    var objArray = null;
    form.on('fileBegin', function (name, file) {
        file.path = rootDir + '/uploads/' + file.name;
        fs.readFile(file.path, function (err, data) {
            if (err) {
                throw err;
            }

            objArray = JSON.parse(data);
            insertData("users", objArray);
            const dbData = getData("users");  // getData returns null
            res.write("====" + JSON.stringify(dbData));
            res.end();
        });
    });

    function insertData(collectionName, objArray) {
        MongoClient.connect(url, function (err, db) {
            if (err) throw err;
            var dbObject = db.db("user")
            console.log("Database created!");
            dbObject.collection(collectionName).insertMany(objArray, function (err, res) {
                if (err) throw err;
                console.log("Number of documents inserted: " + res.insertedCount);
                db.close();
            });
        });
    }
    
    function getData(collectionName) {
        var mResult = null;
        MongoClient.connect(url, function (err, db) {
            if (err) throw err;
            var dbObject = db.db("user")
            dbObject.collection(collectionName).find({}).toArray(function (err, result) {
                if (err) throw err;
                db.close();
                mResult = result;
            });
        });
        return JSON.stringify(mResult);
    }

}).listen(8081, () => console.log('App listening on port 8081!'));