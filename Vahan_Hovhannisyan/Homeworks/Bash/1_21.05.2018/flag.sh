#!bin/bash

if [[ "$#" -le 1 ]];then
    echo "There must be at least two arguments! (file_name is'nt counted as one)\n"
    exit 1
fi

for (( i=1; i<$#; ++i)); do
    if [[ "${!i}" == "--name" ]] || [[ "${!i}" == "-n" ]] || [[ "${!i}" == "-name" ]]; then
        j=$((i+1))
        echo "${!j}" #print the argument next to '-name'
    fi
done

if [ -z $j ]; then #if $j is an empty string it means there was no name found.
    echo "A '-name' flag and a name expected!\n"
    exit 1
fi
exit
