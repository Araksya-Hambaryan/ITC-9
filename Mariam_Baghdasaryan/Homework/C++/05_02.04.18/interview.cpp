#include <iostream>

int get(char array[][255]) {
    std :: string temp = " ";
    std :: getline(std :: cin,temp);
    for (int counter = 0; counter < 4; counter++) {
        if (temp == array[counter]) {
            return counter;
        }
    }
   
    return -1;
}

void start() {
    char array[5][255] = {"Barev",
    "Inchpes es?",
    "Daserd arel es?",
    "Ctesutyun"};

    std :: cout << " 1.Barev \n 2.Inchpes es? \n 3.Daserd arel es?\n 4.Ctesutyun\n";
    while (true) {
        switch(get(array)) {
            case 0:
                std :: cout << "Barev." << std :: endl;
                break;
            case 1: 
                std :: cout << "Es lav em. Du inchpes es?" << std :: endl;
                break;
            case 2:
                std :: cout << "Der voch." << std :: endl;
                break;
            case 3:
                std :: cout << "Ctesutyun..." << std :: endl;
                return;
            default:
                std :: cout << "Kneres. Harcd chem haskanum." << std :: endl;
                break;
        }
    }
}

int main() {
    start();
    return 0;
}
