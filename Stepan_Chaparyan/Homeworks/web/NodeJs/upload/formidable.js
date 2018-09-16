var http = require('http');
var formidable = require('formidable');
var fs = require('fs');

var mysql = require('mysql');

var connection = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    password: 'Aram050182@',
    database: 'restourantsDB'
});


http.createServer(function (req, res) {
  if (req.url == '/fileupload') {
    var form = new formidable.IncomingForm();
    form.parse(req, function (err, fields, files) {
      var extArr = files.filetoupload.name.split(".");
      var ext = extArr[extArr.length-1];
      var path = files.filetoupload.path;
      res.writeHead(200, {'Content-Type': 'text/html'});
      switch(ext) {
        case "json":
          fs.readFile(path, function(err, data) {
            if (err) {
              res.writeHead(404, {'Content-Type': 'text/html'});
              return res.end("404 Not Found");
            }  
              res.writeHead(200, {'Content-Type': 'text/html'});
              res.write(`<textarea style="height:650px;width:1050px;">${data}</textarea>`);

              var json = JSON.parse(data);
              console.log(json);
              for (let i = 0; i < json.rest.length; ++i) {
                  let name = json.rest[i].name;
                  let address = json.rest[i].adress;
                  var sqlCommand = 'INSERT INTO restourants (name, address) values(\"' + name + '\", \"' + address + '\")';
                  connection.query(sqlCommand, function (err, resoult) {
                      if (err) throw err;
                      console.log("ok " + resoult);
                  });
              }
              console.log("ok " + resoult);

              return res.end();
  
          });
          break;   
      }
    });
  } else {
    res.writeHead(200, {'Content-Type': 'text/html'});
    res.write('<form action="fileupload" method="post" enctype="multipart/form-data">');
    res.write('<input type="file" name="filetoupload"><br>');
    res.write('<input type="submit">');
    res.write('</form>');
    return res.end();
  }
}).listen(8093);

connection.connect(function(err) {
  if (err) throw err;
  var sqlCommand = 'SELECT * FROM restourants';    
  connection.query(sqlCommand, function(err, result) {
      if (err) throw err;
      console.log('INSERTED!');
      console.log(result);
  });

});