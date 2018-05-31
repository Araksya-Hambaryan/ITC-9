useeful commands are.
    add R1, n - add n value into R1 register
    mov R1, R2 - move R2 value to R1
    sum R1, R2 - sum value of R1 and R2 into R1
    com R1, R2 - if equal go to end
    jnz return to loop
    jump - jump to mentioned section 

start
    add R1, 0   
    add R2, 1  
    add R3, 2 
    add R4, 0x0   

loop
    sum R1, R2   // sum two numbers
    mov R3, R1   // move value of sum into R3
    mov R1, R2   
    mov R2, R3
    com R3, R4   //if equal, got to end 
    jnz loop

end
