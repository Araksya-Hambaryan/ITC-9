#!bin/bash

check() {
    if [ $1 == 10 ]
    then
        sleep 1
        echo -ne "\n\nCongratulations!!! You Won 1000$ \n\n"
        exit 
    fi

}

youWon() {
    for((i=1; i<=$answers;++i))
    do
        money=$(( $answers * 100 ))
    done
}

play() {
    answers=0
    size=10
    read -p "If you are  ready to play type < YES >: " input
    if [ $input != "YES" ]
    then
     echo "Try again later!"
     exit
    else
    index=1
    for((i=1; i<=$size+1;++i))
    do
        quesions=$(sed -n "${index}{p}" Questions.txt)
        ((optionsI=index+1))
        option=$(sed -n "${optionsI}{p}" Questions.txt)
        ((rightAnswer=index+2))
        right=$(sed -n "${rightAnswer}{p}" Questions.txt)
        ((index+=3))
        echo -ne "\n" $quesions
        echo -ne "\n\n"
        PS3=' Your Answer: ' 
        select options in $option
        do
            if [ $options == $right ] 
            then
                ((answers++))
                echo -ne "\n"
                check $answers
                youWon
		sleep 1
                echo "You got: " $money "$ !!! "
		sleep 1
                echo -ne "\n\n"
	        echo " Next Question"

                break
            else
                next=" $(   source ./gameOver.sh)"
		echo "$next"	
                exit
            fi
        done
    done
fi
}

main() {
    play
}

main
