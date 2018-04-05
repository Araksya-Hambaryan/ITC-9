#include <iostream>
#include <cstdlib>
#include <ctime>

void dice (char** game, int m, int move, char symbol) {
    char dice1[3][3] = {{' ', ' ', ' '}, {' ', symbol, ' '}, {' ', ' ', ' '}};
    char dice2[3][3] = {{symbol, ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', symbol}};
    char dice3[3][3] = {{symbol, ' ', ' '}, {' ', symbol, ' '}, {' ', ' ', symbol}};
    char dice4[3][3] = {{symbol, ' ', symbol}, {' ', ' ', ' '}, {symbol, ' ', symbol}};
    char dice5[3][3] = {{symbol, ' ', symbol}, {' ', symbol, ' '}, {symbol, ' ', symbol}};
    char dice6[3][3] = {{symbol, ' ', symbol}, {symbol, ' ', symbol}, {symbol, ' ', symbol}};
    switch (m) {
        case 1:
            for(int i = 0; i < 3; ++i) {
                for(int j = move; j < move + 3; ++j) {
                    game[i][j] = dice1[i][j - move];
                } 
            }
            for(int i = 0; i < 3; ++i) {
                for(int j = 0; j < 15; ++j) {
                    std::cout << game[i][j];
                }
                std::cout << std::endl;
            }
            break;   
        case 2:
            for(int i = 0; i < 3; ++i) {
                for(int j = move; j < move + 3; ++j) {
                    game[i][j] = dice2[i][j - move];
                } 
            }
            for(int i = 0; i < 3; ++i) {
                for(int j = 0; j < 15; ++j) {
                    std::cout << game[i][j];
                }
                std::cout << std::endl;
            }
            break;   
        case 3:
            for(int i = 0; i < 3; ++i) {
                for(int j = move; j < move + 3; ++j) {
                    game[i][j] = dice3[i][j - move];
                } 
            }
            for(int i = 0; i < 3; ++i) {
                for(int j = 0; j < 15; ++j) {
                    std::cout << game[i][j];
                }
                std::cout << std::endl;
            }
            break;   
        case 4:
            for(int i = 0; i < 3; ++i) {
                for(int j = move; j < move + 3; ++j) {
                    game[i][j] = dice4[i][j - move];
                } 
            }
            for(int i = 0; i < 3; ++i) {
                for(int j = 0; j < 15; ++j) {
                    std::cout << game[i][j];
                }
            std::cout << std::endl;
            }
            break;   
        case 5:
            for(int i = 0; i < 3; ++i) {
                for(int j = move; j < move + 3; ++j) {
                    game[i][j] = dice5[i][j - move];
                } 
            }
            for(int i = 0; i < 3; ++i) {
                for(int j = 0; j < 15; ++j) {
                    std::cout << game[i][j];
                }
                std::cout << std::endl;
            }
            break;   
        case 6:
            for(int i = 0; i < 3; ++i) {
                for(int j = move; j < move + 3; ++j) {
                    game[i][j] = dice6[i][j - move];
                } 
            }
            for(int i = 0; i < 3; ++i) {
                for(int j = 0; j < 15; ++j) {
                    std::cout << game[i][j];
                }
                std::cout << std::endl;
            }
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
    std::cin >> symbol;   
    char p1[3][15];
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 15; ++j) {
            p1[i][j] = ' ' ;
        }
    }
    char p2[3][15];
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 15; ++j) {
            p2[i][j] = ' ' ;
        }
    }
    char begean[3][15];
    for(int i = 0; i < 3; ++i) { 
        for(int j = 0; j < 15; ++j) {
            begean[i][j] = ' ' ;
        }
    }
    std::cout << "p1:" << std::endl;
    std::cin >>;
    srand(time(NULL));
    m = (rand() % 6) + 1;
    num1 = m;
    dice(begean, m, 0, symbol);
    std::cout << "p2:" << std::endl;
    std::cin >>;
    srand(time(NULL));
    m = (rand() % 6) + 1;
    num2 = m;
    dice(begean, m, 0, symbol);
    while(num1 == num2) {
        std::cout << "p1:" << std::endl;
        std::cin >>;
        srand(time(NULL));
        m = (rand() % 6) + 1;
        num1 = m;
        dice(begean, m, 0, symbol)
        std::cout << "p2:" << std::endl;
        std::cin >>;
        srand(time(NULL));
        m = (rand() % 6) + 1;
        num2 = m;
        dice(begean, m, 0. symbol)
    }    
    if(num1 > num2) {
        std::cout << "game begean P1" << std::endl;
        num1 = 0;
        num2 = 0;
        std::cout << "p1:" << std::endl;
        std::cin >>;
        srand(time(NULL));
        m = (rand() % 6) + 1;
        num1 = num1 + m;
        dice(p1, m, move1, symbol);
        move1 += 3;
        std::cout << "p2:" << std::endl;
        std::cin >>;
        srand(time(NULL));
        m = (rand() % 6) + 1;
        num2 = num2 + m;
        dice(p2, m, move2, symbol);
        move2 += 3;
   
        std::cout << "p1:" << std::endl;
        std::cin >>;
        srand(time(NULL));
        m = (rand() % 6) + 1;
        num1 = num1 + m;
        dice(p1, m, move1, symbol);
        move1 += 3;
        std::cout << "p2:" << std::endl;
        std::cin >>;
        srand(time(NULL));
        m = (rand() % 6) + 1;
        num2 = num2 + m;
        dice(p2, m, move2, symbol);
        move += 3;
 
        std::cout << "p1:" << std::endl;
        std::cin >>;
        srand(time(NULL));
        m = (rand() % 6) + 1;
        num1 = num1 + m;
        dice(p1, m, move1, symbol);
        move1 += 3;
        std::cout << "p2:" << std::endl;
        std::cin >>;
        srand(time(NULL));
        m = (rand() % 6) + 1;
        num2 = num2 + m;
        dice(p2, m, move2, symbol);
        move2 += 3;

        std::cout << "p1:" << std::endl;
        std::cin >>;
        srand(time(NULL));
        m = (rand() % 6) + 1;
        num1 = num1 + m;
        dice(p1, m, move1, symbol);
        move1 += 3;
        std::cout << "p2:" << std::endl;
        std::cin >>;
        srand(time(NULL));
        m = (rand() % 6) + 1;
        num2 = num2 + m;
        dice(p2, m, move2, symbol);
        move2 += 3;
    } else {
        std::cout << "game begean P2" << std::endl;
        num1 = 0;
        num2 = 0;
        std::cout << "p2:" << std::endl;
        std::cin >>;
        srand(time(NULL));
        m = (rand() % 6) + 1;
        num2 = num2 + m;
        dice(p2, m, move2, symbol);
        std::cout << "p2:" << std::endl;
        std::cin >>;
        srand(time(NULL));
        m = (rand() % 6) + 1;
        num1 = num1 + m;
        dice(p1, m, move1, symbol);
        move1 += 3;
        move2 += 3;
   
        std::cout << "p2:" << std::endl;
        std::cin >>;
        srand(time(NULL));
        m = (rand() % 6) + 1;
        num2 = num2 + m;
        dice(p2, m, move2, symbol);
        std::cout << "p2:" << std::endl;
        std::cin >>;
        srand(time(NULL));
        m = (rand() % 6) + 1;
        num1 = num1 + m;
        dice(p1, m, move1, symbol);
        move1 += 3;
        move2 += 3;

        std::cout << "p2:" << std::endl;
        std::cin >>;
        srand(time(NULL));
        m = (rand() % 6) + 1;
        num2 = num2 + m;
        dice(p2, m, move2, symbol);
        std::cout << "p2:" << std::endl;
        std::cin >>;
        srand(time(NULL));
        m = (rand() % 6) + 1;
        num1 = num1 + m;
        dice(p1, m, move1, symbol);
        move1 += 3;
        move2 += 3;

        std::cout << "p2:" << std::endl;
        std::cin >>;
        srand(time(NULL));
        m = (rand() % 6) + 1;
        num2 = num2 + m;
        dice(p2, m, move2, symbol);
        std::cout << "p2:" << std::endl;
        std::cin >>;
        srand(time(NULL));
        m = (rand() % 6) + 1;
        num1 = num1 + m;
        dice(p1, m, move1, symbol);
        move1 += 3;
        move2 += 3;
    }
    if(num1 > num2) {
        std::cout << "Win p1" << std::endl;
    } else if (num2 > num1) {
        std::cout << "Win p1" << std::endl;
    } else {
        std::cout << "Draw" << std::endl;
    }
    return 0;
}
