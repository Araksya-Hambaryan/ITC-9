#!bin/bash
b=$(tput bold)
n=$(tput sgr0)
P='\033[1;35m'
G='\033[1;32m'
N='\033[0m' 
cnt=0
printf "${P}Hi wanna play?...Y/N?${N}\n "
read ans
if [ "$ans" != "${ans#[Yy]}" ] ;then
    len=10
    while (( $len != 0 ))
    do
        rnd=$((RANDOM%18+1))
        arr=(3 2 1 3 3 4 3 3 1 4 3 4 2 2 1 2 3 3)

        case $rnd in
            1)
                echo " Which disease devastated livestock across
                the UK during 2001?

                1 Hand-and-foot
                2 Foot-in-mouth
                3 Hand-to-mouth
                4 Foot-and-mouth
                ";;
            2) 
                echo "Which of these kills its victims by constriction?

                1 Andalucia
                2 Anaconda
                3 Andypandy
                4 Annerobinson ";;
            3) echo "Which of these might be used in underwater
                naval operations?

                1 Frogmen
                2 Newtmen
                3 Toadmen
                4 Tadpolemen";;
            4) echo "In the UK, VAT stands for value-added ...?

                1 Transaction
                2 Total
                3 Tax
                4 Trauma";;
            5) echo "What are you said to do to a habit when you break it?

                1 Throw it
                2 Punch it
                3 Kick it
                4 Eat it";;
            6) echo "Where do you proverbially wear your heart,
                if you show your true feelings?

                    1 On your collar
                    2 On your lapel
                    3 On your cuff
                    4 On your sleeve";;
                7) echo "What might an electrician lay?

                    1 Tables
                    2 Gables
                    3 Cables
                    4 Stables ";;
                8) echo "What would a 'tattie picker' harvest?

                    1 Raspberries
                    2 Corn
                    3 Potatoes
                    4 Apples";;
                9) echo "Which of these means adequate space 
                    for moving in?

                        1 Elbow room
                        2 Foot rest
                        3 Ear hole
                        4 Knee lounge";;
                    10) echo "How is a play on words commonly described?

                        1 Pan
                        2 Pin
                        3 Pen
                        4 Pun";;

                    11) echo "Which colour is used as a term to describ
                        e an illegal market in rare goods? 

                        1 Blue
                        2 Red
                        3 Black
                        4 White";;
                    12) echo "Which character was first played 
                        by Arnold Schwarzenegger in a 1984 film? 

                        1 The Demonstrator
                        2 The Instigator
                        3 The Investigator
                        4 The Terminator";;
                    13) echo "Which of these would a film
                        actor like to receive?

                        1 Oliver
                        2 Oscar
                        3 Oliphant
                        4 Osbert";;
                    14) echo "In which country would you expect to be 
                        greeted with the word 'bonjour'? 

                        1 Italy
                        2 France
                        3 Spain
                        4 Wales";;
                    15) echo "What name is given to the person
                        who traditionally attends the
                        groom on his wedding day?

                        1 Best man
                        2 Top man
                        3 Old man
                        4 Poor man";;
                    16)echo "Which word follows 'North' and 'South' to giv
                        e the names of two continents?  

                        1 Africa
                        2 America
                        3 Asia
                        4 Australia";;
                    17)echo "Which country is not an island?

                        1 Madagascar
                        2 Cuba
                        3 Germany
                        4 Jamaica";;
                    18)echo " Which is not the name of an 
                        English county?

                        1 Lancashire
                        2 Leicestershire
                        3 Liverpoolshire
                        4 Lincolnshire";;
                esac
                read -p "Your answer:" answer
                if  [ "$answer" != ${arr[$rnd-1]} ] ;then 
                    echo "I think You need to read more :("    
                    sleep 4s 
                    kill -9 $PPID
                else
                    ((len--))
                fi
                if [ $len == 0 ] ; then
                    printf "${G}}You winn...congrats!!${N}\n "
                fi
            done
        else
            echo "Bad choice :("
            sleep 4s 
            kill -9 $PPID
        fi
