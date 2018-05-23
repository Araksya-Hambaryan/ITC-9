#!/bin/bash

    Path=$Path
    if [ ${#Path} -eq 0 ]; then
        echo  "Enter the Path : " 

    fi
   
    read -p "Enter line number : " Line
    if [ 0 -gt $Line ]; then
	echo "Wrong"
    else
	ls -lt $Path | head -$Line
    fi
