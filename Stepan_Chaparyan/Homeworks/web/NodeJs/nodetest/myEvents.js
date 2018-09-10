var events = require('events');

var eventEmitter = new events.EventEmitter();

eventEmitter.on('update_list', function() {
    console.log("UPDATED");
});

eventEmitter.emit('update_list');

