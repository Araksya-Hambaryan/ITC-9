#!/bin/bash

random() {
    for ((i=0; i<20; i++));
    do
        text=""
        for ((j=0; j<40; j++));
        do
            text=$text$(($RANDOM % 2))
        done
        echo $text>>file
    done
}

move() {
    random
    for ((i=2; i<=20; i+=2)) 
    do
        sed -i "$i s/1/0/g" file
    done
}
move

