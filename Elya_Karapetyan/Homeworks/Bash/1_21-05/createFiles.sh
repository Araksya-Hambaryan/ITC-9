#!/bin/bash

createFile() {
    for((i=0; i<10; ++i))
    do
        touch file_${i}.txt 
        cat /dev/urandom | tr -dc 'a-zA-Z0-9' | fold -w 5 | head -n 2 > file_${i}.txt
        echo "*** FILE $i***"
        cat file_${i}.txt
    done
}

findSymbol() {
    read -p "Enter symbol: " findingSymbol
    for((i=0; i<10; ++i))
    do
        str=$(head -n 1 "file_${i}.txt" | grep $findingSymbol)
        if [ ${#str} == 0 ] 
        then
            rm file_${i}.txt
        else
            echo file_${i}.txt
        fi

    done
}

main() {
    createFile
    findSymbol
}

main



