#!/bin/bash  
((ctr = 0))
for ((i=1;i<$#;i++)); 
do 
    if [ ${!i} = "-name" ] 
    then 
        ((i++))
       if [ ${!i} = "pen" ]
       then
           ((ctr++))
           echo "Mher"
       fi
     fi
 done
 if  ((ctr == 0)) 
 then
     echo "false"
 fi
