#!/bin/bash

readStringAndChar () {
read -p "enter string: " string
stringLength=${#string}
read -p "enter char: " char
count=0
}

searchCharInString () {
for (( i=0; i <$stringLength; i++ )) 
do
  tmp=${string:i:1}
  if [[ $tmp == $char ]]
  then
    count=$[$count+1]
  fi
done
}

readStringAndChar
searchCharInString
echo "we have $count $char in $string"
