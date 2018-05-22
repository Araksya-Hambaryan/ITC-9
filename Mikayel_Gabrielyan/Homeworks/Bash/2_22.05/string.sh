#!/bin/bash

#count="$#"
#echo "count: $count"
string=$1
char=$2
#aa=$dd${count}
#echo "aa: $aa"
echo "count is -> " `awk -F"${char}" '{print NF-1}' <<< "${string}"`
