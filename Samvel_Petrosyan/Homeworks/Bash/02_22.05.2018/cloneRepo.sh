#!/bin/bash

if [ -z $1 ]
then
	echo "Please enter url"
	exit
else 
    git --version > fileinfo.txt
    if [ $? -eq 1 ]
    then 
    echo "Please install git first!"
    exit
    else
    git clone $1 >> fileinfo.txt
    if [ $? -eq 0 ]
    then 
    mkdir generated
    cd generated
    a=$(find ~/ITC-9 -type f -name 'Makefile')
    for b in $a
    do
    DIR=$(dirname "${b}")
    cd $DIR
    make >> fileinfo.txt 2> fileErr.txt
    fileName=`ls -ltr | tail -n 1 | cut -d ' ' -f 9`  
    mv -v $fileName ~/generated/$fileName               
    done
    else 
    echo "Git clone failed!"
    fi
    fi 
fi	

