#!/usr/bin/env bash
read var1 
echo $var1> file1
grep -o asa file1 | wc -l
