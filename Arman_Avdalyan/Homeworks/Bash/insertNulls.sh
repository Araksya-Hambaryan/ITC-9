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
        echo $str>>file
    done
}

replaceNulls() {
    for ((i=2; i<=$lines; i+=2));
    do
        sed -i "${i}s/1/0/" file
    done
}

insertNumbers
replaceNulls
