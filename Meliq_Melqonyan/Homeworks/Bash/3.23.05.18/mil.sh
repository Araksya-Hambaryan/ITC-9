exec 2>/dev/null

hamar=0
miavor=0
harc() {
    let hamar=$hamar+1
    harc=$(head -n $hamar harc.txt | tail -n +$hamar)
}

pat() {
    let pop=4*$hamar-3
    pat1=$(head -n $pop pat.txt | tail -n +$pop)
    let pop=$pop+1
    pat2=$(head -n $pop pat.txt | tail -n +$pop)
    let pop=$pop+1
    pat3=$(head -n $pop pat.txt | tail -n +$pop)
    let pop=$pop+1
    pat4=$(head -n $pop pat.txt | tail -n +$pop)
}
graf() {
zenity --entry \
    --title="     harc N$hamar     " \
    --text="\t $hamar) $harc \n \n 1)$pat1    2)$pat2 \n 3)$pat3    4)$pat4" \
    --entry-text "" >a
cpat=$(head -n $hamar cpat.txt | tail -n +$hamar)
tmp=$(head -n 1 a)
if [[ $tmp -eq $cpat ]] 
then
    let miavor=$miavor+1
else
    echo GAME_OVER
    echo dug_havaqeciq
    echo $miavor miavor
    exit
fi
}
arag() {
    harc
    pat
    graf
}
main() {
    for i in {1..10}
    do
        arag
    done
    echo WINNER 
    sl
}
main
