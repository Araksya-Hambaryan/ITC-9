#!/bin/bash
inputfile=tnain
i=0
while read myline
do
    ((i++))
    if ((i%2 !=0)) 
    then
        echo "${myline}" | tr 1 0
    else
        echo "${myline}"
    fi  
done < $inputfile
