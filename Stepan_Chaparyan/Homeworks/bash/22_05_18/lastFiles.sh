#!/bin/bash

enterPath () {
read -p "Enter any path " path
while [[ -z "$path" ]]
do
    read -p "Please, Enter any path: " path
done
}

enterCount () {
read -p "enter count of last files " count
while [[ -z "$count" ]]
do
    read -p "Please, Enter any count: " count 
done
}

getLastFile () {
fileName=`ls $path -1t | head -$count`
echo $fileName
}

enterPath
enterCount
getLastFile

