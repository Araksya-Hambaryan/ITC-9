#!/bin/bash

echo "Let's start the game"
echo "Press any key to see the first question"

read -s answer
if [ ! -z "$answer" ]
then
    question="What is the capital of Portugal? (Enter 1, 2, 3, 4)"
    choice1=$(sed -n '1p' ./answers.txt)
    choice2=$(sed -n '2p' ./answers.txt)
    choice3=$(sed -n '3p' ./answers.txt)
    solution=$(sed -n '4p' ./answers.txt)
    echo $question
    echo $choice1
    echo $choice2
    echo $choice3
    echo $solution
    read answer
    if [ "$answer" == "4" ]
    then
        echo "You win 10 point" | figlet
    else 
        echo "Game Over" | figlet
    fi
fi
