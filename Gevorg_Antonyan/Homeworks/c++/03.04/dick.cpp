#include <iostream>
#include <cstdlib>
#include <ctime>

void allocedArray(char**& array, int row, int column) {
    array = new char*[row];
    for (int i = 0; i < row; ++i) {
        array[i] = new char[column];    
    }
}

void deleteArray(char**& array, int row) {
    for (int i = 0; i < row; ++i) {
        delete array[i];   
    }
    delete[] array;
}

void initDice(char**& game, char dice[3][3], int move) {
    for(int i = 0; i < 3; ++i) {
        for(int j = move; j < move + 3; ++j) {
            game[i][j] = dice[i][j - move];
        } 
    }
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 15; ++j) {
            std::cout << game[i][j];
        }
        std::cout << std::endl;
    }
}

void dice (char** game, int m, int move, char symbol) {
    char dice1[3][3] = {{' ', ' ', ' '}, {' ', symbol, ' '}, {' ', ' ', ' '}};
    char dice2[3][3] = {{symbol, ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', symbol}};
    char dice3[3][3] = {{symbol, ' ', ' '}, {' ', symbol, ' '}, {' ', ' ', symbol}};
    char dice4[3][3] = {{symbol, ' ', symbol}, {' ', ' ', ' '}, {symbol, ' ', symbol}};
    char dice5[3][3] = {{symbol, ' ', symbol}, {' ', symbol, ' '}, {symbol, ' ', symbol}};
    char dice6[3][3] = {{symbol, ' ', symbol}, {symbol, ' ', symbol}, {symbol, ' ', symbol}};
    switch (m) {
        case 1:
             initDice(game, dice1, move);
            break;   
        case 2:
             initDice(game, dice2, move);
            break;   
        case 3:
             initDice(game, dice3, move);
            break;   
        case 4:
             initDice(game, dice4, move);
            break;   
        case 5:
             initDice(game, dice5, move);
            break;   
        case 6:
             initDice(game, dice6, move);
            break;   
    }
}

int main() {
    int num1 = 0;
    int num2 = 0;
    int move1 = 0;
    int move2 = 0;
    int m = 0;
    char symbol;
    char enter = ' ';
    char** begean;
    allocedArray(begean, 3, 3);
    std::cout << "Enter any simbol: ";
    std::cin >> symbol;   
    std::cout << "p1:" << std::endl;
    std::cin.ignore();
    srand(time(NULL));
    m = (rand() % 6) + 1;
    num1 = m;
    dice(begean, m, 0, symbol);
    std::cout << "p2:" << std::endl;
    std::cin.ignore();
    srand(time(NULL));
    m = (rand() % 6) + 1;
    num2 = m;
    dice(begean, m, 0, symbol);
    while(num1 == num2) {
        std::cout << "p1:" << std::endl;
        std::cin.ignore();
        srand(time(NULL));
        m = (rand() % 6) + 1;
        num1 = m;
        dice(begean, m, 0, symbol);
        std::cin.ignore();
        std::cout << "p2:" << std::endl;
        srand(time(NULL));
        m = (rand() % 6) + 1;
        num2 = m;
        dice(begean, m, 0, symbol);
    }    
    num1 = 0;
    num2 = 0;
    int end = 0;
    char** p1;
    allocedArray(p1, 3, 15);
    char** p2;
    allocedArray(p2, 3, 15);
    if(num1 > num2) {
        while (4 > end) {
            std::cout << "game begean P1" << std::endl;
            std::cout << "p1:" << std::endl;
            std::cin.ignore();
            srand(time(NULL));
            m = (rand() % 6) + 1;
            num1 = num1 + m;
            dice(p1, m, move1, symbol);
            move1 += 3;
            std::cout << "p2:" << std::endl;
            std::cin.ignore();
            srand(time(NULL));
            m = (rand() % 6) + 1;
            num2 = num2 + m;
            dice(p2, m, move2, symbol);
            move2 += 3;
            ++end;
         }
    } else {
        std::cout << "game begean P2" << std::endl;
        while (4 > end) {
            num1 = 0;
            num2 = 0;
            std::cout << "p2:" << std::endl;
            std::cin.ignore();
            srand(time(NULL));
            m = (rand() % 6) + 1;
            num2 = num2 + m;
            dice(p2, m, move2, symbol);
            std::cout << "p1:" << std::endl;
            std::cin.ignore();
            srand(time(NULL));
            m = (rand() % 6) + 1;
            num1 = num1 + m;
            dice(p1, m, move1, symbol);
            move1 += 3;
            move2 += 3;
            ++end;
        }
    }
    deleteArray(p1, 3);
    deleteArray(p2, 3);
    deleteArray(begean, 3);
    if(num1 > num2) {
        std::cout << "Win p1" << std::endl;
    } else if (num2 > num1) {
        std::cout << "Win p2" << std::endl;
    } else {
        std::cout << "Draw" << std::endl;
    }
    return 0;
}
