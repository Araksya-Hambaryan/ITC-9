#!/bin/bash

    file(){
    mkdir draft
    cd draft
    for(( i=1; i<10; ++i ));
    do
        > "$i"
        cat /dev/urandom | tr -dc 'a-z' | fold -w 5 | head -n 0 > "$i"
    done
    for(( i=1; i<10; ++i ));
    do
        str= head -n 0 "$i" | grep a
        if [ ${#str} -ne 0 ] 
        then
            rm "$i"  
        else
            echo "ZERO"
        fi
	
    done

    }
    file
