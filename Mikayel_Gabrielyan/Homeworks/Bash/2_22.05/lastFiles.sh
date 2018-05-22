#!/bin/bash
path="$1"
if [ ${#path} -eq 0 ]; then
    echo "please enter the path argument"
    exit
fi
read -p "enter count of lines -> " count
if [ 0 -gt $count ]; then
    echo "wrong input"
else
    ls -lt $path | head -$count
fi

