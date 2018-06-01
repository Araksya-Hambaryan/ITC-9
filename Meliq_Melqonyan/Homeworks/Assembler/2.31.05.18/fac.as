mov r3,*0x.... //r3-um n-@ grel
mov r0,1
mov r1,1
loop:
mov r4,r1
jeq r0,r3
jnz end
add r0,1
mov r2,r0
loop1
jeq r2,0
jnz loop
add r1,r4
add r2,-1
jmp loop1
end:
    print r1
