#!/bin/bash
    minusName(){
        for(( i=1; i<=$#; ++i));
        do
            if [ ${!i} = "-name" ]; then
                next=$((++i))
                echo  ${!next}
            fi
         done
     }
    minusName $1 $2

