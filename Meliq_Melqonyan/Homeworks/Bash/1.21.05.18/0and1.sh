
for i in 1 2 3 4
do 
    let "tmp=$i/2"
    if [ "$tmp" -eq 1 ];
    then
        head -n $i file >> b
    else
        head -n $i file > c
        sed -e 's/1/0/g' c >> b
        rm c
    fi
done
