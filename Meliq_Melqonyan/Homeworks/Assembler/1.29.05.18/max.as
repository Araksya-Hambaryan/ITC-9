mov r3,n
mov r2,*arr[0] //r2-i mej pahenq arr-i 1 elementi hascen
mov r0,*r2 // r0-i mej r2 hasceum gtnvox tiv@
k:
add r3,-1
cgt r3,0
jnz x
jz y
x:
add r2,4
mov r1,*r2
cgt r1,r0
jnz a
jnz b
a:
mov r0,r1
jmp k
b:
jmp k
y:
Finish // r0-i mijin@ klini max-@
