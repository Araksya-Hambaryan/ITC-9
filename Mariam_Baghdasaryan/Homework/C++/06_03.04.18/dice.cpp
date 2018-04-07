#include <iostream>
#include <cstdlib>
#include <ctime>

int randNumber() {
    srand(time(0));
    return rand() % 6 + 1;
}

char** allocatedMatrix(int& size) {
    char** matrix = new char* [3];
    for (int counter = 0; counter < 3; ++counter) {
        matrix[counter] = new char[size];  
    }
    return matrix;
}

void printMatrix(char**& matrix) {
    for (int counter1 = 0; counter1 < 3; ++counter1) {
        for (int counter2 = 0; counter2 < 15; ++counter2) {
            std :: cout << matrix[counter1][counter2];
        }
        std :: cout << std :: endl;
    }
}

void erase(char**& matrix, int length) {
    for (int counter1 = 0; counter1 < 3; ++counter1) {
        for (int counter2 = 0; counter2 < length; ++counter2) {
            matrix[counter1][counter2] = ' ';
        }
    } 
}

void deleteMatrix(char**& matrix) {
    for (int counter = 0; counter < 3; ++counter) {
        delete[] matrix[counter];  
    }
    delete[] matrix;
}

int getSum(int* array, int& length) {
    int sum = 0;
    for (int counter = 0; counter < length; ++counter) {
        sum += array[counter];
    }
    return sum;
}

void eraseResults(int* array, int& size) {
    for (int counter = 0; counter < size / 2; ++counter) {
        array[counter] = 0;
    }
}

void checkResults(int* arrayComp, int* arrayPlayer, int& size) {
    int sum1 = getSum(arrayComp, size);
    int sum2 = getSum(arrayPlayer, size);
    if (sum1 > sum2) {
        std :: cout << "=============== Win Computer!!! ===============\n";
    } else if (sum1 < sum2){
        std :: cout << "================ Win Player!!! ================\n";
    } else {
        std :: cout << "=============== No win...=============n";
    }
} 
   
void dices(char**& dice, int count, char symbol, int wall, int flag = 1) {
    int start = 0;
    start = 0 != wall ? wall+1 : wall;
    if (flag && 0 != start) {
        for (int counter = 0; counter < 3; ++counter) {
            dice[counter][wall] = '|';
        }
    }
    switch(count) {
        case 1:
            dice[1][start + 1] = symbol;
            break;
        case 2:
            dice[0][start] = symbol;
            dice[2][start + 2] = symbol;
            break;
        case 3:
            dice[0][start] = symbol;
            dice[1][start + 1] = symbol;
            dice[2][start + 2] = symbol;
            break;
        case 4:
            dice[0][start] = symbol;
            dice[0][start + 2] = symbol;
            dice[2][start] = symbol;
            dice[2][start + 2] = symbol;
            break;
        case 5:
            dice[0][start] = symbol;
            dice[0][start + 2] = symbol;
            dice[1][start + 1] = symbol;
            dice[2][start] = symbol;
            dice[2][start + 2] = symbol;
            break;          
        case 6:
            dice[0][start] = symbol;
            dice[0][start + 2] = symbol;
            dice[1][start] = symbol;
            dice[1][start + 2] = symbol;
            dice[2][start] = symbol;
            dice[2][start + 2] = symbol;
            break;
    }
    printMatrix(dice);
}

bool starts(char symbol) {
    int num1 = 0;
    int num2 = 0;
    int size = 3;
    char** array = allocatedMatrix(size);
    bool startsComputer = 1;
    erase(array, 3);

    std :: cout << "Computer : \n";
    std :: cin.ignore();
    num1 = randNumber();
    dices(array, num1, symbol, 0, -1);
    erase(array, 3);

    std :: cout << "Player : ";
    std :: cin.ignore();
    do {
        num2 = randNumber();
    } while (num2 == num1);
    dices(array, num2, symbol, 0, -1);

    if (num1 > num2) {
        std :: cout << "--------- Game started Computer ---------- \n\n";
    } else {
        startsComputer = 0;
        std :: cout << "---------Game started Player---------- \n\n";
    }
    deleteMatrix(array);
    return startsComputer;
}

void start() {
    int repeat = 8;
    int arrayComp[repeat / 2];
    int arrayPlayer[repeat / 2];
    int sum1 = 0;
    int sum2 = 0;
    int size = 15;
    char** mC = allocatedMatrix(size);
    char** mP = allocatedMatrix(size);
    char symbol = '*';
    bool startsComputer = 0;
    erase(mC, 15);
    erase(mP, 15);
    std :: cout << "Input symbol : ";
    std :: cin >> symbol;
    startsComputer = starts(symbol);

    for (int i = 0, j = 0, k = 0, wall1 = 0, wall2 = 0; k < repeat; ++k) {
        if (startsComputer) {
            std :: cout << "Computer -> ";
            std :: cin.ignore();
            arrayComp[i] = randNumber();
            dices(mC, arrayComp[i], symbol, wall1);
            startsComputer = false;
            wall1 += 4;
            ++i;
        } else {
            std :: cout << "Player -> ";
            std :: cin.ignore();
            arrayPlayer[j] = randNumber();
            dices(mP, arrayPlayer[j], symbol, wall2);
            startsComputer = true;
            wall2 += 4;
            ++j;
        }
        if (1 == k) {
            wall1 = 3;
            wall2 = 3;
        }
    }
    checkResults(arrayComp, arrayPlayer, repeat);
    deleteMatrix(mC);
    deleteMatrix(mP);
}

int main() {
    start();
    return 0;
}
