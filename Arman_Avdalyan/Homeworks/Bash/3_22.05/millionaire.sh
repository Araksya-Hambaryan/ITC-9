#!/bin/bash

installProgram() {
    path=$(which figlet)
    if [ ${#path} = 0 ];
    then
        sudo apt install figlet
    fi
}

checkArray() {
    for item in ${array[@]};
    do
        if [ $item = $1 ];
        then
            hasElem=1
            return
        else
            hasElem=0
        fi
    done
}

getIndex() {
    hasElem=0
    index=$(((RANDOM % 10) + 1))
    checkArray $index
    while [ $hasElem = 1 ];
    do
        index=$(((RANDOM % 10) + 1))
        checkArray $index
    done
    array[$ind]=$index
    ((ind++))
}

startGame() {
    points=0
    ind=0
    size=$(wc -l < ./resources/questions)
    declare -a array
    for ((i=0; i<$size; i++));
    do
        getIndex
        question=$(sed -n "$index p" ./resources/questions)
        answer=$(sed -n "$index p" ./resources/answers)
        rightAnswer=$(sed -n "$index p" ./resources/correctAnswers)
        echo $question
        echo 
        select opt in $answer;
        do
            if [ "$opt" != "$rightAnswer" ];
            then
                echo Answer is $rightAnswer
                figlet Game over
                echo You have $points points 
                exit
            else
                echo Right answer
                let points=$points+5
                echo -----------------------------------------------------
            fi
            break
        done
    done
}

installProgram
startGame
figlet Yow win
echo You have $points points 
