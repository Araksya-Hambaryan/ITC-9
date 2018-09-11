//See the result on the terminal
var events = require('events');
var eventEmitter = new events.EventEmitter();


var myEventHandler = function () {
  console.log('I hear a scream!');
}


eventEmitter.on('scream', myEventHandler);

//Fire the 'scream' event:
eventEmitter.emit('scream');