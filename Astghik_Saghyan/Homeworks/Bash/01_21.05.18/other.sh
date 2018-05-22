#Find and print the PIDs and names of the processes which PIDs end by number 

ps -o pid,command | grep "^....1" | tee filePIDs.txt

#Create a file.When the computer is on/off the file must be deleted.
#First create tmp.txt on desktop, then cd to your Home directory and run in shell the following
echo "rm ~/Desktop/tmp.txt" | tee .logout
