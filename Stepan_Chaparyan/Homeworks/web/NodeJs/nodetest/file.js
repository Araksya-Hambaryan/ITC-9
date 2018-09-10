var events = require('events');
var fs = require('fs');
var formidable = require('formidable');

fs.open('mynewfile2.txt', 'w', function (err, file) {
  if (err) throw err;
  console.log('Saved!');
});

fs.unlink('mynewfile2.txt', function (err) {
  if (err) throw err;
  console.log('File deleted!');
});

fs.rename('mynewfile3.txt', 'myrenamedfile.txt', function (err) {
  if (err) throw err;
  console.log('File Renamed!');
});


var eventEmitter = new events.EventEmitter();

var writer = function () {
  console.log('write');
  fs.writeFile('mynewfile1.txt', 'Hello content!', function (err) {
    if (err) throw err;
  });
}

eventEmitter.on('scream', writer);
eventEmitter.emit('scream');