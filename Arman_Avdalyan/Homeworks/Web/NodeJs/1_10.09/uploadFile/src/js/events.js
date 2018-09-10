var events = require('events');

var eventEmitter = new events.EventEmitter();
var container = document.getElementById("container");
var elem = null;

eventEmitter.on('img', function(){
    elem = document.createElement("img");
    image.src = "uploads/";
});

eventEmitter.on('update_list1', function(){
    console.log("afafafaffaf");
});

eventEmitter.on('update_list2', function(){

});

eventEmitter.emit('update_list');