#!/bin/bash  
 
while getopts ":name" opt
do
    case $opt in
        n)let mem=$OPTIND
            if [ ${!mem} == "--name" ] || [ ${!mem} == "-name" ]
               then
                  
                  ((mem++))
                  echo "${!mem}"
               fi
                   ;;
    esac

done
