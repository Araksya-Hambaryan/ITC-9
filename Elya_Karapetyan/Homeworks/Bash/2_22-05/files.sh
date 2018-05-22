#!bin/bash

read -p 'Please enter path of directory without ~/: ' path

read -p 'Please enter number of files: ' numberOfFile

nameOfFiles=`ls ~/$path -1t | head -$numberOfFile`

echo $nameOfFiles
