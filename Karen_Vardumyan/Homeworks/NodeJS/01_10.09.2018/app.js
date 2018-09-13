var fs = require('fs');
var http = require('http');
var events = require('events');


var metods = require('./method');

function foo() {
    console.log("esiminch");
}


http.createServer(function(req, res) {




    res.writeHead(200, {'Content-Type': 'text/html'});

    res.write(`<select id="myselect" name='name' >
                    <option value="read">Read</option>
                    <option value="write">Write</option>
                    <option value="copy">Copy</option>
                    <option value="rename">Rename</option>
               </select>`);

    res.write('<button onclick="foo()"> Buuton </button>');

    metods.foo('name');



    res.end();
}).listen(8081);
console.log("Listening to port 8081");

