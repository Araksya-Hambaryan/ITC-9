#!bin/bash
`cd $1` | 2>err
if ! [ -s err ]; then
    num='^[0-9]+$'
    if ! [[ $2 =~ $num ]] ; then
        echo "error: Not a number"
    else 
        ls -1t | head -$2
    fi
fi
