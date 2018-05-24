#!/bin/bash

path=$1
count=$2

checkArguments() {
    if [ "$path" = "" ] || [ "$count" = "" ];
    then
        echo "Input file path and count."
        exit
    fi
}


getList() {
    let temp=$count+2
    cd $path
    output=$(tree -ti | tail -n $temp | head -n $count)
    printf '%s\n' "${output[@]}"
}

checkArguments
getList
