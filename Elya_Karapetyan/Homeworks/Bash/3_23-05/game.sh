#!bin/bash

messageForStart() {
    read -p "Are you ready to start the game? y/n: " start
    if [ $start == "y" ]
    then
        startGame
    elif [ $start == "n" ]
    then
        echo "Please start the game when you will ready :)"
        exit
    else
        echo "Invalid input"
        exit
    fi
}

win() {
    if [ $1 == 10 ]
    then
       echo -ne "\n\n=====You Win=====\n\n"
       exit 
    fi

}

winningMoney() {
    for((i=1; i<=$countTrueAnswer;++i))
    do
        money=$(( $countTrueAnswer * 100 ))
    done
}

startGame() {
    countTrueAnswer=0
    countOfQuesion=10

    index=1
    for((i=1; i<=$countOfQuesion+1;++i))
    do
        quesion=$(sed -n "${index}{p}" questions.txt)
        ((optionIndex=index+1))
        option=$(sed -n "${optionIndex}{p}" questions.txt)
        ((trueAnswerIndex=index+2))
        trueAnswer=$(sed -n "${trueAnswerIndex}{p}" questions.txt)
        ((index+=3))
        echo -ne "\n" $quesion
        echo -ne "\n\n"
        PS3='Select option: '
        select options in $option
        do
            if [ $options == $trueAnswer ] 
            then
                ((countTrueAnswer++))
                echo -ne "\n"
                win $countTrueAnswer
                winningMoney
                echo "Your winning money: " $money "$"
                echo -ne "\n\n"
                break
            else 
                echo -ne "\n\n=====Game over=====\n\n"
                exit
            fi
        done
    done
}

main() {
    messageForStart
}

main
