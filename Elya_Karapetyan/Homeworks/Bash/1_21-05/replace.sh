#!/bin/bash

countOfLine=$(cat file.txt | wc -l)
for((line=2;line<=$countOfLine;line=$line+2))
do
    sed -i "$line s/1/0/g" "file.txt"
done
