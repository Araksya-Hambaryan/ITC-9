# bin/bash

inputStrings() {
    read -p "Enter first string: " firstString
    read -p "Enter second string: " secondString
}

countOfSubstring() {
    firstSize=${#firstString}
    size=${#secondString}
    count=0
    for (( i=0; i<$firstSize; ++i )) 
    do
        tmp=${firstString:i:$size}
        if [ "$tmp" == "$secondString" ] 
        then
            count=$[$count + 1];
        fi
    done
}

main() {
    inputStrings
    countOfSubstring
    echo "Count of <" $secondString "> substing in <" $firstString "> string is " $count
}

main

exit
