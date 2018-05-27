#!/bain/bash
game () {
    array_of_questions=($(shuf -i 1-10  ))
    point=0
    step=0
    while [ $step -le 9 ]
    do
        let num=$step+'1'
        echo 
        echo Question No-$num
        sed ''${array_of_questions[$step]}'q;d' issues.txt
        echo
        sed ''${array_of_questions[$step]}'q;d' options.txt
        echo
       	read -p "Your answer --> " answer
        if [ "$answer" == "$(sed ''${array_of_questions[$step]}'q;d' correct_answers.txt)" ]
        then
	    let point=$point+'5000'
            if [ $step -eq 9 ] 
            then
                echo
		echo "                      Congratulations, you scored $point points"
                head -n 13 winner.txt 
                exit
            fi
            echo
            echo Correct answer
            echo Congratulations you have $point point!!!
            echo
            echo '==============================================================================='
            echo
        else 
            echo
            echo You lose.The answer is incorrect
            echo You were able to score only $point points
            echo Thanks for the game
            echo
            exit
        fi
        let step=$step+'1'
    done
}
game
