#include <iostream>
#include <string.h>
#include <stdio.h>

int findQuetionIndex(char quetions[5][255], char userQuetion[255]) {
    for (int i = 0; i < 5; ++i) {
        if (!strcmp(userQuetion, quetions[i])) {
            return i;
        }
    }
}

void f(char quetions[4][255], char userQuetion[255]) {
    int index = findQuetionIndex(quetions, userQuetion);
    switch(index) {
        case 0: 
            std::cout << "barev" << std::endl;
            break;
        case 1: 
            std::cout << "lav em du vonc es? ";
            break;
        case 2: 
            std::cout << "ban chka du asa ";
            break;
        case 3:
            std::cout << "ayo iharke" << std::endl;
            break;
        case 4:
            std::cout << "hajox" << std::endl;
            return;
        default:
            std::cout << "Es qez chem haskanum" << std::endl;
        
    }
    
}

int main() {
    char quetions[5][255] = {
                             "barev", "inchpes es?", "inchka?", 
                             "dasert arel es?", "hajox"
                            };
        std::cout << "1.barev\n2.inchpes es?\n3.inchka?\n4.dasert arel es?\n---karox em patasxanel nshvac harcerin:)---" << std::endl;
        char userQuetion[255];
        do {
            std::cin.getline(userQuetion, 255);
            f(quetions, userQuetion); 
        } while(userQuetion != "hajox");
    
    return 0;
}
