#!/bin/bash

echo "Are you ready to begin? Enter 'Yes'!"
read answer
if [ "$answer" = "Yes"]
then
    echo
    "Win 100$
     What will be the sum of 15 and 20 (Enter 1, 2, 3 or 4)?
    1. 12
    2. 59
    3. 35
    4. 11"
    read answer
    if [ $answer="3" ]
    then
        echo "You win 100$"
    else 
        echo "Game Over"
        exit
    fi
    echo
    "Win 200$
    What is the capital of India?
    1. New Delhi
    2. Mumbai
    3. Gurugram
    4. Jaipur
    read answer"
    if [ $answer="1" ]
    then
        echo "You win 200$"
    else 
        echo "Game Over"
        exit
    fi
fi




