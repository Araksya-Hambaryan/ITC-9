let fs = require('fs');
let anotherContent = "<html> <body><h1>Chaos is a ladder!</h1></body> </html>";
let express = require('express');
let app = express();
let bodyParser = require('body-parser');
let urlencodedParser = bodyParser.urlencoded({ extended: true });
let http = require('http');


function readFile(req, res) {
    http.createServer(function (req, res) {
        fs.readFile('some_file.html', function (err, data) {
            if (err) {
                return null;
            };
            res.writeHead(200, { 'Content-Type': 'text/html' });
            res.write(data);
            res.end();
        });
    }).listen(8080);
}

function writeFile() {
    fs.writeFile('some_file.html', anotherContent, function (err) {
        if (err) {
            return null;
        };
        console.log('Saved!');
    });
}

function deleteFile() {
    fs.unlink('some_file.html', function (err) {
        if (err) {
            return null;
        };
        console.log('File deleted!');
    });
}

function renameFile() {
    fs.rename('some_file.hrml', 'another_file.txt', function (err) {
        if (err) {
            return null;
        };
        console.log('File Renamed!');
    });
}

let server = app.listen(8081, function () {
    let host = server.address().address
    let port = server.address().port
    console.log("Example app listening at %s:%s Port", host, port)
});

app.get('/form', function (req, res) {
    let html = '';
    html += "<body>";
    html += "<form action='/thank'  method='post' name='form1'>";
    html += "Type of action (read,write,rename,delete):</p><input type= 'text' name='name'>";
    html += "<input type='submit' value='submit'>";
    html += "<INPUT type='reset'  value='reset'>";
    html += "</form>";
    html += "</body>";
    res.send(html);
});

app.post('/thank', urlencodedParser, function (req, res) {
    let reply = '';
    switch (req.body.name) {
        case "read":
            if (readFile() === null) {
                reply += "Error while performing action, see terminal output for details!";
                return;
            };
            reply += "Done reading!";
            break;
        case "write":
            if (writeFile() === null) {
                reply += "Error while performing action, see terminal output for details!";
                return;
            };
            reply += "Done writing!";
            break;
        case "rename":
            if (renameFile() === null) {
                reply += "Error while performing action, see terminal output for details!";
                return;
            };
            reply += "Done renaming!";
            break;
        case "delete":
            if (deleteFile() === null) {
                reply += "Error while performing action, see terminal output for details!";
                return;
            };
            reply += "Done deleting!";
            break;
        default:
            reply += "Your chosen action is not supported";
            break;
    }
    res.send(reply);
});