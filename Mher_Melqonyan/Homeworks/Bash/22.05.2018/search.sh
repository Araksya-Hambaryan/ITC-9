#!bin/bash
read -p 'Text: ' txt
read -p 'Searching: ' src
if [ ! -z "$txt" ] && [ ! -z "$src" ]
then
    printf "%s"  $txt | grep -o $src | wc -l
else
    echo "Input is empty :("
fi
