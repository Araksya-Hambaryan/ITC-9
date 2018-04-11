#include <iostream>

char canMove(char matrix[12][12], int x, int y) {
    if (0 > x || 11 < x || 0 > y || 11 < y || matrix[x][y] == '#') {
//        printLabirint(matrix, x, y);
        return false;
    }
    return true;
}

bool travers(char matrix[12][12], int x, int y, char dir) {
    if (matrix[x][y] == 'F') {
        return true;
    } else if(matrix[x][y] == 'S') {
        return false;
    }
    int forwardX, forwardY;
    int rightX, rightY;
    int leftX, leftY;
    int backX, backY;
    char forward, right, left, back;
 
    if(dir == 'v') {
        forwardX = x+1;
        forwardY = y;
        rightX = x;
        rightY = y-1;
        leftX = x;
        leftY = y+1;
        backX = x-1;
        backY = y;
        forward = 'v';
        right = '<';
        left = '>';
        back = '^';
        
    }
    if(dir == '>') {
        forwardX = x;
        forwardY = y+1;
        rightX = x+1;
        rightY = y;
        leftX = x-1;
        leftY = y;
        backX = x;
        backY = y-1;
        forward = '>';
        right = 'v';
        left = '^';
        back = '<';
    }
    if(dir == '^') {
        forwardX = x-1;
        forwardY = y;
        rightX = x;
        rightY = y+1;
        leftX = x;
        leftY = y-1;
        backX = x+1;
        backY = y;
        forward = '^';
        right = '>';
        left = '<';
        back = 'v';
    }
    if(dir == '<') {
        forwardX = x;
        forwardY = y-1;
        rightX = x-1;
        rightY = y;
        leftX = x+1;
        leftY = y;
        backX = x;
        backY = y+1;
        forward = '<';
        right = '^';
        left = 'v';
        back = '>';
    }

    if(canMove(matrix, forwardX, forwardY) && matrix[rightX][rightY] == '#') {
        std::cout << "can move <" <<x<<" "<<y<< std::endl;
        travers(matrix, forwardX, forwardY, forward);
    } else if(canMove(matrix, rightX, rightY)) {
        std::cout << "can move ^"<<x<<" "<<y << std::endl;
        travers(matrix, rightX, rightY, right);
    } else if(canMove(matrix, leftX, leftY)) {
        std::cout << "can move v"<<x<<" "<<y << std::endl;
        travers(matrix, leftX, leftY, left);
    } else {
        std::cout << "can move >"<<x<<" "<<y << std::endl;
        travers(matrix, backX, backY, back);
    }
    
}

void printLabirint(char matrix[12][12], int x, int y) {
//    matrix[x][y] = 'x';
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
    {'F','.','#','.','#','.','#','#','#','#','.','#'},
    {'#','#','#','.','#','.','.','.','.','#','.','#'},
    {'#','.','.','.','.','#','#','#','.','#','.','S'},
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


