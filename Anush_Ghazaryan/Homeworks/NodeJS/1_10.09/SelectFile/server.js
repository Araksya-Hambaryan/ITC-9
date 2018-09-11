var http = require('http');
var url = require('url');
var fs = require('fs');
var express = require('express');
var app = express();
var bodyParser = require('body-parser');
var urlencodedParser = bodyParser.urlencoded({ extended: true });

http.createServer(function(req, res) {
  res.writeHead(200, {'Content-Type': 'text/html'});

  res.write(`
  <form>
  <select  style="background-color: pink; 
  size: 150px;
  margin-left: 350px;
   border: 6px solid transparent;
    width: 150px; 
    height: 55px">
      <option value="read">Read</option>
      <option value="write">Write</option>
      <option value="copy">Copy</option>
      <option value="rename">Rename</option>
</select>
<div>
<br/>
<br/>
<button value="submit" style="size: 150px;
margin-left: 350px; 
background-color: DodgerBlue;
width: 80px; 
height: 30px">SUBMIT</button>
</div>
</form>`);

  res.end();
}).listen(8081);

  var server = app.listen(8081, function () {
  var host = server.address().address
  var port = server.address().port
  console.log("Example app listening at %s:%s Port", host, port)
});
 

 
app.get('/form', function (req, res) {
  var html='';
  html +="<body>";
  html += "<form action='/thank'  method='post' name='form1'>";

  html += "<select name='select'>";
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
  switch(req.body.select) {
      case "Read":
          fs.readFile('file.txt', function (err, data) {
              if (err) {
                  return console.error(err);
              }
              console.log( data.toString());
          });
          reply += "Read is selected ";
          break;
      case "Write":
          fs.writeFile('input.txt', 'Simply Easy Learning!',  function(err) {
              if (err) {
                  return console.error(err);
              }
          
              console.log("Data is written");
              console.log("Here it is");
              fs.readFile('write.txt', function (err, data) {
                  if (err) {
                      return console.error(err);
                  }
                  console.log(data.toString());
              });
          });
          reply += "Write is selected";
          break;
      case "Copy":
          fs.createReadStream('file.txt').pipe(fs.createWriteStream('newFile.txt'));

          reply += "Copy is selected";
          break;
      case "Rename":
          var string = Math.floor(Math.random()*100).toString();
          fs.rename('file.txt', 'file'+string+'.txt', function (err) {
              if (err) throw err;
          });
          reply += "Rename is selected";
          break;
  }
reply += "The Renamed file is in your ./home directory";
res.send(reply);
});

console.log("The Program is ended");




// http.createServer(function (req, res) {
//   var q = url.parse(req.url, true);
//   var filename = "." + q.pathname;
//   fs.readFile(filename, function(err, data) {
//     if (err) {
//       res.writeHead(404, {'Content-Type': 'text/html'});
//       return res.end("404 Not Found");
//     } 
//     res.writeHead(200, {'Content-Type': 'text/html'});
//     res.write(data);
//     return res.end();
//   });
// }).listen(8081); 