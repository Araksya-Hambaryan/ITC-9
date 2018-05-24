#!/bin/bash

    >file1
    LENGTH=10
    WIDTH=10

    input() {
	for((i=0; i<10; ++i));
	do
	    for((j=0; j<10; ++j));
	        do
		    line=$line$(($RANDOM % 2))
		done
		echo $line >>file1
	done
    }
    change() {
	for((i=2; i<=10; i+=2));
	do
		sed -i "$i s/1/0/g" file1
	done

    }
    input
    change
