#!/bin/bash

source ./lib.sh
echo "Are you ready to begin? Enter 'Yes'!"
read answer
if [ "$answer" = "Yes" ]
then
    askQuestion 100 3
    askQuestion 200 4
    askQuestion 800 2
    askQuestion 2.000 1
    askQuestion 6.000 1
    askQuestion 8.000 3
    askQuestion 10.000 3
    askQuestion 20.000 1
    askQuestion 500.000 4
    askQuestion 1.000.000 3
    echo "Congratulations!!!!!"
fi




