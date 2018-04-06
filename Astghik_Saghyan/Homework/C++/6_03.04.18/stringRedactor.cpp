#include <iostream>
#include <stdio.h>
#include <cstring>
#include <algorithm>

int count(char *charString, char a) {
	int count = 0;
	for (int i = 0; charString[i] != '\0'; i++) {
		if( charString[i] == a) {
			++count;	
		}
	}
	return count;
}

void replace(char *charString, char fromSymbol, char toSymbol) {
	for (int i = 0; charString[i] != '\0'; i++) {
		if( charString[i] == fromSymbol) {
			charString[i] = toSymbol;
		}
		std::cout << charString[i];
	}
    std::cout << std::endl;
}

void remove(char *charString, int &charStSize, char remSymbol) {
	for (int i = 0; i < charStSize; i++) {
		if (charString[i] == remSymbol) {
			int j = i;
			while(j < charStSize) {
				charString[j] = charString[j+1];
				++j;
                std::cout << "J\t:" << charString[j] << std::endl;
            }   
			--charStSize;
            --i;
			if( 0 == charStSize) {
				std::cout << "The string is over!" << std::endl;
				return;
			}
		}
	}
	std::cout << "The new string is:  " << std::endl;
	for (int i = 0; i < charStSize; i++) {
		std::cout << charString[i];
	}
    std::cout << std::endl;
}


int main() {
//creating char array from entered string
	int size = 255;
	std::string input_string;
	char char_string[size];
	std::cout << "Type in some input text:  " << std::endl;
	getline(std::cin, input_string);
	strcpy(char_string, input_string.c_str());
	int findSize = 0;
	for (int i = 0; char_string[i] != '\0'; i++) {
		++findSize;
	}
	size = findSize;
	char *address = char_string;

//getting the command
	int command;	
	while(command != 4) {
		std::cout << "What you want to do:\n1-count\n2-replace\n3-remove\n4-exit" << std::endl;
		std::cin >> command;
		switch(command) {
			case 1: //*******count	
				char symbol;
				std::cout << "Enter the symbol you want to count" << std::endl;
				std::cin >> symbol;
				std::cout << count(address, symbol) << std::endl;
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
				std::cout << "Enter a symbol to remove from string" << std::endl;
				std::cin >> remSym;
				remove(address, size, remSym);
				if(0 == size) {
					command = 4;
				} 
				break;
			default: std::cout << "Please, enter valid command!" << std::endl;
			    break;
		}
	}
	std::cout << "Thank you for using this app, by!" << std::endl;
	return 0;
}
