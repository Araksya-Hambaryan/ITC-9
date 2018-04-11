#include <iostream>


char maze[12][13] = {"############",
    "#   #      #",
    "E # # #### #",
    "### #    # #",
    "#    ### # S",
    "#### # # # #",
    "#  # # # # #",
    "## # # # # #",
    "#        # #",
    "###### ### #",
    "#      #   #",
    "############"};


void printArray() {
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            std :: cout << maze[i][j] << "  ";
        }
        std :: cout << std :: endl;
    }
    std :: cout << "\n\n";
}

bool checkWay(int x, int y, char dir = ' ') {
    static bool isFirstTime = 1;
    
    if ('E' == maze[x][y]) {
        return true;
    }
    if (!isFirstTime) {
        if ('S' == maze[x][y]) {
            return false;
        }
    }
    
    if (isFirstTime) {
        if (' ' == maze[x][y - 1]) {
            dir = 'l';
        } else if (' ' == maze[x - 1][y]) {
            dir = 'u';
        } else if (' ' == maze[x][y + 1]) {
            dir = 'r';
        } else if (' ' == maze[x + 1][y]) {
            dir = 'd';
        }
        maze[x][y] = '0';
        isFirstTime = 0;
    }

    if ('#' == maze[x][y]) {
        return false;
    }
    if (' ' == maze[x][y]) {
        maze[x][y] = '.';
    }
    if ('d' == dir) {
        return checkWay(x + 1, y, 'd') || checkWay(x, y - 1, 'l') || checkWay(x, y + 1, 'r');
    }
    if ('l' == dir) {
        return checkWay(x, y - 1, 'l') || checkWay(x + 1, y, 'd') || checkWay(x - 1, y, 'u');
    }
    if ('u' == dir) {
        return checkWay(x - 1, y, 'u') || checkWay(x, y - 1, 'l') || checkWay(x, y + 1, 'r');
    }
    if ('r' == dir) {
        return checkWay(x, y + 1, 'r') || checkWay(x + 1, y, 'd') || checkWay(x - 1, y, 'u');
    }
}

int main() {
    int startx = 4;
    int starty = 11;
    printArray();
    if (!checkWay(startx, starty)) {
        std :: cout << "There isn't way. \n";
    } else {
        std :: cout << "The maze has a way. ";
    }
    return 0;
}
