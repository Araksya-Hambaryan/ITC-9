#include <iostream>
#include <stdlib.h>
#include <time.h>

void printMatrix(char matrix[][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std :: cout << matrix[i][j];
        }
        std :: cout << std :: endl;
    }
}

void printDice(int num, char sym) {
    char matrix[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j){
            matrix[i][j] = ' ';
        }
    }
    switch(num) {
        case 1:
            matrix[1][1] = sym;
            break;
        case 2:
            matrix[1][0] = sym;
            matrix[1][2] = sym;
            break;
        case 3:
            matrix[0][0] = sym;
            matrix[1][1] = sym;
            matrix[2][2] = sym;
            break;
        case 5:
            matrix[1][1] = sym;
        case 4:
            matrix[0][0] = sym;
            matrix[2][0] = sym;
            matrix[2][2] = sym;
            matrix[0][2] = sym;
            break;
        case 6:
            matrix[0][0] = sym;
            matrix[1][0] = sym;
            matrix[2][0] = sym;
            matrix[0][2] = sym;
            matrix[1][2] = sym;
            matrix[2][2] = sym;
            break;
    }
    printMatrix(matrix);
}

int randNumber() {
    srand(time(0));
    return rand() % 6 + 1;
}

bool startsPc(char symbol) {
    int num1 = 0;
    int num2 = 0;
    bool startsComputer = 1;
    std :: cout << "Computer - \n";
    std :: cin.ignore();
    num1 = randNumber();
    printDice(num1, symbol);

    std :: cout << "User - \n";
    std :: cin.ignore();
    num2 = randNumber();
    printDice(num2, symbol);
    if (num1 > num2) {
        std :: cout << "Game will start computer. \n\n";
    } else {
        startsComputer = 0;
        std :: cout << "Game will start user. \n\n";
    }
    return startsComputer;
}

void start() {
    int repeat = 6;
    int arrC[repeat];
    int arrU[repeat];
    int j = 0;
    int i = 0;
    int sum1 = 0;
    int sum2 = 0;
    char symbol = '*';
    bool startsComputer = 0;
    std :: cout << "Input symbol: ";
    std :: cin >> symbol;
    startsComputer = startsPc(symbol);


    for (int k = 0; k < repeat; ++k) {
        if (startsComputer) {
            std :: cout << "Computer - ";
            std :: cin.ignore();
            arrC[i] = randNumber();
            printDice(arrC[i], symbol);
            startsComputer = false;
            ++i;
        } else {
            std :: cout << "User - ";
            std :: cin.ignore();
            arrU[j] = randNumber();
            printDice(arrU[j], symbol);
            startsComputer = true;
            ++j;
        }
    }
    std :: cout << std :: endl;
    std :: cout << "Computer result - \n";
    for (int i = 0; i < repeat / 2; ++i) {
        sum1 += arrC[i];
        printDice(arrC[i], symbol);
    }
    std :: cout << sum1 <<  "User result - \n";
    for (int i = 0; i < repeat / 2; ++i) {
        sum2 += arrU[i];
        printDice(arrU[i], symbol);
    }
    if (sum1 > sum2) {
        std :: cout << "Computer win with " << sum1 << " points.\n";
    } else {
        std :: cout << "User win with " << sum2 << " points.\n";
    }
}

int main() {
    start();
    return 0;
}
