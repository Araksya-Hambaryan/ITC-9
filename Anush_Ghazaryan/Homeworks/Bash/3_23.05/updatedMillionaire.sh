#!/bin/bash


    echo "Millionaire Quiz"
    echo "----------------"
    echo "If you are ready to play type YES : "
    read YES
       if [ $YES=YES ]; then
        echo -e "\n\nQuestion 1" 
      fi 
	q1() {
        echo "****************************"
        echo "How many bits are in a byte?"
        echo "****************************"
        echo "A: 4              B: 16"
        echo "C: 32             D: 8"
        }
	
        q1
	COUNT=15
        while (( COUNT > 0 )) 
	do
	echo -e "$COUNT \c"
	sleep 1
	(( COUNT -- ))
	done
        echo -e "\n\nYOUR ANSWER : "
        read ANSWER
        if [ $ANSWER != "D" ]; then
            echo "GAME OVER"
	    exit
        		
	fi
	echo -e "\n\nQuestion 2"
	q2() {
        echo "**********************************"
        echo "Which of these is a search engine?"
        echo "**********************************"
        echo "A: Youtube              B: Google"
        echo "C: Facebook             D: Apple"
        }
	q2
	COUNT=15
        while (( COUNT > 0 )) 
	do
	echo -e "$COUNT \c"
	sleep 1
	(( COUNT -- ))
	done
        echo -e "\n\nYOUR ANSWER : "
	read ANSWER
	if [ $ANSWER != "B" ]; then
	    echo "GAME OVER"
	    exit 
		
	fi
	echo -e "\n\nQuestion 3"
        q3() {
        echo "***********************************"
        echo "What is the source of solar energy?"
        echo "***********************************"
        echo "A: Oxygen           B: Sun"
        echo "C: Wind             D: Water"
        }
	q3
	COUNT=15
        while (( COUNT > 0 )) 
	do
	echo -e "$COUNT \c"
	sleep 1
	(( COUNT -- ))
	done
        echo -e "\n\nYOUR ANSWER : "
	read ANSWER
	if [ $ANSWER != "B" ]; then
	    echo "GAME OVER"
	    exit 
	    
	fi
	echo -e "\n\nQuestion 4"
	q4() {
        echo "*************************************************************"
        echo "Which of the following is not an image file format extension?"
        echo "*************************************************************"
        echo "A: JPEG            B: GIF"
        echo "C: PNG             D: MOV"
        }
	q4
	COUNT=15
        while (( COUNT > 0 )) 
	do
	echo -e "$COUNT \c"
	sleep 1
	(( COUNT -- ))
	done
        echo -e "\n\nYOUR ANSWER : "
	read ANSWER
	if [ $ANSWER != "D" ]; then
	    echo "GAME OVER"
	    exit
	    
	fi
	echo -e "\n\nQuestion 5"
	q5() {
        echo "*******************************************"
        echo "What was the first video game ever created?"
        echo "*******************************************"
        echo "A: Snake             B: Sudoku"
        echo "C: Mario             D: Pong"
        }
	q5
	COUNT=15
        while (( COUNT > 0 )) 
	do
	echo -e "$COUNT \c"
	sleep 1
	(( COUNT -- ))
	done
        echo -e "\n\nYOUR ANSWER : "
	read ANSWER
	if [ $ANSWER != "D" ]; then
	    echo "GAME OVER"
	    exit
	else 
	    echo "CONGRATS ! YOU ARE TODAY'S WINNER !"

        fi	    
	


	
     









