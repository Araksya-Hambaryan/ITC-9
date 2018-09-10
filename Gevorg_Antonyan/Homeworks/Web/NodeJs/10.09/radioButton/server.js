var bodyParser = require('body-parser');
var express = require('express');
var app = express();
var urlencodedParser = bodyParser.urlencoded({ extended: false });
var fs = require("fs");


var main;
var file;
fs.readFile("index.html", function (error, data) {
    if (error) {
        console.log("Failed");
        return;
    }
    main = data.toString();
});
fs.readFile("test.txt", function (error, data) {
    if (error) {
        console.log("Failed");
        return;
    }
    file = data.toString();
});

var server = app.listen(8084, function () {
    var host = server.address().address
    var port = server.address().port
    console.log("Example app listening at %s:%s Port", host, port)
});

app.get('/', function (req, res) {
    res.send(main);
});


app.post('/test', urlencodedParser, function (req, res) {
    if (!req.body) {
        return res.sendStatus(400);
    }
    if (req.body.read != null) {
        res.send("read file \n" + file);
    } else if (req.body.copy != null) {
        fs.createReadStream('test.txt').pipe(fs.createWriteStream('test_1.txt'));

        res.send("copy file");
    } else if (req.body.write != null) {
        var text = req.body.text;
        fs.writeFile("./test.txt",file + text, function(err) {
            if(err) {
                return console.log(err);
            }
            console.log("The file was saved!");
        });
        res.send("write text in file, text is: " + text);
    } else if (req.body.rename != null) {
        var name = req.body.filename;
        fs.rename('test.txt', name, function(err) {
            if ( err ) console.log('ERROR: ' + err);
        });
        res.send("rename to: " + text);
    }
})
