var http = require("http");
var express = require('express');
var app = express();
var bodyParser = require('body-parser');
var urlencodedParser = bodyParser.urlencoded({ extended: true });
var fs = require("fs")

 
// Running Server Details.
var server = app.listen(8082, function () {
  var host = server.address().address
  var port = server.address().port
  console.log("Example app listening at %s:%s Port", host, port)
});
 
 
app.get('/form', function (req, res) {
  var html='';
  html +="<body>";
  html += "<form action='/thank'  method='post' name='form1'>";

  html += "<select name='mySelect'>";
  html += "<option>Read</option>";
  html += "<option>Write</option>";
  html += "<option>Copy</option>";
  html += "<option>Rename</option>";
  html += "</select>";

  html += "<input type='submit' value='submit'>";
  html += "<INPUT type='reset'  value='reset'>";
  html += "</form>";
  html += "</body>";

  res.send(html);
});
 
app.post('/thank', urlencodedParser, function (req, res){
    var reply='';
    switch(req.body.mySelect) {
        case "Read":
            fs.readFile('someFile.txt', function (err, data) {
                if (err) {
                    return console.error(err);
                }
                console.log("Asynchronous read: " + data.toString());
            });
            reply += "You are selected 'Read'>>>>>";
            break;
        case "Write":
            fs.writeFile('input.txt', 'Simply Easy Learning!',  function(err) {
                if (err) {
                    return console.error(err);
                }
            
                console.log("Data written successfully!");
                console.log("Let's read newly written data");
                fs.readFile('input.txt', function (err, data) {
                    if (err) {
                        return console.error(err);
                    }
                    console.log("Asynchronous read: " + data.toString());
                });
            });
            reply += "You are selected 'Write'>>>>>";
            break;
        case "Copy":
            fs.createReadStream('someFile.txt').pipe(fs.createWriteStream('newFile.txt'));

            reply += "You are selected 'Copy'>>>>>";
            break;
        case "Rename":
            var string = Math.floor(Math.random()*100).toString();
            fs.rename('./tmp/text.txt', './tmp/text'+string+'.txt', function (err) {
                if (err) throw err;
            });
            reply += "You are selected 'Rename'>>>>>";
            break;
    }
  reply += "See result in terminal in your working directory!";
  res.send(reply);
 });
 
 console.log("Program Ended");
