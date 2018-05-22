#!/bin/bash

echo "Matching of words"
string="she loves Tux !"
char=","
awk -F"${char}" '{print NF-1}' <<< "${string}"

echo "Matching of a letter"

echo "she loves Tux" | tr -cd 's' | wc -c
