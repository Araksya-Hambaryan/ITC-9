var http = require('http');
var formidable = require('formidable');
var fs = require('fs');

var mysql = require('mysql');

var connection = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    password: 'Hunvar09',
    database: 'sql_database'
});

connection.connect(function (err) {
    if (err) throw err;
    var sqlCommand = 'CREATE TABLE  customers ( ' +
        'id INTEGER AUTO_INCREMENT PRIMARY KEY,' +
        'firstname  VARCHAR(50) NOT NULL,' +
        'lastname VARCHAR(50) NOT NULL' +
        ');';
    connection.query(sqlCommand, function (err, resoult) {
        if (err) throw err;
        console.log('Table created');
        console.log(resoult);
    });
});

http.createServer(function (req, res) {
    if (req.url == '/fileupload') {
        var form = new formidable.IncomingForm();
        form.parse(req, function (err, fields, files) {
            var path = files.filetoupload.path;

            fs.readFile(path, function (err, data) {
                if (err) throw err;
                var json = JSON.parse(data);
                console.log("json ----------");
                console.log(json);
                for (let i = 0; i < json.rest.length; ++i) {
                    let name = json.rest[i].name;
                    let adress = json.rest[i].adress;
                    var sqlCommand = 'INSERT INTO customers (firstname, lastname) values(\"' + firstname + '\", \"' + lastname + '\")';
                    connection.query(sqlCommand, function (err, res) {
                        if (err) throw err;
                        console.log("resault --------");
                        console.log(res);

                    });
                }
            });

        });
    }
    var sqlCommand = 'SELECT * FROM customers';
    connection.query(sqlCommand, function (err, res) {
        if (err) throw err;
        console.log("resoult");
        console.log(res);
        var body = '';
        for (let i = 0; i < res.length; ++i) {
            body += (res[i].firstname + ', ' + res[i].lastname + '<br/>');
        }
        console.log(res.length + "==============================");

        res.writeHead(200, { 'Content-Type': 'text/html' });
        res.write('<form action="fileupload" method="post" enctype="multipart/form-data">');
        res.write('<input type="file" name="filetoupload"><br>');
        res.write('<p>' + body + '</p>');
        res.write('<input type="submit">');
        res.write('</form>');
        return res.end();
    });



}).listen(8081);
