#!/bin/bash
    for (( i = 2; i <= 20; i +=  2 ));
	do
	    sed -i "$i s/1/0/g" "binary.Nums.txt"
	done
