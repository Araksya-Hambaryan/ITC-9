#!/bin/bash

isTrue=0

for i in "$@";
do
    if [ $isTrue = 1 ];
    then
        echo $i
        isTrue=0
    fi

    if [ $i = "-N" ] || [ $i = "--name" ];
    then
        isTrue=1
    fi
done
