#include <iostream>
#include <stdlib.h>
#include <ctime>

void allocatedMatrix(char**& matrix, int row, int column) {
    matrix = new char*[row];
    for (int i = 0; i < row; ++i) {
        matrix[i] = new char[column];
    }
}

void deletedMatrix(char**& matrix, int row) {
    for (int i = 0; i < row; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

void printDice(char**& dice, int row, int column) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            std::cout << dice[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void dices(char**& dice, int j, int count) {
    switch(count) {
        case 1:
            dice[1][j+1] = '*';
            break;
        case 2:
            dice[0][j] = '*';
            dice[2][j+2] = '*';
            break;
        case 3:
            dice[0][j] = '*';
            dice[1][j+1] = '*';
            dice[2][j+2] = '*';
            break;
        case 4:
            dice[0][j] = '*';
            dice[0][j+2] = '*';
            dice[2][j] = '*';
            dice[2][j+2] = '*';
            break;
        case 5:
            dice[0][j] = '*';
            dice[0][j+2] = '*';
            dice[1][j+1] = '*';
            dice[2][j] = '*';
            dice[2][j+2] = '*';
            break;
        case 6:
            dice[0][j] = '*';
            dice[0][j+2] = '*';
            dice[1][j] = '*';
            dice[1][j+2] = '*';
            dice[2][j] = '*';
            dice[2][j+2] = '*';
            break;
    }
}

void toEmptyMatrix(char**& matrix) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matrix[i][j] = ' ';
        }
    } 
}

void openingOfGame(int& firstDice, int& secondDice) {
    char** dice;
    allocatedMatrix(dice, 3, 3);
    
    firstDice = rand() % 6 + 1;
    dices(dice, 0, firstDice);
    std::cout << "Comp:" << std::endl;
    printDice(dice, 3, 3);
    std::cout << std::endl;

    toEmptyMatrix(dice);
    
    do {
        secondDice = rand() % 6 + 1;
    } while(secondDice == firstDice); 
    dices(dice, 0, secondDice);
    std::cout << "User:" << std::endl;
    printDice(dice, 3, 3);
}

bool howIsStart(int firstDice, int secondDice) {
    return (firstDice > secondDice);
}

void stepOfComp(char**& comp, int dice, int index, int& score) {
    std::cout << "Comp:\tzar: " << dice << std::endl;
    dices(comp, index, dice);
    printDice(comp, 3, 15);    
    score += dice;
}

void stepOfUser(char**& user, int dice, int index, int& score) {
    std::cout << "User:\tzar: " << dice << std::endl;
    dices(user, index, dice); 
    printDice(user, 3, 15);   
    score += dice;
}

void win(int compScore, int userScore) {
    if (compScore > userScore) {
        std::cout << "\n==========Win Comp!==========\n" << std::endl;
        return;
    } else if (compScore < userScore) {
        std::cout << "\n==========Win User!==========\n" << std::endl;
        return;
    } 
    std::cout << "\n==========No win!==========\n" << std::endl;
}

int main() {
    srand(time(0));
    char** dice;
    allocatedMatrix(dice, 3, 3);
    int firstDice = 0;
    int secondDice = 0;
    openingOfGame(firstDice, secondDice);
    int index = 0;
    char** comp; 
    allocatedMatrix(comp, 3, 15);
    char** user; 
    allocatedMatrix(user, 3, 15);
    int count = 0;
    int compScore = 0;
    int userScore = 0;
    std::cout << "======Start Game==========" << std::endl;
    if (howIsStart(firstDice, secondDice)) {
        while (4 != count){
            firstDice = rand() % 6 + 1;
            secondDice = rand() % 6 + 1;
            stepOfComp(comp, firstDice, index, compScore);
            stepOfUser(user, secondDice, index, userScore);
            index += 4;
            ++count;
        }
    }
    while (4 != count) {
        firstDice = rand() % 6 + 1;
        secondDice = rand() % 6 + 1;
        stepOfUser(user, secondDice, index, compScore);
        stepOfComp(comp, firstDice, index, userScore);
        index += 4;
        ++count;
    }
    win(compScore, userScore);
    
    return 0;
}
