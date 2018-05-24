#!/bin/bash

lines=20
lineLength=40

insertNum () {
for ((i=0; i<$lines; i++));
do 
    text="" 
    for ((j=0; j<$lineLength; j++))
    do
        text=$text$(($RANDOM % 10))
    done
    echo $text>>file.txt
done
}

changeNumToZro () {
for ((i=2; i<=$lines; i+=2));
do 
   sed -i "$i s/./0/g" file.txt
done
}

insertNum
changeNumToZro
