#!/bin/bash

function validationCheck {
    if [ $? -ne 0 ]; then
        echo "Some error occurred!"
        exit 1
    fi
}
read -p "Input URL please: " URL

validationCheck

cd ~/Desktop/

if [ ! -d "ITC-9" ]; then
    read -p "No such local repository found in Desktop. Do you want to clone in Desktop? y/n " yORn

    if [ yORn == 'y' ]; then
        git clone $URL
    else
        exit 0
    fi
else
    echo "Already cloned!"
fi

validationCheck

for d in ~/Desktop/ITC-9/
do
    find ~/Desktop/ITC-9/ -name '*Makefile'
if [ -s *Makefile ]; then
    g++ *Makefile &> file
fi
done

validationCheck
