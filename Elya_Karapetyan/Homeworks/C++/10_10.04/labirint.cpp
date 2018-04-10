#include <iostream>

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

void printLabirint(char labirint[12][12]) {
   for (int i = 0; i < 12; ++i) {
       for (int j = 0; j < 12; ++j) {
           std::cout << labirint[i][j];
       }
       std::cout << std::endl;
    }
}

bool isWay(int x, int y) {
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
    if (isWay(x, y - 1)) {
        return true;
    }
    if (isWay(x + 1, y)) {
        return true;
    }
    if (isWay(x, y + 1)) {
        return true;
    }
    if (isWay(x - 1, y)) {
        return true;
    }
    labirint[x][y] = 'X';
    return false;
}

int main() {
    printLabirint(labirint);
    if (isWay(4, 11)) {
        std::cout << "durs ekav" << std::endl;
    } else {
        std::cout << "durs galu tarberak chka" << std::endl;
    }
    printLabirint(labirint);
    return 0;
}
