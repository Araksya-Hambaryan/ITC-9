
#!/bin/bash

proc=1

while [  $proc -lt 1000 ]; do

if (($proc < 10000))
then
ps -p $proc -o comm= >> <file_name>
fi
let proc=proc+10

done

