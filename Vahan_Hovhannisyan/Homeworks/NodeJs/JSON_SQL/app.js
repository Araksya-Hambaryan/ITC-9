var express = require('express');
var formidable = require('formidable');
var fs = require('fs');
var app = express();
var mysql = require('mysql');

let connection = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    password: 'password',
    database: 'myDB1'
});

connection.connect(function (err) {
    if (err) throw err;
    connection.query('CREATE DATABASE IF NOT EXISTS myDB1', function (err, result) {
        if (err) throw err;
        console.log("Connection created");
    });
});



function insertIntoTable(name, address) {
    console.log("=========Trying to INSERT=========");
    console.log(address+'------------------');
    console.log(name+'------------------');
    
    var sqlCommand = 'INSERT INTO myRest (name, address) values(\"' + name + '\", \"' + address + '\")';
    connection.query(sqlCommand, function (err, result) {
        if (err) throw err;
        selectTable();
    });
}

function selectTable(res) {
    console.log("=======Trying to SELECT==========");
    var sqlCommand = 'SELECT * FROM myRest';
    connection.query(sqlCommand, function (err, result) {
        if (err) throw err;
        var body = '';
        for (let i = 0; i < result.length; ++i) {
            body += (result[i].name + ', ' + result[i].address + '<br/>');
        }

        res.writeHead(200, { 'Content-Type': 'text/html' });
        res.write('<form action="fileupload" method="post" enctype="multipart/form-data">');
        res.write('<input type="file" name="filetoupload"><br>');
        res.write('<p>' + body + '</p>');
        res.write('<input type="submit">');
        res.write('</form>');
    });
}

function createTable() {
    var sqlCommand = 'CREATE TABLE IF NOT EXISTS myRest' +
        '( id INTEGER PRIMARY KEY AUTO_INCREMENT,name VARCHAR(50) NOT NULL,address VARCHAR(50) NOT NULL );';
    connection.query(sqlCommand, function (err, result) {
        if (err) throw err;
        console.log("Created table myRest");
    });
}

app.get('/', function (req, res) {
    res.sendFile(__dirname + '/index.html');
});


app.post('/', function (req, res) {
    var form = new formidable.IncomingForm();
    form.parse(req);
    form.on('fileBegin', function (name, file) {
        file.path = __dirname + '/json_files/' + file.name;
    });

    form.on('file', function (name1, file) {

        fs.readFile(file.name, 'utf8', function (err, contents) {
            if (err) throw err;
            var jsondata = JSON.parse(contents);
            let keys = Object.keys(jsondata);
            let length = keys.length / 2;
            console.log("Length " + length);
            createTable();
            for (var i = 0; i < length; i++) {
                console.log("Insert");
                insertIntoTable(jsondata.name, jsondata.address);
            }
        });
        selectTable(res);
        res.sendFile(__dirname + '/index.html');
    });
});
app.listen(8000);