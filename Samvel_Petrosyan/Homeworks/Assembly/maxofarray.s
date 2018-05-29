MOV   r1, A1
MOV   r2, A2
MOV   r3, A3
MOV   r4, A4
CMP   r2, r1
MOVGT r1, r2
CMP   r3, r1
MOVGT r1, r3
CMP   r4, r1
MOVGT r1,r4
#r1 max e
