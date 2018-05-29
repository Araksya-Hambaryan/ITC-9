#!/bin/bash

while [ ! $# -eq 0 ]
do
    case "$1" in
         -name)
                echo $2
                exit
                ;;
             *)
                echo "Try again"
                exit
                ;;
    esac
done
