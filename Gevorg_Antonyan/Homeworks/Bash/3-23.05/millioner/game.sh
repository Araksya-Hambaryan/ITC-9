#!/bin/bash

echo "pleace save your works afer play, if you lose your computer are be shut down!!!
=========================================================================="
source ./lib.sh
for (( i=10; i>0; --i ))
do
    quest=$(($RANDOM % $i)) 
    beg=$(($quest * 5 + 1 ))
    end=$(($beg + 4))
    sed -n ${beg},${end}p  question.txt
    read -p "enter variant number: " var
    q=`sed -n ${beg},${beg}p question.txt`
    num=$(trueCase "$q" $var)
    if [ $num == 0 ]
    then
        echo "you are LOSE"
        rm ./question.txt
        init 0
    fi
    minusQuest $beg $end
done
    rm ./question.txt
    echo "you are WIN"
