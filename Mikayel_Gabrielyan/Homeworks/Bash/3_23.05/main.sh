#!/bin/bash
let line=1;
let points=0;
function check() {
    case "$1" in
        1 ) if [ $2 -eq 3 ]; then
                let points=$points+5
                return 0;
            else
                echo "Sxal patasxan: Duq partveciq"
                echo "Havaqac miavorner -> $points"
                exit
            fi
            ;;
        2 ) if [ $2 -eq 3 ]; then
                let points=$points+5
                return 0;
            else
                echo "Sxal patasxan: Duq partveciq"
                echo "Havaqac miavorner -> $points"
                exit
            fi
            ;;
        3 ) if [ $2 -eq 4 ]; then
                let points=$points+5
                return 0;
            else
                echo "Sxal patasxan: Duq partveciq"
                echo "Havaqac miavorner -> $points"
                exit
            fi
            ;;
        4 ) if [ $2 -eq 1 ]; then
                let points=$points+5
                return 0;
            else
                echo "Sxal patasxan: Duq partveciq"
                echo "Havaqac miavorner -> $points"
                exit
            fi
            ;;
        5 ) if [ $2 -eq 3 ]; then
                let points=$points+5
                return 0;
            else
                echo "Sxal patasxan: Duq partveciq"
                echo "Havaqac miavorner -> $points"
                exit
            fi
            ;;
        6 ) if [ $2 -eq 3 ]; then
                let points=$points+5
                return 0;
            else
                echo "Sxal patasxan: Duq partveciq"
                echo "Havaqac miavorner -> $points"
                exit
            fi
            ;;
        7 ) if [ $2 -eq 2 ]; then
                let points=$points+5
                return 0;
            else
                echo "Sxal patasxan: Duq partveciq"
                echo "Havaqac miavorner -> $points"
                exit
            fi
            ;;
        8 ) if [ $2 -eq 4 ]; then
                let points=$points+5
                echo "Duq haxteciq !!!"
                echo "Havaqac miavorner -> $points"
                return 0;
            else
                echo "Sxal patasxan: Duq partveciq"
                echo "Havaqac miavorner -> $points"
                exit
            fi
            ;;
    esac
}
for (( i=1; i<9; ++i ))
do
    let line1=$line+2
    sed -n "$line","$line1"p ./questionList.txt
    read -p "enter your answer 1-4 : " answer
    check $i $answer
    let line=$line+3
done
