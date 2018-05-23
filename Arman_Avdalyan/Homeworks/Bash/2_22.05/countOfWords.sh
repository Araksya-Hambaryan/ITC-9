#!/bin/bash

input() {
    printf "Input text : "
    read text
    printf "Input word : "
    read word
    echo $text > file
}

findCount() {
    count=0
    #until [[ $diff -ne 0 ]];
    while true;
    do
        charCount=$(wc -c < file)
        sed -i "s/$word//" file
        charCount1=$(wc -c < file)
        let diff=$charCount-$charCount1
        if [ $diff = 0 ];
        then
            break
        fi
        let count++
    done
}

input
findCount

rm file
printf "Count of <"$word"> = %d" $count
echo
