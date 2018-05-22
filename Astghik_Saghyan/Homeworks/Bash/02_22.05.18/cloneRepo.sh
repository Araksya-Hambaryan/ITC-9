#!/bin/bash

if [ -z $1 ]
then
	echo "please enter url"
	exit
else 
	git clone $1
	mkdir generated
	cd generated
	a=$(find /home/student/ITC-9 -type f -name 'Makefile')
#	echo $a
	for b in $a
	do
		DIR=$(dirname "${b}")

#		name=`basename $b`
#		name=${name::-4}
#		echo $name
#		echo $DIR
		pwd
		cd $DIR
		`make`
#		echo $b
#	    g++ -o $name $b
	done 
fi	

