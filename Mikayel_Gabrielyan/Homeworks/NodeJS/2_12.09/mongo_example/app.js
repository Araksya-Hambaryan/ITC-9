var http = require('http');
var formidable = require('formidable');
var fs = require('fs');
var mongoClient = require('mongodb').MongoClient;
var url = 'mongodb://localhost:27017/my_db';

mongoClient.connect(url, function (err, res) {
    if (err) throw err;
    var dbObj = res.db('my_db');
    dbObj.createCollection('restuarants');
});

http.createServer(function (req, res) {
    if (req.url == '/fileupload') {
        var form = new formidable.IncomingForm();
        form.parse(req, function (err, fields, files) {
            var path = files.filetoupload.path;
            fs.readFile(path, function (err, data) {
                if (err) throw err;
                var json = JSON.parse(data);
                for (let i = 0; i < json.rest.length; ++i) {
                    var dbObj = res.db('my_db');
                    dbObj.collection('restuarants').insertOne(json[i]);
                }
            });

        });
    }
    var dbObject = res.db('my_db');
    dbObject.collection('restuarants').find(function (err, result) {
        if (err) throw err;
        for (let i = 0; i < resoult.length; ++i) {
            body += (result[i].name + ', ' + result[i].adress + '<br/>');
        }
    });
    res.writeHead(200, { 'Content-Type': 'text/html' });
    res.write('<form action="fileupload" method="post" enctype="multipart/form-data">');
    res.write('<input type="file" name="filetoupload"><br>');
    res.write('<p>' + body + '</p>');
    res.write('<input type="submit">');
    res.write('</form>');
}).listen(27017);