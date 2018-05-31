#!/bin/bash
dirName=folder
if [ ! -d "$dirName" ]; then
    mkdir ./$dirName
fi

function creatFiles() {
    cd ./$dirName
    for i in {1..10}
        do
            touch file$i
            cat /dev/urandom | tr -dc 'a-z' | fold -w 9 | head -5 > "file$i"
        done
}

function checkSimbol() {
    for i in {1..10}
        do
            string= head -n 1 "file$i" | grep a
        if [ ${#string} -eq 0 ]; then
            rm file$i
        else
            echo file$i
        fi
    done
}

creatFiles
checkSimbol

