#!/bin/bash

defaultPath=./
defaultLine=10
read -p "enter PATH: " path
if [ ${#path} -eq 0 ]
then
    path1=$defaultPath
else
    path1=$path
fi
read -p "enter line: " line
if [ ${#line} -eq 0 ]
then
    line1=$defaultLine 
else
    line1=$line
fi
count=$(($line1 + 1))
ls -lt $path1 | head -$count
exit
