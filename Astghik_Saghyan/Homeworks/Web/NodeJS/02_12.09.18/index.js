var http = require('http');
var formidable = require('formidable');
var fs = require('fs');
var mySql = require('mysql');

var connection = mySql.createConnection({
  host: 'localhost',
  user: 'root',
  password: 'password',
  database: 'restorantsDB'
});

connection.connect(function (error) {
  if (error) throw error;
  console.log("Connected!");
  var sqlCommand = `CREATE TABLE IF NOT EXISTS restaurants (
      id INTEGER PRIMARY KEY AUTO_INCREMENT,
      name VARCHAR(50) NOT NULL,
      icon VARCHAR(250) NOT NULL,
      background VARCHAR(250) NOT NULL,
      address VARCHAR(250) NOT NULL,
      deal VARCHAR(250) NOT NULL
      )`;

  connection.query(sqlCommand, function (error, result) {
    if (error) throw error;
    console.log("Table created!");
  });

});

http.createServer(function (req, res) {
  if (req.url == '/fileupload') {
    var form = new formidable.IncomingForm();
    form.parse(req, function (err, fields, files) {
      var path = files.filetoupload.path;

      fs.readFile(path, function (err, data) {
        if (err) {
          res.writeHead(404, { 'Content-Type': 'text/json' });
          return res.end("404 Not Found");
        }
        var json = JSON.parse(data);

        var name, icon, background, address, deal;
        for (let i = 0; i < json.restaurants.length; ++i) {
          name = json.restaurants[i].name;
          icon = json.restaurants[i].icon;
          background = json.restaurants[i].background;
          address = json.restaurants[i].address;
          deal = json.restaurants[i].deal;
          let sqlCommandInsert = `INSERT INTO restaurants (name, icon, background, address, deal)
             values (\'${name}\', \'${icon}\', \'${background}\', \'${address}\', \'${deal}\')`;
          connection.query(sqlCommandInsert, function (err, result) {
            if (err) throw err;
            console.log("Inserted!");
          });

          var sqlCommandSelect = 'SELECT * FROM restaurants';
          connection.query(sqlCommandSelect, function (err, result) {
            if (err) throw err;
            console.log(result);
            var body = '';
            for (let i = 0; i < result.length; ++i) {
              body += (`Name: ${result[i].name},<br/>
                         Address: ${result[i].address},<br/>`);
            }
            res.writeHead(200, { 'Content-Type': 'text/html' });
            res.write(body);
            return res.end();
          });
        }
      });
    });
  } else {
    res.writeHead(200, { 'Content-Type': 'text/html' });
    res.write('<form action="fileupload" method="post" enctype="multipart/form-data">');
    res.write('<input type="file" name="filetoupload"><br>');
    res.write('<input type="submit">');
    res.write('</form>');
    return res.end();
  }
}).listen(9001);
