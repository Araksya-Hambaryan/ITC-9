mov a[0],r1
mov n,r3
A:
if r3,0
havasar: jmp finish
add &a[0],1 /vor gna a[i+1] i vra
mov a[0],r2
if r2,r1
mec: mov r2,r1 
add r3,-1
jmp A
finish: mov r1,10000 //desktopum cujc ta
