mov r0,1
mov r1,1
mov r3,n // n-@ hamar@
k:
cgt r3,0
add r3,-1
jnz x
jz y
x:
mov r2,0
add r2,r1
add r2,r0
mov r0,r1
mov r1,r2
jmp k
y:
Finish
//r0-i mej exac@ klini n-rd fibonachii tiv@

