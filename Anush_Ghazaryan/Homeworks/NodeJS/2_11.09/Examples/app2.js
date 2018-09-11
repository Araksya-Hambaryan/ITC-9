//See the result on the console

var fs = require('fs');
var rs = fs.createReadStream('./file.txt');
rs.on('open', function () {
  console.log('The file is open');
});
