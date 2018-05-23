#!/bin/bash

flag() {
    case "$1" in
            -name)
                echo -ne "\nHello " $2 "\n"
                ;;
            *)
                echo -ne "\nInvaled flag\n"
                ;;
    esac
}

main() {
    echo -ne "\nPlease enter -name <name> flag if you want print name\n"
    flag $1 $2
}

main $1 $2
