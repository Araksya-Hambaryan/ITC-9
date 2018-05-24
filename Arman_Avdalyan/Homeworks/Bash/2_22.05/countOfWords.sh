#!/bin/bash

input() {
    printf "Input text : "
    read text
    printf "Input word : "
    read word
    echo $text > file
}

findCount() {
    count=$(echo "$text" | grep -o "$word" | wc -l)
    printf "Count of <"$word"> in text = %d\n" $count
}

input
findCount

