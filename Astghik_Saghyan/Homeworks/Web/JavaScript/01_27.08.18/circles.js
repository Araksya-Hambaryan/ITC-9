(function(){

    function init(){
         var canvas = document.getElementsByTagName('canvas')[0];
         var c = canvas.getContext('2d');
    
         var container = {x:0,y:0,width:300,height:150};
         var circles = [
            {x:20,y:50,r:20,color:125,vx:2,vy:-8},
            {x:50,y:60,r:25,color:285,vx:6,vy:-5},
            {x:15,y:30,r:5,color:325,vx:5,vy:-8},
            {x:10,y:8,r:15,color:175,vx:-4,vy:-6}
    
         ];
    
    
         function draw(){
             c.fillStyle = 'black';
             c.strokeStyle = 'black';
             c.fillRect(container.x,container.y,container.width,container.height);
             c.clearRect(container.x,container.y,container.width,container.height);
             c.strokeRect(container.x,container.y,container.width,container.height);
    
             for(var i=0; i <circles.length; i++){
                 c.fillStyle = 'hsl(' + circles[i].color + ',100%,50%)';
                 c.beginPath();
                 c.arc(circles[i].x,circles[i].y,circles[i].r,0,2*Math.PI,false);
                 c.fill();
    
                 if((circles[i].x + circles[i].vx + circles[i].r > container.x + container.width) || (circles[i].x - circles[i].r + circles[i].vx < container.x)){
                    circles[i].vx = - circles[i].vx;
                 }
                 if((circles[i].y + circles[i].vy + circles[i].r > container.y + container.height) || (circles[i].y - circles[i].r + circles[i].vy < container.y)){
                     circles[i].vy = - circles[i].vy;
                 }
                 circles[i].x +=circles[i].vx;
                 circles[i].y +=circles[i].vy;
             }
             requestAnimationFrame(draw);
         }
        requestAnimationFrame(draw);
    }
    
    //invoke function init once document is fully loaded
    window.addEventListener('load',init,false);
    
    }());  //self invoking function
    