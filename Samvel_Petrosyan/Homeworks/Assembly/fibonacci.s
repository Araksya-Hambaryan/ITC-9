Fibonacci proc

MOV EAX, [EBP+8]
CMP EAX, 1
JA Recurse
MOV ECX, 1
JMP exit

Recurse:
DEC EAX
MOV EDX, EAX
PUSH EAX
CALL Fibonacci
ADD ESP, 4
MOV EBX, ECX
DEC EDX
PUSH EDX
CALL Fibonacci
ADD ECX, EBX
exit:
ret
Fibonacci endp

.data

end
