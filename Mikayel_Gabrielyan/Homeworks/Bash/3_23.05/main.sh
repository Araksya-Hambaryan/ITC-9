#!/bin/bash
let trueAnswer=0
let line=1
let points=0
function check() {
    if [ $1 -eq $2 ]; then
        let points=$points+5
        return 0
    else
        echo "Sxal patasxan: Duq partveciq"
        echo "Havaqac miavorner -> $points"
        exit
    fi
}
for (( i=1; i<9; ++i ))
do
    trueAnswer=`sed -n "$i","$i"p ./answersList`
    echo "$ans"
    let line1=$line+2
    sed -n "$line","$line1"p ./questionList.txt
    read -p "enter your answer 1-4 : " answer
    check $answer $trueAnswer
    let line=$line+3
done
echo "Duq haxteciq !!!"
echo "Duq havaqeciq MAXIMAL miavor (40)"
echo "Dzer shahumn e giteliqi stugum"
