#!/bin/bash

   let ANSWER=0
   let GRADES=0
   let LINE=1

    
    start() {
    echo "Millionaire Quiz"
    echo "If you are ready to play type YES : "
    read INPUT
    if [ $INPUT == "YES" ]; then
	play
    elif [ $INPUT == "NO" ]; then
	echo "Try later!"
	exit
    else 
	exit
    fi
    }
    check() {
     	if [ $1 !=  $2 ]; then
      	 # let  GRADES=$GRADES+5
      	   echo "GAME OVER"
	   exit 
      	else
      	    echo "CONGRATS!"
      	    return 0
      	fi
    }

    play() {
	
	for((i=1; i<=11; ++i))
	do

	ANSWER='sed -n "$i","$i"p ./Answers.txt'
	let line1=$LINE+4
        sed -n "$LINE","$line1"p ./Questions.txt
	sleep 5
	read -p "Your Answer : " answer
	check $answer $ANSWER
  #  	if [ $answer !=  $ANSWER ]; then
 #     	  let  GRADES=$GRADES+5
#	   echo "GAME OVER"
     # 	   exit
    #  	else
   #   	    echo "CONGRATS!"
  #    	    return
 #     	fi

	let line=$LINE+1
	done
	echo "CONGRATS!!!"
	echo "You Won !!!"
    }

    main() {
	start
    }
    main
