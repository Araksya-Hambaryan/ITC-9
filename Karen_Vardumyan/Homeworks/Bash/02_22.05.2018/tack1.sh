#!/bin/bash
read -p "enter your path " path
read -p "enter count of last files " count
cd $path
ls -la | sort -r | head -n $count
exit
