#include <iostream>
#include <stdlib.h>
#include <time.h>


void allocatedMatrix(char** matrix, int row, int column) {
    matrix = new char*[row];
    for (int i = 0; i < row; ++i) {
        matrix[i] = new char[column];
    }
}

void printDice(char** dice, int row, int column) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            std::cout << dice[i][j] << " ";
        }
        std::cout << std::endl;
    }
}


void dices(char** dice, int i, int j, int count) {
    switch(count) {
        case 1:
            dice[i+1][j+1] = '*';
        break;
        case 2:
            dice[i][j+2] = '*';
            dice[i+2][j] = '*';
        break;
        case 3:
            dice[i][j+2] = '*';
            dice[i+1][j+1] = '*';
            dice[i+2][j] = '*';
        break;
        case 4:
            dice[i][j] = '*';
            dice[i][j+2] = '*';
            dice[i+2][j] = '*';
            dice[i+2][j+2] = '*';
        break;
        case 5:
            dice[i][j] = '*';
            dice[i][j+2] = '*';
            dice[i+1][j+1] = '*';
            dice[i+2][j] = '*';
            dice[i+2][j+2] = '*';
        break;
        case 6:
            dice[i][j] = '*';
            dice[i][j+1] = '*';
            dice[i][j+2] = '*';
            dice[i+1][j] = '*';
            dice[i+1][j+1] = '*';
            dice[i+1][j+2] = '*';
            dice[i+2][j] = '*';
            dice[i+2][j+1] = '*';
            dice[i+2][j+2] = '*';
        break;
    }
}
/*
void stepUserOrCPU(char** dice) {
    int i = 0; // i is index
    int j = 0; // j is index
   // int count = 0; // random 
    char c;
    //std::cout << "pleas press Enter to continue ";
    //std::cin >> c;
    int count = rand() % 6 + 1; // random generate dice
    dices(dice, i, j, count);
    printDice(dice, 3, 12);
}
*/
int countOfPoint(char** dice, int row, int column) {
    int count = 0;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            if ('*' == dice[i][j]) {
                ++count;
            }
        }
    }
    return count;
}

void whoStart(char** cpu, char** user, int& start) {
    int count = rand() % 6 + 1; ; 
    std::cout << "CPU:" << std::endl;
    dices(cpu, 0, 0, count);
    printDice(cpu, 3, 3);

    count = rand() % 6 + 1; ; 
    std::cout << "USER:" << std::endl;
    dices(user, 0, 0, count);
    printDice(user, 3, 3);

    int count1 = countOfPoint(cpu, 3, 3);
    int count2 = countOfPoint(user, 3, 3);
    if (count1 > count2) {
        std::cout << "Game started CPU" << std::endl;
    }
    std::cout << "Game started USER" << std::endl;
}

void steps(char** user, char** cpu, int start) {
    int i = 0; // i is index
    int j = 0; // j is index
    int count = rand() % 6 + 1; ; // random 
    int end = 0;
        char c;
    whoStart(cpu, user, start);
    while (4 != end) {
        std::cout << "User\n";
        char c;
      //  std::cout << "please input any key to continue ";
        std::cin >> c;
        count = rand() % 6 + 1; 
        dices(user, i, j, count);
        printDice(user, 3, 12);
        
       //: std::cout << "pleas press Enter to continue ";
       //: std::cin >> c;
        count = rand() % 6 + 1;
        std::cout << "\nComp" << std::endl;
        dices(cpu, i, j, count);
        printDice(cpu, 3, 12);

        j += 3;
        ++end;  
    }
 
} 

void win(char** cpu, char** user) {
    int count1 = countOfPoint(cpu, 3, 12);
    int count2 = countOfPoint(user, 3, 12);
    if (count1 > count2) {
        std::cout << "CPU WIN!!!" << std::endl;
        return;
    } 
    if (count1 < count2) {
        std::cout << "USER WIN!!!" << std::endl;
        return;
    }
    std::cout << "Not WIn!" << std::endl;
}

int main() {
    char** zar = new char*[3];
    for (int i = 0; i < 3; ++i) {
        zar[i] = new char[3];
    }
    // allocatedMatrix(zar, 3, 3);
    srand(time(NULL));
    char** user = new char*[3];
    // allocatedMatrix(user, 3, 12);
    for (int i = 0; i < 3; ++i) {
        user[i] = new char[12];
    }
    char** cpu = new char*[3];
    //allocatedMatrix(cpu, 3, 12);
    for (int i = 0; i < 3; ++i) {
        cpu[i] = new char[12];
    }
    int start = 0;
    // whoStart(start);
    std::cout << "============START GAME=============" << std::endl;
    steps(user, cpu, start);
    win(cpu, user);
    return 0;
}
