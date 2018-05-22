#!/bin/bash

createFolder() {
	folder=gitRepo
	mkdir ~/Desktop/$folder
	cd ~/Desktop/$folder
}

checkGitAndInstall() {
    check=`which git`
    if [ ${#check} -eq 0 ]  
    then
		echo "===There is not git, Please entyer password for install==="
	    sudo apt-get update && sudo apt-get install git
    fi
}

cloneingGitRepo() {
	git clone $1
    statusOfClone=$?
    if ! test "$statusOfClone" -eq 0
    then
	    echo "=====Invalid URL====="
        exit 1
	fi
   	cd ~/Desktop/$folder/ 
}

findAndCompileCppFile() {
    cpp=(`find *.cpp`)
    size=${#cpp[*]}
    mkdir exe
    for (( i=0; i<$size; ++i ))
    do
	    find *.cpp | g++ -std=c++11 ${cpp[i]} -o ./exe/${cpp[i]}
    done
}

main() {
    createFolder
    checkGitAndInstall
    cloneingGitRepo $1
    findAndCompileCppFile
}

main

exit
