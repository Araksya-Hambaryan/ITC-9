#!/bin/bash

echo "pleace save your works afer play, if you lose your computer are be LOCK 
=========================================================================="
source ./quest/lib.sh
for (( i=10; i>0; --i ))
do
    quest=$(($RANDOM % $i)) 
    beg=$(($quest * 6 + 1 ))
    end=$(($beg + 4))
    echo -n "
+++++++++++++++++++++++++

"
    sed -n ${beg},${end}p  question.txt
    read -p "enter variant number: " var
    while  [[ $var > 4 || $var < 1 ]]
    do
        echo "enter correct variant"
        read -p "enter variant number: " var
    done
    forQ=$(($end + 1))
    q=`sed -n ${forQ},${forQ}p question.txt`
    num=$(trueQuest "$q" $var)
    if [ $num == 0 ]
    then
        echo "you are LOSE"
        rm ./question.txt
#       init 0
         gnome-screensaver-command -l && exit
    else
        minusQuest $beg $forQ
    fi
done
    rm ./question.txt
    echo "you are WIN"
