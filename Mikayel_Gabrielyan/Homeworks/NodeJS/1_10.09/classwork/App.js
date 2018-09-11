var http = require("http");
var express = require('express');
var fs = require("fs")
var count = 0;

http.createServer(function (req, res) {
    res.writeHead(200, { 'Content-Type': 'text/html' });
    res.write(a());
    res.end();
}).listen(8081);

var a = function() {
    var h = "";
    h += "<body>";
    h += "<form action='/thank'  method='post'>";
    h += "<select name='mySelect'>";
    h += "<option>Read</option>";
    h += "<option>Write</option>";
    h += "<option>Rename</option>";
    h += "<option>Copy</option>";
    h += "</select>";
    h += "<br></br>";
    h += "<input type='submit' value='submit'>";
    h += "</form>";
    h += "</body>";
    return h;
}

var choseAction = function(myAction) {
    switch (myAction) {
        case "Read":
            fs.readFile('someFile.txt', function (err, data) {
                if (err) {
                    return console.error(err);
                }
            });
            break;
        case "Write":
            fs.writeFile('fileWrite.txt', 'Writed anything here', function (err) {
                if (err) {
                    return console.error(err);
                }
                console.log("Data written successfully!");
            });
            break;
        case "Rename":
            fs.rename('./text.txt', './text' + count + '.txt', function (err) {
                if (err) {
                    return console.error(err);
                }
            });
            break;
        case "Copy":
            fs.createReadStream('someFile.txt').pipe(fs.createWriteStream('fileCopy.txt'));
            break;
    }
}