#!/bin/bash

question () {
    question="What is the capital of "$2"? Please Enter full name."
    answer=$(sed -n "$1"p ./answers.txt)
    echo $question
    echo $answer
    read answer
    if [ "$answer" == $3 ]
    then
	points=$(expr $points \* 2)
        echo "You win "$points" points" | figlet
    else 
        echo "Game Over" | figlet
	exit
    fi
}
