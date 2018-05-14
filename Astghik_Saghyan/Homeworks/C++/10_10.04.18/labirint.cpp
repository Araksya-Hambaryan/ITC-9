#include <iostream>

void printLabirint(char matrix[12][12], int x, int y) {
    matrix[x][y] = 'o';
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

char canMove(char matrix[12][12], int x, int y) {
    if (0 > x || 11 < x || 0 > y || 11 < y || matrix[x][y] == '#') {
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

    struct Directions {
    
        int forwardX, forwardY;
        int rightX, rightY;
        int leftX, leftY;
        int backX, backY;
        char forward, right, left, back;
	    void setDirections(int fX, int fY, int rX, int rY, int lX, int lY, int bX, int bY, char f, char r, char l, char b) { 
            forwardX = fX; 
            forwardY = fY;
            rightX = rX;
            rightY = rY;
            leftX = lX;
            leftY = lY;
            backX = bX;
            backY = bY;
            forward = f;
            right = r;
            left = l;
            back = b;
	}
    };
    
    Directions lab;
    
    if(dir == 'v') {
        lab.setDirections(x+1, y, x, y-1, x, y+1, x-1, y, 'v', '<', '>', '^');
    }
    if(dir == '>') {
        lab.setDirections(x, y+1, x+1, y, x-1, y, x, y-1, '>', 'v', '^', '<');
    }
    if(dir == '^') {
        lab.setDirections(x-1, y, x, y+1, x, y-1, x+1, y, '^', '>', '<', 'v');
    }
    if(dir == '<') {
        lab.setDirections(x, y-1, x-1, y, x+1, y, x, y+1, '<', '^', 'v', '>');
    }

    if(canMove(matrix, lab.forwardX, lab.forwardY) && matrix[lab.rightX][lab.rightY] == '#') {
        printLabirint(matrix, x, y);
        travers(matrix, lab.forwardX, lab.forwardY, lab.forward);
    } else if(canMove(matrix, lab.rightX, lab.rightY)) {
        printLabirint(matrix, x, y);
        travers(matrix, lab.rightX, lab.rightY, lab.right);
    } else if(canMove(matrix, lab.leftX, lab.leftY)) {
        printLabirint(matrix, x, y);
        travers(matrix, lab.leftX, lab.leftY, lab.left);
    } else {
        printLabirint(matrix, x, y);
        travers(matrix, lab.backX, lab.backY, lab.back);
    }
    
}

int main() {
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


