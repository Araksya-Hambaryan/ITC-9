mkdir files
cd files
for i in {1..10}
do
    touch "$i"
    cat /dev/urandom | tr -dc 'a-z' | fold -w 5 | head -n 1 > "$i"
done
for i in {1..10}
do
    str= head -n 1 "$i" | grep a
    if [ ${#str} -ne 0 ] 
    then
        rm "$i"  
    else
        echo 1
    fi
done
