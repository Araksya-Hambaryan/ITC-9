#!bin/bash
car="
 ________________
|aystex karox e |
|linel dzer gov-|
|azd@           |
|_______________|
    __|_____
   /____|___\____
  /  _  |    _   |<<<
 _|_/ \_|___/ \___]
    \_/     \_/
"
i=0
while [ $i -le 40 ]
do
    (( i++ ))
    echo -en "$car" | sed 's/^/ /' 
    sleep 0.2
    car=$(echo -n "$car" | sed 's/^/ /')
clear
done



