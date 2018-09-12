var express = require('express');
var formidable = require('formidable');
var app = express();
var fs = require('fs');

function append(content) {
    fs.appendFile('index.html', content, function (err) {
        if (err) throw err;
        console.log('Saved!');
    });
}

app.get('/', function (req, res) {
    res.sendFile(__dirname + '/index.html');
});

function getType(name) {
    let arr = name.split('.');
    return arr[1];
}

function fileToUpload(fileName, path, res) {
    // console.log("file nam e===== "+fileName+"======= path "+path);
    // switch (getType(fileName)) {
    //     case "png":
    //     case "jpg":
    //     var img = fs.readFileSync(path);
    //     res.writeHead(200, {'Content-Type': 'image/gif'});
    //     res.end(img, 'binary');
    //         break;
    //     case "txt":
    //         break;
    //     case "html":
    //         break;
    //     case "json":
    //     case "xml":
    //         break;

    // }
}
app.post('/', function (req, res) {
    var form = new formidable.IncomingForm();
    let path;
    form.parse(req);

    form.on('fileBegin', function (name, file) {
        file.path = __dirname + '/images/' + file.name;
        path = file.path;
        switch (getType(file.name)) {
            case "png":
            case "jpg":
                var img = fs.readFileSync(path);
                res.writeHead(200, { 'Content-Type': 'image/gif' });
                res.end(img, 'binary');
                break;
            case "txt":
                var txt = fs.readdirSync(path);
                res.writeHead (200, {'Content-Type': 'text/plain'});
                res.end(txt);
                break;
            case "html":
                break;
            case "json":
            case "xml":
                break;

        }
    });

    form.on('file', function (name, file) {
        console.log('Uploaded ' + file.name);
    });
    res.sendFile(__dirname + '/index.html');
});

app.listen(8000);