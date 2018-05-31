#!/bin/bash

change() {
    for (( i=3; i<=$1; i=$(($i+3)) )) 
    do
        sed -i "$i s/1/0/g" text
    done
}
 
