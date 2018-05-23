#!/bin/bash

#Check if git is installed

echo "Input URL please: "
read URL
if [[ $URL == https://github.com/* ]]; then
    echo "URL accepted!"
else
    echo "Wrong URL!"
    exit 1
fi

if [ ! -d "ITC-9" ]; then
    git clone $URL
else
    echo "Already cloned!"
fi

cd /home/student/rd/ITC-9/
for d in /home/student/rd/ITC-9/
do
find /home/student/rd/ITC-9/ -name '*Makefile'
if [ -s *Makefile ]; then
    g++ *Makefile > file
    #./a.out
fi
done
if [ $? -eq 1 ]; then
    echo "Done!"
else
    echo "There is an Error!"
fi
