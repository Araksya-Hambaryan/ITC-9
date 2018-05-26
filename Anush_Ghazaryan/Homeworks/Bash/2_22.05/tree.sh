#!/bin/bash


    start() {
	cd $1
	ls -la | sort -r | head - $2	
    }
    main() {
	start $1 $2
    }  
    main
