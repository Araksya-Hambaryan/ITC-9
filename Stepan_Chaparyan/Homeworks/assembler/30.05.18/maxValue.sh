useful commands are.
    add R1, n - add n value into R1 register
    mov R1, R2 - move R2 value to R1
    cgt R1, R2 - if R2 is greater go to jnz, else go to jump
    jnz return to loop
    jump jump to mentioned section 

start
    add R1, 0x0   
    add R2, 0x1  
    add R4, 0x8   //last Value
    ctg R1, R2    //compare two elements and move max element into R1 register
    mov R3, R1    //move max number from R1 and R2 into R3  

loop
    add R2, +1
    cmp R2, R4   //compare and if equal, go to end 
    ctg R2, R3   //compare R2 and R3, if R3 is greater go to jnz, else go to jump
    jnz loop     //if R3 is greater go to next and try new value
    jump newMax  //if R3 is smaller go to new Max

newMax
    mov R3, R2   //move value of R2 into R3
    jnz loop 

end

