function sleep(ms) {
    ms += new Date().getTime();
    while (new Date() < ms) { }
}

sleep(100);

var canvas = document.getElementById('canvas');
var content = document.getElementById('content');
var contentPosition = content.getBoundingClientRect();

canvas.width = document.body.clientWidth - 10;
canvas.height = document.body.clientHeight - 10;

var radius = 10;
var maxRadius = 20;
var mouse = {
    x: undefined,
    y: undefined
}
var colour = [
    '#FF530D',
    '#E82C0C',
    '#FF0000',
    '#E80C7A',
    '#FF0DFF'
];
window.addEventListener('mousemove', function(event){
   mouse.x = event.x;
   mouse.y = event.y;
});
//c = context
var c = canvas.getContext('2d');

function circle(x, y, dx, dy, radius){
    this.x = x;
    this.y = y;
    this.dx = dx;
    this.dy = dy;
    this.radius = radius;
    this.minRadius = Math.floor(Math.random() * 10 + 1);
    this.fillColour = colour[Math.floor(Math.random() * colour.length )];

    this.draw = function(){
        c.beginPath();
        c.arc(this.x, this.y, this.radius, 0, Math.PI*2);
        c.fillStyle = this.fillColour;
        c.fill();
        c.closePath();
    }
    this.update = function(){
        if (this.x + this.radius > innerWidth || this.x - this.radius < 0) {
           this.dx = (this.x < this.radius || -1) * Math.abs(this.dx);
        }
        if (this.y + this.radius > innerHeight || this.y - this.radius < 0) {
           this.dy = (this.y < this.radius || -1) * Math.abs(this.dy);
        }
        if (this.y + this.radius > contentPosition.top && this.y - this.radius < contentPosition.bottom
                && this.x + this.radius > contentPosition.left && this.x - this.radius < contentPosition.right) {
            // Choose which side of the box is closest to the circle's centre
            var dists = [Math.abs(this.x - contentPosition.left),
                         Math.abs(this.x - contentPosition.right),
                         Math.abs(this.y - contentPosition.top),
                         Math.abs(this.y - contentPosition.bottom)];
            var i = dists.indexOf(Math.min.apply(Math, dists)); // Get minimum value's index in array
            // ... that will be the side that dictates the bounce
            if (i < 2) {
                this.dx = (i || -1) * Math.abs(this.dx);
            } else {
                this.dy = (i > 2 || -1) * Math.abs(this.dy);
            }
        }
               
        if(this.x - mouse.x < 50 && (this.x - mouse.x) > -50
            && this.y - mouse.y < 50 && this.y - mouse.y > -50){
            if(this.radius < maxRadius){
                this.radius +=2;
            }
        }
        else if(this.radius > this.minRadius){
            this.radius -= 2;
        }
        this.x += this.dx;
        this.y += this.dy;
        this.draw();
    }
}

circleArray = [];

function getDistance(x1, y1, x2, y2){
    var xDistance = x2 - x1;
    var yDistance = y2 - y1;
    return Math.sqrt( Math.pow(xDistance, 2) + Math.pow(yDistance, 2));
}

function randomIntFromInterval(min,max){
    return Math.floor(Math.random()*(max-min+1)+min);
}

function init(){
    for(var i = 0; i < 100; i++){
        do { // repeat until not in box
            var x = randomIntFromInterval(radius, innerWidth - radius);
            var y = randomIntFromInterval(radius, innerHeight - radius);
        } while (x + radius > contentPosition.left && x - radius < contentPosition.right
                && y + radius > contentPosition.top && y - radius < contentPosition.bottom);
        var dx = (Math.random() - 0.5) * 2;
        var dy = (Math.random() - 0.5) * 2;
        circleArray.push(new circle(x, y, dx, dy, radius));
    }
}

function animate(){
    requestAnimationFrame(animate);
    c.clearRect(0, 0, innerWidth, innerHeight);
    for(var i = 0; i < circleArray.length; i++){
        circleArray[i].update();
    }
}

init();
animate();