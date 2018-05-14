#include <iostream>
#include <stdio.h>
#include <cstring>
#include <algorithm>

void count(char *charString, char a) {
	int count = 0;
	for (int i = 0; charString[i] != '\0'; i++) {
		if( charString[i] == a) {
			++count;	
		}
	}
    std::cout << std::endl;
    std::cout << "The count is:\t" << count << std::endl;
}

void replace(char *charString, char fromSymbol, char toSymbol) {
    std::cout << std::endl;
	for (int i = 0; charString[i] != '\0'; i++) {
		if( charString[i] == fromSymbol) {
			charString[i] = toSymbol;
		}
		std::cout << charString[i];
	}
    std::cout << std::endl;
}

int remove(char *charString, char remSymbol) {
    bool check = false;
    for(int i = 0; charString[i] != '\0'; i++) {
        if(charString[i] == remSymbol) {
			int j = i;
			while(charString[j] != '\0') {
				charString[j] = charString[j+1];
				++j;
            }
            --i;
            check = true;
			if(1 == j) {
				std::cout << "The string is over!" << std::endl;
				return 4;
			}
		}
	}
    if(!check) {
        std::cout << "The string doesn't contain ";
        std::cout << remSymbol <<std::endl;
    }
    std::cout <<std::endl;
	std::cout << "The string is:  " << std::endl;
	for (int i = 0; charString[i] != '\0'; i++) {
		std::cout << charString[i];
	}
    std::cout << std::endl;
    return 0;
}

int main() {
//creating char array from entered string
	std::string inputString;
	std::cout << "Type in some input text:  " << std::endl;
	getline(std::cin, inputString);
    std::cout << std::endl;
    int size = inputString.length();
	char charString[size];
	strcpy(charString, inputString.c_str());
	char *address = charString;

//getting the command
    int command;	
	do {
		std::cout << "What you want to do:\n1-count\n2-replace\n";
        std::cout << "3-remove\n4-exit" << std::endl;
		std::cin >> command;
        if(0 == command) {
            std::cout << "Please, enter valid command!" << std::endl; 
            return 0;
        }
		switch(command) {
			case 1: //*******count	
				char symbol;
				std::cout << "Enter the symbol you want to count" << std::endl;
				std::cin >> symbol;
				count(address, symbol);
				break;	
			case 2: //*********replace
				char fromSym;
				char toSym;
				std::cout << "Enter two symbols" << std::endl;
				std::cin >> fromSym >> toSym;
				replace(address, fromSym, toSym);
				break;
			case 3: //**********remove
				char remSym;
				std::cout << "Enter a symbol to remove!" << std::endl;
				std::cin >> remSym;
				command = remove(address, remSym);//if remove func return 4, the                                             program exit from while loop
				break;
			default: std::cout << "Please, enter valid command!" << std::endl;
			    break;
		}
	} while(command != 4);
	std::cout << "Thank you for using this app, by!" << std::endl;
	return 0;
}
