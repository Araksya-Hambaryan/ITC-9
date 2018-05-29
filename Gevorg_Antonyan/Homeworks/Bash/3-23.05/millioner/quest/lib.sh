#!/bin/bash

cp ./quest/question.txt ./
minusQuest() {
    sed ${1},${2}d question.txt > quest.txt
    rm question.txt
    mv quest.txt question.txt
}

trueQuest() {
    if [ $1 == $2 ]
    then
        num=1
    else
        num=0
    fi
echo $num
}

