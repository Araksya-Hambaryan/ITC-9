#!/bin/bash

lines=100
length=40
>file

insertNumbers() {
    for ((i=0; i<$lines; i++));
    do
        str=""
        for ((j=0; j<$length; j++));
        do
            str=$str$(($RANDOM % 2))
        done
    done
}

replaceNulls() {
    for ((i=0; i<=$lines; i++));
    do
        sed -i '$is/1/0/' file.txt
    done
}

insertNumbers
replaceNulls
