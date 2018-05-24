#!bin/bash

AllFiles=./AllFiles

createFolder () {
if [ ! -d "$AllFiles" ]; then
  mkdir AllFiles
  cd AllFiles
else 
  echo "the directory is exist"
  exit
fi
}

createText () {
for i in {1..10}
do
    touch "file$i.txt"
    cat /dev/urandom | tr -dc 'A-Za-z' | fold -w 20 | head -n 5 > "file$i.txt"    
done
}

check () {
for i in {1..10}
do
    string= head -n 1 "file$i.txt" | grep a
    if [ ! ${#string} = 0 ];
    then
	echo "OK"  
    else
        rm file$i.txt 
    fi
done
}

createFolder
createText
check
