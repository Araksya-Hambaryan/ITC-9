#!/bin/bash
read -p "enter path " path
read -p "enter count of last files " count
cd $path


fn=$(ls -t | head -n1)

echo $fn


exit
