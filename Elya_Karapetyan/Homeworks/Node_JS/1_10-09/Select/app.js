var http = require("http");
var list = require("./createSelect");

http
  .createServer(function(req, res) {
    res.writeHead(200, { "Content-Type": "text/html" });
    res.write(list.creatSelect());
    res.end();
  })
  .listen(8081);
console.log("listening on port 127.0.0.1:8081");
