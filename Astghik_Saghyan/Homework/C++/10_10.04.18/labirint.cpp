#include <iostream>

bool canMove(char matrix[12][12], int x, int y) {
    if (0 > x || 11 < x || 0 > y || 11 < y || matrix[x][y] == '#') {
//        printLabirint(matrix, x, y);
        return false;
    }
    return true;
}

bool travers(char matrix[12][12], int x, int y, char dir) {
    if (x == 2 && y == 0) {
        return true;
    } else if(x == 4 && y == 11) {
        return false;
    }

    if(dir == 'v') {
        if(canMove(matrix, x+1, y) && matrix[x][y-1] == '#') {
            std::cout << "can move v" <<x<<" "<<y<< std::endl;
            travers(matrix, x+1, y, 'v');
        } else if(canMove(matrix, x, y-1)) {
            std::cout << "can move <"<<x<<" "<<y << std::endl;
            travers(matrix, x, y-1, '<');
        } else if(canMove(matrix, x, y+1)) {
            std::cout << "can move >"<<x<<" "<<y << std::endl;
            travers(matrix, x, y+1, '>');
        } else {
            std::cout << "can move ^"<<x<<" "<<y << std::endl;
            travers(matrix, x-1, y, '^');
        }
    }

    if(dir == '>') {
        if(canMove(matrix, x, y+1) && matrix[x+1][y] == '#') {
            std::cout << "can move >" <<x<<" "<<y<< std::endl;
            travers(matrix, x, y+1, '>');
        } else if(canMove(matrix, x+1, y)) {
            std::cout << "can move v"<<x<<" "<<y << std::endl;
            travers(matrix, x+1, y, 'v');
        } else if(canMove(matrix, x-1, y)) {
            std::cout << "can move ^"<<x<<" "<<y << std::endl;
            travers(matrix, x-1, y, '^');
        } else {
            std::cout << "can move <"<<x<<" "<<y << std::endl;
            travers(matrix, x, y-1, '<');
        }
    }

    if(dir == '^') {
        if(canMove(matrix, x-1, y) && matrix[x][y+1] == '#') {
            std::cout << "can move ^" <<x<<" "<<y<< std::endl;
            travers(matrix, x-1, y, '^');
        } else if(canMove(matrix, x, y+1)) {
            std::cout << "can move >" <<x<<" "<<y << std::endl;
            travers(matrix, x, y+1, '>');
        } else if(canMove(matrix, x, y-1)) {
            std::cout << "can move <"<<x<<" "<<y << std::endl;
            travers(matrix, x, y-1, '<');
        } else {
            std::cout << "can move v"<<x<<" "<<y << std::endl;
            travers(matrix, x+1, y, 'v');
        }
    }
    if(dir == '<') {
        if(canMove(matrix, x, y-1) && matrix[x-1][y] == '#') {
            std::cout << "can move <" <<x<<" "<<y<< std::endl;
            travers(matrix, x, y-1, '<');
        } else if(canMove(matrix, x-1, y)) {
            std::cout << "can move ^"<<x<<" "<<y << std::endl;
            travers(matrix, x-1, y, '^');
        } else if(canMove(matrix, x+1, y)) {
            std::cout << "can move v"<<x<<" "<<y << std::endl;
            travers(matrix, x+1, y, 'v');
        } else {
            std::cout << "can move >"<<x<<" "<<y << std::endl;
            travers(matrix, x, y+1, '^');
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
    void (*printLab)(char m[12][12], int x, int y);
    printLab = &printLabirint;
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

    if(travers(labirint, 3, 10, '^')) {
        std::cout << "There is a way to exit!" << std::endl;
    } else {
        std::cout << "Ther is no way to exit!" << std::endl;
    };
    
    std::cout << std::endl;
    printLabirint(labirint, 2, 0);
    return 0;
}


