#!/bin/bash/
for i in {1..10}
do

    for i in {1..10}
    do
        text+=$((RANDOM % 2))
    done

    text+="\n"

done
printf "$text" > fileBinary

sed -i '2~2 s/1/0/g' fileBinary # -i means 'sed' makes changes directly in a file
