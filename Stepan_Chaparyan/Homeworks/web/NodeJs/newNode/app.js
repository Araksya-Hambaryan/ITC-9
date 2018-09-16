var http = require('http');
var formidable = require('formidable');
var fs = require('fs');
var mongoClient = require('mongodb').MongoClient;
var url = 'mongodb://localhost:27017';

var result1;

http.createServer(function (req, res) {
        if (req.url == '/fileupload') {
            var form = new formidable.IncomingForm();
            form.parse(req, function (err, fields, files) {
                var path = files.filetoupload.path;
                fs.readFile(path, function (err, data) {
                    if (err) throw err;
                    var json = JSON.parse(data);
                    console.log(json);
                });    
            });
        }
    });        
mongoClient.connect(url, function(err, db) {
    if (err) throw err;
    var dbobj = db.db('my_db');
    dbobj.createCollection('restourants', function(err, result) {
        if (err) throw err;

        var dbobj = db.db('my_db');

        
    
            var array = [
                {   name: 'Tashir',
                    address: 'Tigran 50' },
                {   name: 'Tashir',
                    address: 'Tigran 50' }
            ]
            dbobj.collection('restourants').
                insertMany(json, function(err, result) {
                    if (err) throw err;
                    console.log("Inserted");
                    console.log(result);
                });

            dbobj.collection('restourants').
            find({}).toArray(function(err, result) { 
                if (err) throw err;
                console.log(result);
                result1 = result;
                // db.close();
            });
    });

    res.writeHead(200, { 'Content-Type': 'text/html' });
    res.write('<form action="fileupload" method="post" enctype="multipart/form-data">');
    res.write('<input type="file" name="filetoupload"><br>');
    res.write('<p>' + result1 + '</p>');
    res.write('<input type="submit">');
    res.write('</form>');
    return res.end();
        
}).listen(8088);

});