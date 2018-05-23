#!/bin/bash

cp ./quest/question.txt ./
minusQuest() {
    sed ${1},${2}d question.txt > quest.txt
    rm question.txt
    mv quest.txt question.txt
}

trueCase() {
    case "$1" in
        "sin(30) = ")
            if [ $2 == 2 ]
            then
                num=1
            else
                num=0
            fi
            ;;
        "How many bits in 1 byte")
            if [ $2 == 1 ]
            then
                num=1
            else
                num=0
            fi
            ;;
        "whith is OS")
            if [ $2 == 4 ]
            then
                num=1
            else
                num=0
            fi
            ;;
        "i = 11; std::cout >> ++i")
            if [ $2 == 3 ]
            then
                num=1
            else
                num=0
            fi
            ;;
        "which means USB")
            if [ $2 == 3 ]
            then
                num=1
            else
                num=0
            fi
            ;;
        "MBR Size")
            if [ $2 == 2 ]
            then
                num=1
            else
                num=0
            fi
            ;;
        "50 + 50 =")
            if [ $2 == 1 ]
            then
                num=1
            else
                num=0
            fi
            ;;
        "tg(45) = ")
            if [ $2 == 4 ]
            then
                num=1
            else
                num=0
            fi
            ;;
        "what is LILO ?") 
            if [ $2 == 2 ]
            then
                num=1
            else
                num=0
            fi
            ;;
        "1 + 1 != ")
            if [ $2 == 3 ]
            then
                num=1
            else
                num=0
            fi
            ;;

        *)
            num=0
    esac
    echo $num
}

