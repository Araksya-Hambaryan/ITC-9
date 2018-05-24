#!/bin/bash/

generateNums() {
    for i in {1..10}
    do

        for i in {1..10}
        do
            text+=$((RANDOM % 2))
        done

        text+="\n"

    done
}

putNumsIntoFule() {
    printf "$text" > fileBinary
}

replaceZeros() {
    sed -i '2~2 s/1/0/g' fileBinary # -i means 'sed' makes changes directly in a file
}

generateNums
putNumsIntoFule
replaceZeros
