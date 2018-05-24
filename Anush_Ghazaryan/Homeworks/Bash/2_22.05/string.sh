#!/bin/bash

    countOfLetter() {
	printf "Type a word : "
        read WORD
        printf "Type a letter : "
        read LETTER
        echo $WORD > file
        COUNT=$(echo "$WORD" | tr -cd "$LETTER" | wc -c)
        printf "Count of "$LETTER" in text is  %d\n" $COUNT
    }
    countOfLetter
