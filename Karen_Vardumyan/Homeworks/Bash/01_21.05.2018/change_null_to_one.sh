#!/bin/bash

step_of_while=1

random_line () {
    RANGE=2
    lenght_of_line=0
    line=0
    while [ $lenght_of_line -le 80 ]
    do
        number=$RANDOM
        let "number %= $RANGE"
        line=$line$number
        let lenght_of_line=$lenght_of_line+$step_of_while
    done
echo $line
}
creat_file () {
    index_of_line=0
    while [ $index_of_line -le 60 ]
    do
        buff=$(random_line)
        echo $buff >> my_file
        let index_of_line=$index_of_line+$step_of_while
    done
}
change_0_to_1 () {
    current_line=2
    step=2
    index_of_cycle=0
    while [ $index_of_cycle -le 80 ]
    do
        sed -i "$current_line s/0/1/g" my_file
        let current_line=$current_line+$step
        let index_of_cycle=$index_of_cycle+$step
    done
}
creat_file
change_0_to_1                         
