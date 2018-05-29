#!/bin/bash
for (( i=1; i<=$#; i++))
do
    if [ ${!i} = "-name" ]
    then
        j=$((i+1))
        echo ${!j}
    fi
done



