#!/bin/bash

#To start the project specify the count of files that the program should create

step_of_while=1
count_of_files=$1

creat_files () {
    while [ $step_of_while -le $count_of_files ]
    do
    	touch file_$step_of_while
    	step=0
    	lenght_of_line=30
    	while [ $step -le $lenght_of_line ]
    	do
    	    new_line=$(cat /dev/urandom | tr -dc '!-~' | fold -w 50 | head -n 1)
      	    echo $new_line >> file_$step_of_while
	    let step=$step+'1'
        done
    let step_of_while=$step_of_while+'1'
    done
}
find_files () {
    step=1
    echo
    echo The program created $count_of_files files
    echo The first lines of these files have character \'@\'
    echo Other files are deleted by the program
    while [ $step -le $count_of_files ]
    do
	string=$(head -n 1 file_$step)
	if [[ $string = *"@"* ]]; then
	    echo "  file_$step"
	else
  	    rm file_$step
	fi
	let step=$step+'1'
    done
}
main () {
  creat_files
  find_files
}
main
