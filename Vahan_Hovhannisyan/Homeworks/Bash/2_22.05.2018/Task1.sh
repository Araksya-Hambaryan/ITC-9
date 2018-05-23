#!/bin/bash

read -p "Input path please: " path
read -p "Input number of files please: " num

cd $path

if [ $? -ne 0 ]; then
    echo "FAIL 1"
    exit 1
fi

ls -t | head -n "${num}"

if [ $? -ne 0 ]; then
    echo "FAIL 2"
    exit 1
fi

