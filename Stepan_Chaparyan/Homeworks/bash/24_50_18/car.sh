#!bin/bash

car1="
                     ____________                    
                    |            |   _____________   
                    |    BRAKE   |  /   ________  \  
                    |____________| /   /    |   \  \ 
                              |   /   /     |    \  \   
                     _________|__/   /______|_____\  \________
                    |                 -->                   o |DZZZZZZZZZZZzzzzzzz
                   _|                                         |    ZZZZZZZzzzzzzzz
                   _|                                         |        ZZZZzzzzzzz
                    |_____________     _________     _________|           zzzzzzzz
                                  \___/         \___/                       zzzzzz
"

			

car2="
                     ____________                    
                    |            |   _____________   
                    |    GAME    |  /   ________  \  
                    |____________| /   /    |   \  \ 
                              |   /   /     |    \  \   
                     _________|__/   /______|_____\  \________
                    |                 -->                   o |
                   _|                                         |
                   _|                                         |
                    |_____________     _________     _________|
                                  \___/         \___/          
"
			
i=0
while [ $i -lt 30 ]
do
  ((i++))
  echo -n "$car1" | sed 's/^/ /'
  sleep 0.3
  clear
  echo -n "$car2" | sed 's/^/ /'
  sleep 0.3
  car1=$(echo "$car1" | sed 's/^/ /')
  car2=$(echo "$car2" | sed 's/^/ /')
  clear
done
	
