#!/bin/bash

path=$1
count=$2

if [ "$1" = "" ] || [ "$2" = "" ];
then 
    echo "Input file path and count."
    exit
fi

let temp=$count+2
currentPath=$(pwd)

cd $path
tree -ti | tail -n $temp > $currentPath/info
sed -i '$d' $currentPath/info
sed -i '$d' $currentPath/info

head -n $count $currentPath/info

if [ -f $currentPath/info ];
then
    rm $currentPath/info
fi
