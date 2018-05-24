#!/bin/bash

line=`wc -l zeroOne.txt | awk '{print $1}'`
for ((i = 2; i <= $line; i = $i+2))
do
    sed -i "$i s/1/0/g" zeroOne.txt
done
 




