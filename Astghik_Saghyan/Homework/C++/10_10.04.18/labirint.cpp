#include <iostream>

bool canMove(char matrix[12][12], int x, int y) {
    if (0 > x || 11 < x || 0 > y || 11 < y || matrix[x][y] == '#') {
//        printLabirint(matrix, x, y);
        return false;
    }
    return true;
}

bool travers(char matrix[12][12], int x, int y, char dir) {
    if (x == 0 && y == 2) {
        return true;
    } else if(x == 11 && y == 4) {
        return false;
    }

    if(dir == 'v') {
        if(canMove(matrix, x, y+1)) {
            travers(matrix, x, y+1, 'v');
        } else {
            travers(matrix, x, y, '>');
        }
    }
    if(dir == '>') {
        if(canMove(matrix, x+1, y)) {
            travers(matrix, x+1, y, '>');
        } else {
            travers(matrix, x, y, '^');
        }
    }
    if(dir == '^') {
        if(canMove(matrix, x, y-1)) {
            travers(matrix, x, y-1, '^');
        } else {
            travers(matrix, x, y, '<');
        }
    }
    if(dir == '<') {
        if(canMove(matrix, x-1, y)) {
            travers(matrix, x-1, y, '<');
        } else {
            travers(matrix, x, y, 'v');
        }
    }
}

void printLabirint(char matrix[12][12], int x, int y) {
    matrix[x][y] = 'x';
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int main() {
    char labirint[12][12] = {
    {'#','#','#','#','#','#','#','#','#','#','#','#'},
    {'#','.','.','.','#','.','.','.','.','.','.','#'},
    {'.','.','#','.','#','.','#','#','#','#','.','#'},
    {'#','#','#','.','#','.','.','.','.','#','.','#'},
    {'#','.','.','.','.','#','#','#','.','#','.','.'},
    {'#','#','#','#','.','#','.','#','.','#','.','#'},
    {'#','.','.','#','.','#','.','#','.','#','.','#'},
    {'#','#','.','#','.','#','.','#','.','#','.','#'},
    {'#','.','.','.','.','.','.','.','.','#','.','#'},
    {'#','#','#','#','#','#','.','#','#','#','.','#'},
    {'#','.','.','.','.','.','.','#','.','.','.','#'},
    {'#','#','#','#','#','#','#','#','#','#','#','#'}
    };

    std::cout << travers(labirint, 12, 4, '<') << std::endl;
    return 0;


}


