#!/bin/bash

url=$1
if [ ${#url} = 0 ];
then
    echo "Empty url"
    exit
fi

currentPath=$(pwd)

checkPrograms() {
    gitPath=$(which git)

    if [ ${#gitPath} = 0 ];
    then
        sudo apt install git
    fi
    compilerPath=$(which g++)

    if [ ${#compilerPath} = 0 ];
    then
        sudo apt install g++
    fi
}

cloneRepository() {
    if [ ! -d "ITC-9" ];
    then
        echo "Please wait clonning into $url"
        git clone $url 2> $currentPath/error
        if [ ! -s $currentPath/error ];
        then
            echo "Wrong url"
            rm error
            exit
        fi
    fi
}

checkFolder() {
    if [ ! -d ./CompiledFiles ];
    then
        mkdir CompiledFiles
    fi
}

makeFiles() {
    echo Please wait...
    local arrayMake=$(find . -name Makefile)
    for path in $arrayMake;
    do
        path=$(dirname $path)
        cd $path 2> $currentPath/trash
        make &> $currentPath/trash
        rm *.o &> $currentPath/error
        name=$(ls -t | head -n 1)
        out=$(readlink -f $name)
        mv $out $currentPath/CompiledFiles &> $currentPath/trash
        cd $currentPath
    done
    if [ -f error ];
    then
        rm error
    fi
    cd $currentPath/CompiledFiles
    rm -rf "${d%/.}"
    cd $currentPath
    rm trash
}

checkPrograms
cloneRepository
checkFolder
makeFiles
