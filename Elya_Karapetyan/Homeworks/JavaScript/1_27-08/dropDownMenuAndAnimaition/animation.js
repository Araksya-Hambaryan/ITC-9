function setTextLable(str) {
    document.getElementById("myText").innerHTML = str;        
}

const container = {
    x: 0,
    y: 0,
    width: 1350,
    height: 100
};

const ball = function(x, y, r, vx, vy, color) {
    this.x = x;
    this.y = y;
    this.r = r;
    this.vx = vx; 
    this.vy = vy; 
    this.color = color;
};

const balls = [new ball(10,10,3,3,3,'#ff0007'), new ball(50,80,3,3,3,'#ff0007'), new ball(90,110,2,-3,3,'#ff0007'),
                new ball(300,80,2,3,2,'#ff0007'), new ball(200,100,3,2,3,'#ff0007'), new ball(400,120,2,-2,-3,'#ff0007'),
                new ball(130,130,2,-3,-4,'#ff0007'), new ball(550,3,2,-3,-3,'#ff0007'), new ball(320,50,2,-3,2,'#ff0007'),
                new ball(25,170,3,2,-3,'#2826ff'), new ball(60,6,3,2,-3,'#2826ff'), new ball(400,100,3,2,-2,'#2826ff'),
                new ball(10,50,3,3,2,'#2826ff'), new ball(30,200,3,3,4,'#2826ff'), new ball(300,130,3,4,3,'#2826ff'),
                new ball(150,50,3,-2,3,'#2826ff'), new ball(130,10,3,4,2,'#2826ff'), new ball(500,25,2,3,-2,'#2826ff'),
                new ball(5,60,3,3,-3,'#3cff3c'), new ball(10,150,3,3,-2,'#3cff3c'),new ball(10,130,2,-3,2,'#3cff3c'),
                new ball(30,250,3,3,-2,'#b100ff'), new ball(300,10,3,2,3,'#b100ff'), new ball(450,200,2,-3,2,'#b100ff'),
                new ball(30,240,3,3,-2,'#b100ff'), new ball(300,10,3,2,3,'#b100ff'), new ball(450,200,2,-3,2,'#b100ff'),
                new ball(30,230,3,3,-2,'#b100ff'), new ball(300,10,3,2,3,'#b100ff'), new ball(450,200,2,-3,2,'#b100ff'),
                new ball(30,220,3,3,-2,'#b1f0ff'), new ball(300,10,3,2,3,'#b100ff'), new ball(450,200,2,-3,2,'#b100ff'),
                new ball(30,210,3,3,-2,'#b100ff'), new ball(300,10,3,2,3,'#b100ff'), new ball(450,200,2,-3,2,'#b100ff'),
                new ball(200,180,2,3,2,'#ff0007'), new ball(200,100,3,2,3,'#ff0007'), new ball(400,120,2,-2,-3,'#ff0007'),
                new ball(200,220,3,3,-2,'#b1f0ff'), new ball(180,10,3,2,3,'#b100ff'), new ball(450,200,2,-3,2,'#b100ff')
            ];

const canvas = document.getElementById("my_canvas");
const c = canvas.getContext("2d");

function animation() {
    c.fillStyle = "#0c0606";
    c.fillRect(container.x, container.y, container.width, container.height);
    for (let i = 0; i < balls.length; i++) {
        c.fillStyle = balls[i].color;
        c.beginPath();
        c.arc(balls[i].x, balls[i].y, balls[i].r, 0, Math.PI * 2, true);
        c.fill();
        if (balls[i].x - balls[i].r + balls[i].vx < container.x || balls[i].x + balls[i].r + balls[i].vx > container.x + container.width) {
            balls[i].vx = -balls[i].vx;
        }
        if (balls[i].y + balls[i].r + balls[i].vy > container.y + container.height || balls[i].y - balls[i].r + balls[i].vy < container.y) {
            balls[i].vy = -balls[i].vy;
        }
        balls[i].x += balls[i].vx;
        balls[i].y += balls[i].vy;
        move(i);
    }
    requestAnimationFrame(animation);
}
requestAnimationFrame(animation);

function move(i) {
    for(let j = 0; j < balls.length; ++j) {
        const touchX = Math.abs(balls[i].x + balls[i].r - balls[j].x - balls[j].r) < balls[i].r + balls[j].r ? true : false;
        const touchY = Math.abs(balls[i].y + balls[i].r - balls[j].y - balls[j].r) < balls[i].r + balls[j].r ? true : false;
        if (balls[i] != balls[j] && touchX && touchY) {
                balls[i].vx = -balls[i].vx;
                balls[i].vy = -balls[i].vy;
                balls[j].vx = -balls[j].vx;
                balls[j].vy = -balls[j].vy;
        }
    }
}