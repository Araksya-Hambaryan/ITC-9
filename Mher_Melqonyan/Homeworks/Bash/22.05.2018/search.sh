#!bin/bash
read -p 'Text: ' txt
read -p 'Searching: ' src
printf "%s"  $txt | grep -o $src | wc -l
