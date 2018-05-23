#!/bin/bash

mkdir allFiles
i=0
while [ $i -lt $1 ] 
do
    base64 /dev/urandom | head -c 10000000 > allFiles/"$i".txt
    i=`expr $i + 1`
done

for file in allFiles/*.txt
do
    if [[ $(cat "$file" | head -n 1 | grep "$2") -eq 0 ]];
    then
        echo "${file##*/}"
    else
        rm "$file"
    fi
done 
rm -rf allFiles
