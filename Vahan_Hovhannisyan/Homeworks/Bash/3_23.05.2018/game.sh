#!/bin/bash

installProg() { #Program to display pictures
    if type caca-utils 2>/dev/null; then
        printf "Program already installed\n\n"
    else
        printf "Installing program for displaying pictures"
        sudo apt-get install caca-utils
    fi
}


callLines () {
    sed "$lineNum!d" questAns.txt && sed "$((lineNum+1))!d" questAns.txt
}

installProg
printf "\nGame started!\nInput A/B/C/D please.\n\n"
points=0
for lineNum in {1..20..4}
do
    callLines

    rightAns=$(sed "$((lineNum+2))!d" questAns.txt)

    read answer

    if [[ $answer == $rightAns ]]; then
        printf "Right!\n\n"
        let "points+=5"
    else
        printf "Wrong!\nPoints: $points\n\n"
        cacaview ~/Desktop/gameOver.png
        exit
    fi
done
cacaview ~/Desktop/Win.jpeg
