#!/bin/bash

dirPath=./AllFiles
fileCount=$1
symbol=$2

createFolder() {
    if [ ! -d "$dirPath" ];
    then
        mkdir AllFiles
    fi
}

createAndAddText() {
    for ((i=1; i<=$fileCount; i++));
    do
        filePath=$dirPath/file$i.txt
        cat /dev/urandom | tr -dc "[A-Za-z]*" | fold -w 100 | head -c 1000 > $filePath
    done
}

checkLines() {
    for ((i=1; i<=$fileCount; i++));
    do
        filePath=$dirPath/file$i.txt
        line=$(head --lines=1 $filePath | grep "$symbol")
        if [ ! ${#line} = 0 ];
        then
            echo file$i.txt
        else
            rm $dirPath/file$i.txt
        fi
    done
}

createFolder
createAndAddText
checkLines
