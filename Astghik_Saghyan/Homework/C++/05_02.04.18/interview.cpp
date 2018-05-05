#include <iostream>
#include <stdio.h>
#include <string.h>

int calcCode(char arr[5][255]) {
    char userText[255];
    std::cin.getline(userText, 255);
    for(int i = 0; i < 5; i++) {
        if(!strcmp(userText, arr[i])) {
            return i;   
        }
    }
}


int main() {
    char userTextArr[5][255] = {"Hello!", "What is your name?",\
 "How are you?", "What time is it?","By!"};
    std::cout << "Hi, I am Bot, please, say me\
 somthing from the following list:\t" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << userTextArr[i] << std::endl;
    }
    
    do {
        switch(calcCode(userTextArr)) {
            case 0://*******Hello  
                std::cout << "Hello :)" << std::endl;
                break;
            case 1: //******What is your name?
                std::cout << "My name is Bot" << std::endl;
                break;
            case 2: //******How are you?
                std::cout << "Nice, thank you!" << std::endl;
                break;
            case 3: //******What time is it?
                std::cout << "The clock does not works!" <<std::endl;
                break;
            case 4: //******By!
                std::cout << "By! See you soon!" << std::endl;
                return 0;
            default: std::cout << "Please, ask from the list!" << std::endl;
                break;
        }
    } while(true);
}
