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

          fs.readFile(path, function(err, data) {
            if (err) {
              res.writeHead(404, {'Content-Type': 'text/html'});
              return res.end("404 Not Found");
            }  
              res.writeHead(200, {'Content-Type': 'text/html'});
              res.write(`<textarea>${data}</textarea>`);
              return res.end();
          });

          break;
          
           case "jpg":
           case "png":
          var oldpath = files.filetoupload.path;
          var newpath = '/home/astghik/tmp/' + files.filetoupload.name;
          fs.rename(oldpath, newpath, function (err) {
            if (err) throw err;
          });



          // var img = fs.readFileSync('./red.png');

          var img = fs.readFileSync(newpath);

          res.writeHead(200, {'Content-Type': 'image/gif'});

          res.end(img, 'binary');

          // res.write('<body><img src="./red.png" alt="Image"></body>');
          // res.write('<img src="/home/astghik/Desktop/test_files/back_image.jpg" alt="Image">');
          // res.end();
          break; 
        case "html":

        res.writeHead(200, {'Content-Type': 'text/html'});



          res.write(`<iframe id="serviceFrameSend" src=${path}` + 
          `width="1000" height="1000"  frameborder="0">`);
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
}).listen(8099);
