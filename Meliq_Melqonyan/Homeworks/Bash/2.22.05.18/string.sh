#!/usr/bin/env bash
read var1 
read var2
echo "$var1" | grep -o "$var2" | wc -l
