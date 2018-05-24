#!/bin/bash

function askQuestion () {
    question=`sed -n "/Win $1/,/!/p" questions.txt`
    echo -e $question
    read answer
    if [ $answer -eq $2 ]
    then
        echo "_____You win $1$

"
    else
        echo "Game Over"
        exit
    fi
}


