#!/bin/bash

read -p "Enter any path " path
while [[ -z "$path" ]]
do
    read -p "Please, Enter any path: " path
done

read -p "enter count of last files " count
while [[ -z "$count" ]]
do
    read -p "Please, Enter any count: " count 
done


fileName=`ls $path -1t | head -$count`

echo $fileName


