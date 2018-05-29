#!/bin/bash

includeFunction () {
  source ./function.sh
}

welcome () {
echo "Let's start the game"
echo "Press any key end Enter to see the first question"
read -s answer
points=50
}

questions () {
if [ ! -z "$answer" ]
then
question 1 Portugal Lisbon
question 2 Japan Tokio
question 3 Spain Madrid
question 4 Germany Berlin
question 5 USA Washington
echo "Thank you" | figlet
fi
}

includeFunction
welcome
questions
