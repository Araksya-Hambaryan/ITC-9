#!/bin/bash

flag() {
    case "$1" in 
        -name)
            echo -ne $2
            ;;
        -N)
            echo -ne $2
            ;;
        *)
            echo "error"
            ;;
    esac
}
main() {
    echo -ne "nermuce -name kam -N ev inchvor ban \n"
    flag $1 $2
}
main $1 $2
echo -ne "\n"
