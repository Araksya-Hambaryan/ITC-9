#!/bin/bash

sudo apt-get install caca-util


printf "Game started!\nInput A/B/C/D please.\n"
points=0

printf "Question 1: What's the largest object in our Solar system?\nA.Sun\nB.Moon\nC.Human ignorance\nD.Jupiter\n"
read ans1
if [ $ans1 == 'A' ]; then
    printf "Right!\n\n"
    let "points+=5"
else
    printf "Wrong!\nPoints: $points\n\n"
    cacaview ~/Desktop/gameOver*
    exit
fi

printf "Question 2: What's one light year equal to?\nA.365 days\nB.The distance the light travels within a year (About 11 trillion(!) kilometers).\nC.12 months.\nD.I'm not interested in Astronomy!\n"
read ans2
if [ $ans2 == 'B' ]; then
    printf "Right!\n\n"
    let "points+=5"
else
    printf "Wrong!\nPoints: $points\n\n"
    cacaview ~/Desktop/gameOver*
    exit
fi

printf "Question 3: What's the most recognized phrase Littlefinger said in Game of Thrones?\nA.Fire and Blood\nB.Chaos is a Ladder!\nC.Winter is coming!\nD.I don't watch Game of Thrones!\n"
read ans3
if [ $ans3 == 'B' ]; then
    printf "Right!\n\n"
    let "points+=5"
else
    printf "Wrong!\nPoints: $points\n\n"
    cacaview ~/Desktop/gameOver*
    exit
fi

printf "Question 4: How old is our universe?\nA.10,000 years!\nB.2,000 years!\nC.10,000,000 years old\nD.More than 13,000,000,000 years!!!\n"
read ans4
if [ $ans4 == 'D' ]; then
    printf "Right!\n\n"
    let "points+=5"
else
    printf "Wrong!\nPoints: $points\n\n"
    cacaview ~/Desktop/gameOver*
    exit
fi

printf "Question 5: A man-made object that moves at about 17.6 kilometers per second and now is the farthest from the Earth?\nA.Falcon Heavy rocket\nB.Apollo 11 rocket\nC.Voyager 1\nD.I just want to end this game as fast as possible!\n"
read ans5
if [ $ans5 == 'C' ]; then
    printf "Right! You've won!\nPoints: $points\n\n"
    let "points+=5"
    cacaview ~/Desktop/Win*
else
    printf "Wrong!\nPoints: $points\n\n"
    cacaview ~/Desktop/gameOver*
    exit
fi































