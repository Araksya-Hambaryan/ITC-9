var events = require('events');
var fs = require('fs');
var app = require('./app');


var eventEmiter = new events.EventEmitter();

eventEmiter.on('read', function() {
    var data = fs.readFileSync('someFile.txt');
    fs.readFile("someFile.txt", function(err, data) {
        if(err) {
            console.log("Failed");
        }
        console.log(data.toString());
    });
});
eventEmiter.on('write', function() {
    fs.writeFile("someFile.txt", 'Simply Easy Learning!', function (err) {
        if (err) {
            return console.error(err);
        }
    });
});
eventEmiter.on('rename', function() {
    fs.rename('someFile1.txt', 'someFile.txt', function (err) {
        if (err) {
            console.log('renamed complete');
        }
    });
});



exports.foo = function (action) {
    eventEmiter.emit(action);
}



























