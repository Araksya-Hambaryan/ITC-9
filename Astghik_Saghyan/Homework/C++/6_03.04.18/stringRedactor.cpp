#include <iostream>
#include <stdio.h>
#include <cstring>

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
		std::cout << charString[i] << std::endl;
	}
}

void remove(char *charString, char remSymbol) {
	for (int i = 0; charString[i] != '\0'; i++) {
		if( charString[i] == remSymbol) {
			charString[i] = 0;
		}
		std::cout << charString[i] << std::endl;
	}	
}


int main() {
//creating char array from entered string
	std::string input_string;
	char char_string[20];
	std::cout << "Type in some input text:$" << std::endl;
	getline(std::cin, input_string);
	strcpy(char_string, input_string.c_str());
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
				remove(address, remSym); 
				break;
			default: std::cout << "Please, enter valid command!" << std::endl;
			break;
		}
	}
	std::cout << "Thank you for using this app, by!" << std::endl;
	return 0;
}
