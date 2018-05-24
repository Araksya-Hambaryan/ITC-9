#!/bin/bash

name() {
    if [ "$1" == "-name" ]
    then
        if [ ${#2} != 0 ] 
            then 
                echo "Hello '$2' "
            else
                echo "pleace enter your name"
        fi
    else
        echo 'invalid option, enter "bash flag.sh <-name> [YourName]" '
    fi
}
        
