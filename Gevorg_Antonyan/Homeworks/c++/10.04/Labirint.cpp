#include <iostream>

void print(char labirint[12][12]) {
   for (int i = 0; i < 12; ++i) {
       for (int j = 0; j < 12; ++j) {
           std::cout << labirint[i][j] << " ";
       }
       std::cout << std::endl;
    }
}

bool way(char labirint[12][12], int x, int y) {
    if (0 > x || 11 < x || 0 > y || 11 < y) {
        return false;
    }
    if ('F' == labirint[x][y]) {
        labirint[x][y] = '.';
        return true;
    }
    if (' ' != labirint[x][y] && 'S' != labirint[x][y]) {
        return false;
    }
    labirint[x][y] = '.';
    if (way(labirint, x, y - 1)) {
        return true;
    }
    if (way(labirint, x + 1, y)) {
        return true;
    }
    if (way(labirint, x, y + 1)) {
        return true;
    }
    if (way(labirint, x - 1, y)) {
        return true;
    }
    labirint[x][y] = ' ';
    return false;
}

int main() {
    char labirint[12][12] = {
                  '#','#','#','#','#','#','#','#','#','#','#','#',
                  '#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',
                  'F',' ','#',' ','#',' ','#','#','#','#',' ','#',
                  '#','#','#',' ','#',' ',' ',' ',' ','#',' ','#',
                  '#',' ',' ',' ',' ','#','#','#',' ','#',' ','S',
                  '#','#','#','#',' ','#',' ','#',' ','#',' ','#',
                  '#',' ',' ','#',' ','#',' ','#',' ','#',' ','#',
                  '#','#',' ','#',' ','#',' ','#',' ','#',' ','#',
                  '#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',
                  '#','#','#','#','#','#',' ','#','#','#',' ','#',
                  '#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',
                  '#','#','#','#','#','#','#','#','#','#','#','#',
                 };
    print(labirint);
    int startx = 4;
    int starty = 11;
    if (way(labirint, startx, starty)) {
        std::cout << "Labirint correct" << std::endl;
        print(labirint);
    } else {
        std::cout << "no way out of the labyrinth" << std::endl;
    }
    return 0;
}
