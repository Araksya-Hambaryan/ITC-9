#include <iostream>
#include <stdlib.h>
#include <time.h>

void printMatrix(char** matrix) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 15; ++j) {
            std :: cout << matrix[i][j];
        }
        std :: cout << std :: endl;
    }
}

int randNumber() {
    srand(time(0));
    return rand() % 6 + 1;
}

void erase(char** arr, int length) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < length; ++j) {
            arr[i][j] = ' ';
        }
    }
}

char** makeArray(int& size) {
    char** arr = new char*[3];
    for (int i = 0; i < 3; ++i) {
        arr[i] = new char[size];
    }
    return arr;
}

void deleteArray(char** arr) {
    for (int i = 0; i < 3; ++i) {
        delete arr[i];
    }
    delete[] arr;
}

int getSum(int* arr, int& length) {
    int sum;
    for (int i = 0; i < length; ++i) {
        sum += arr[i];
    }
    return sum;
}

void eraseResults(int* arr, int& size) {
    for (int i = 0; i < size / 2; ++i) {
        arr[i] = 0;
    }
    
}

void checkResults(int* arrC, int* arrU, int& size) {
    int sum1 = getSum(arrC, size);
    int sum2 = getSum(arrU, size);
    if (sum1 > sum2) {
        std :: cout << "Computer win!!!\n";
    } else if (sum1 < sum2){
        std :: cout << "User win\n";
    } else {
        std :: cout << "No winner...\n";
    }
}

void printDice(char** matrix,int num, char sym, int wall, int flag = 1) {
    int start = 0;
    start = 0 != wall ? wall+1 : wall;
    if (flag && 0 != start) {
        for (int i = 0; i < 3; ++i) {
            matrix[i][wall] = '|';
        }
    }
    switch(num) {
        case 1:
            matrix[1][start + 1] = sym;
            break;
        case 2:
            matrix[1][start] = sym;
            matrix[1][start + 2] = sym;
            break;
        case 3:
            matrix[0][start + 0] = sym;
            matrix[1][start + 1] = sym;
            matrix[2][start + 2] = sym;
            break;
        case 5:
            matrix[1][start + 1] = sym;
        case 4:
            matrix[0][start + 0] = sym;
            matrix[2][start + 0] = sym;
            matrix[2][start + 2] = sym;
            matrix[0][start + 2] = sym;
            break;
        case 6:
            matrix[0][start + 0] = sym;
            matrix[1][start + 0] = sym;
            matrix[2][start + 0] = sym;
            matrix[0][start + 2] = sym;
            matrix[1][start + 2] = sym;
            matrix[2][start + 2] = sym;
            break;
    }
    printMatrix(matrix);
}

bool startsPc(char symbol) {
    int num1 = 0;
    int num2 = 0;
    int size = 3;
    char** arr = makeArray(size);
    bool startsComputer = 1;
    erase(arr, 3);
    std :: cout << "Computer - \n";
    std :: cin.ignore();
    num1 = randNumber();
    printDice(arr, num1, symbol, 0, -1);
    erase(arr, 3);
    std :: cout << "User - ";
    std :: cin.ignore();
    num2 = randNumber();
    printDice(arr, num2, symbol, 0, -1);
    if (num1 > num2) {
        std :: cout << "Game will start computer. \n\n";
    } else {
        startsComputer = 0;
        std :: cout << "Game will start user. \n\n";
    }
    deleteArray(arr);
    return startsComputer;
}

void start() {
    int repeat = 8;
    int arrC[repeat / 2];
    int arrU[repeat / 2];
    int sum1 = 0;
    int sum2 = 0;
    int size = 15;
    char** mC = makeArray(size);
    char** mU = makeArray(size);
    char symbol = '*';
    bool startsComputer = 0;
    erase(mC, 15);
    erase(mU, 15);
    std :: cout << "Input symbol: ";
    std :: cin >> symbol;
    startsComputer = startsPc(symbol);
    for (int i = 0, j = 0, k = 0, wall1 = 0, wall2 = 0; k < repeat; ++k) {
        if (startsComputer) {
            std :: cout << "Computer - ";
            std :: cin.ignore();
            arrC[i] = randNumber();
            printDice(mC, arrC[i], symbol, wall1);
            startsComputer = false;
            wall1 += 4;
            ++i;
        } else {
            std :: cout << "User - ";
            std :: cin.ignore();
            arrU[j] = randNumber();
            printDice(mU, arrU[j], symbol, wall2);
            startsComputer = true;
            wall2 += 4;
            ++j;
        }
        if (1 == k) {
            wall1 = 3;
            wall2 = 3;
        }
    }
    checkResults(arrC, arrU, repeat);
    deleteArray(mC);
    deleteArray(mU);
}

int main() {
    start();
    return 0;
}
