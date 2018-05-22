#!/bin/bash

echo -n "Input 1st string please: "
read str1
echo -n "Input 2nd string please: "
read str2

str1len=0
for i in $(seq 1 ${#str1})
do
    ((++str1len))
done
echo "The length of 1st string is: $str1len"

str2len=0
for i in $(seq 1 ${#str2})
do
    ((++str2len))
done
echo "The length of 2nd string is: $str2len"

lenDiff=$str1len-$str2len
counter=0
for ((i=0; i<$lenDiff; ++i))
do
    if [[ ${str1:$i:$str2len} == $str2 ]]; then
        ((++counter))
    fi
done

echo "Number of occurences of a substring is: $counter"
