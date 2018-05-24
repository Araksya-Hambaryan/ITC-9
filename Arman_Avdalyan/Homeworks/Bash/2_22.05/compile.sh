#!/bin/bash

url=$1

checkUrl() {
    if [ ${#url} = 0 ];
    then
        echo "Empty url"
        exit
    fi
}

installProgram() {
    error=$(sudo apt install "$1")
    if [ ${#error} != 0 ];
    then
        echo "Something went wrong. Could not install program $1"
        exit
    fi
}

checkProgram() {
    path=$(which "$1")
    if [ ${#path} = 0 ];
    then
        installProgram "$1"
    fi
}

cloneRepository() {
    checkProgram git
    if [ ! -d "ITC-9" ];
    then
        echo "Clonning into $url"
        error=$(git clone $url &> /dev/null)
        if [ ${#error} != 0 ];
        then
            echo "Wrong url"
            exit
        fi
    fi
}

createFolder() {
    if [ ! -d "$1" ];
    then
        mkdir "$1"
    fi
}

removeFile() {
    if [ -f "$1" ];
    then
        rm -rf "$1"
    fi
}

makeFiles() {
    checkProgram g++
    currentPath=$(pwd)
    printf "Please wait..."
    local arrayMake=$(find . -name Makefile)
    for path in $arrayMake;
    do
        cd $currentPath
        path=$(dirname $path)
        cd $path &> /dev/null
        make 2> $currentPath/error > /dev/null
        temp=$(< $currentPath/error)
        if [ ${#temp} = 0 ];
        then
            name=$(ls -t | head -n 1)
            out=$(readlink -f $name)
            mv $out $currentPath/CompiledFiles
            rm *.o &> /dev/null
            printf "."
        fi
    done
    removeFile error
    echo
}

checkUrl
cloneRepository
createFolder CompiledFiles
makeFiles
