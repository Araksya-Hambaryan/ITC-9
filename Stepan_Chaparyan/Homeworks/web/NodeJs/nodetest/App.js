var http = require('http');
var dt = require('./datatime');
var constant = require('./Constants');
let arrays = constant.myText();
var fs = require('fs');

// var data = fs.readFileSync('jsonfile.txt');

fs.readFile('jsonfile.txt', function(err, data) {
    if (err) {
        console.log("fail");
        return;
    }
    console.log(data.toString());
});

// console.log(data.toString());
console.log("Ended");


// http.createServer(function(req, res) {
//     res.writeHead(200,{'Content-Type': 'text/html'});
//     // res.write('<h1>hello ITC</h1>' + dt.currentDate() + '<br>' + dt.myText() + '<br>' + constant.myText());
//     for (let index = 0; index < arrays.length; index++) {
//         res.write("<ul>"+ arrays[index]+"</ul>");        
//     }
//     res.end();
// }).listen(8081);

// console.log("Listenning on port 127.0.0.1:8081");