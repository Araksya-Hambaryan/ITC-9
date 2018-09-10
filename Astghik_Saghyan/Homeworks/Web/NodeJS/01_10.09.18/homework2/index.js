var http = require('http');
var formidable = require('formidable');
var fs = require('fs');

http.createServer(function (req, res) {
  if (req.url == '/fileupload') {
    var form = new formidable.IncomingForm();
    form.parse(req, function (err, fields, files) {
      var extArr = files.filetoupload.name.split(".");
      var ext = extArr[extArr.length-1];
      var path = files.filetoupload.path;
      res.writeHead(200, {'Content-Type': 'text/html'});
      switch(ext) {
        case "txt":
          res.write('<textarea>Hello</textarea>');
          res.end();

          break;
        case "img":
        case "png":
          res.write(`<img src=${path}></img>`);
          res.end();
          break; 
        case "html":
          res.write('<iframe id="serviceFrameSend" src=${path}' + 
          'width="1000" height="1000"  frameborder="0">');
          res.end();
      }
      console.log(ext);

      // var oldpath = files.filetoupload.path;
      // var newpath = '/home/astghik/tmp/' + files.filetoupload.name;
      //   fs.rename(oldpath, newpath, function (err) {
      //     if (err) throw err;
      //       res.write('File uploaded and moved!');
      //       res.end();
      //   });
    });
  } else {
    res.writeHead(200, {'Content-Type': 'text/html'});
    res.write('<form action="fileupload" method="post" enctype="multipart/form-data">');
    res.write('<input type="file" name="filetoupload"><br>');
    res.write('<input type="submit">');
    res.write('</form>');
    return res.end();
  }
}).listen(8096);
