#!/bin/bash

string=$1
if [ ${#string} -eq 0 ]; then
    echo "size of string is 0, please input string argument"
    exit
fi
read -p "input the word -> " char
if [ ${#char} -eq 0 ] || [ ${#char} -gt ${#string} ]; then
    echo "size of word is 0 or great then string"
    exit
else
    echo "count is -> " `awk -F"${char}" '{print NF-1}' <<< "${string}"`
fi
