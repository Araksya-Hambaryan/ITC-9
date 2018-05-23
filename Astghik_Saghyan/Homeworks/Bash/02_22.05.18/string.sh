#!/bin/bash

if [ -n "$1" ] && [ -n "$2" ]
then
    echo "$1" | grep -o "$2" | wc -l
else
    echo "Add two strings as agument!"
    exit
fi
