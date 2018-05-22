#!/bin/bash

for i in {1..20}
do 
    text="" 
    for i in {1..40}
    do
        text=$text$(($RANDOM % 2))
    done
    echo $text>>file
done

for i in {1..20}
do 
   sed -i "$i s/1/0/g" file
done
