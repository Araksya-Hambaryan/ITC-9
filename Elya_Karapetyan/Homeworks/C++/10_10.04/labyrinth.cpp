#include <iostream>

void printLabirint(char labirint[12][12]) {
   for (int i = 0; i < 12; ++i) {
       for (int j = 0; j < 12; ++j) {
           std::cout << labirint[i][j] << " ";
       }
       std::cout << std::endl;
    }
}

bool isWay(char labirint[12][12], int x, int y) {
    if (0 > x || 11 < x || 0 > y || 11 < y) {
        return false;
    }
    if ('F' == labirint[x][y]) {
        return true;
    }
    if ('.' != labirint[x][y] && 'S' != labirint[x][y]) {
        return false;
    }
    labirint[x][y] = 'o';
    if (isWay(labirint, x, y - 1)) {
        return true;
    }
    if (isWay(labirint, x + 1, y)) {
        return true;
    }
    if (isWay(labirint, x, y + 1)) {
        return true;
    }
    if (isWay(labirint, x - 1, y)) {
        return true;
    }
    labirint[x][y] = 'X';
    return false;
}

int main() {
    char labirint[12][12] = {
                  '#','#','#','#','#','#','#','#','#','#','#','#',
                  '#','.','.','.','#','.','.','.','.','.','.','#',
                  'F','.','#','.','#','.','#','#','#','#','.','#',
                  '#','#','#','.','#','.','.','.','.','#','.','#',
                  '#','.','.','.','.','#','#','#','.','#','.','S',
                  '#','#','#','#','.','#','.','#','.','#','.','#',
                  '#','.','.','#','.','#','.','#','.','#','.','#',
                  '#','#','.','#','.','#','.','#','.','#','.','#',
                  '#','.','.','.','.','.','.','.','.','#','.','#',
                  '#','#','#','#','#','#','.','#','#','#','.','#',
                  '#','.','.','.','.','.','.','#','.','.','.','#',
                  '#','#','#','#','#','#','#','#','#','#','#','#',
                 };      
    printLabirint(labirint);
    int startX = 4;
    int startY = 11;
    if (isWay(labirint, startX, startY)) {
        std::cout << "\nCorect  way printing with < o >\n" << std::endl;
        printLabirint(labirint);
        std::cout << "\n=====Come out from labyrinth!!!=====" << std::endl;
    } else {
        std::cout << "\nThere is no way out of the labyrinth :(" << std::endl;
    }
    return 0;
}
