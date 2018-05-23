#!bin/bash

read -p "enter string 1: " str
read -p "enter string 2: " str2
echo $str | grep -o $str2 | wc -l
