#!bin/bash

count=0
read -p "enter string 1: " str
count1=${#str}
read -p "enter string 2: " str2
count2=${#str2}
for (( i=0; i<$count1; ++i ))
do
#    num=$count2+$i
    tmp=${str:i:$count2}
    if [ "$tmp" == "$str2" ]
    then
        count=$[$count+1];
    fi
done
echo "count is $count"



#tmp="$str"
#str="$str"-"$str2"
#while  [ "$tmp" -ne "$str" ]
#do
#count+=1
#tmp="$str"
#str="$str"-"$str2"
#done

