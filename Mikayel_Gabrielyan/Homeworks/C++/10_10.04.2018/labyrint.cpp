#include <iostream>

const int size = 12; 
char labyrinth[size][size + 1] = {
    "############", 
    "#...#......#", 
    "S.#.#.####.#", 
    "###.#....#.#",
    "#....###.#.E", 
    "####.#.#.#.#", 
    "#..#.#.#.#.#", 
    "##.#.#.#.#.#", 
    "#........#.#", 
    "######.###.#", 
    "#......#...#", 
    "############" 
};

bool canMove(char labyrinth[size][size + 1], int x, int y) {
    if('E' == labyrinth[x][y]) {
        return true;
    }
    if(0 > x || size -1 < x || 0 > y || size -1 < y) {
        return false;
    }
    if ('.' != labyrinth[x][y] && 'S' != labyrinth[x][y]) {
        return false;
    }
    labyrinth[x][y] = '+';
    if(canMove(labyrinth, x, y + 1)) {
        return true;
    }
    if(canMove(labyrinth, x + 1, y)) {
        return true;
    }
    if(canMove(labyrinth, x, y - 1)) {
        return true;
    }
    if(canMove(labyrinth, x - 1, y)) {
        return true;
    }
    labyrinth[x][y] = 'X';
    return false;
}

void printLab(char labyrinth[size][size + 1]) {
    for(int i = 0; i < size; ++i) {
        for(int j = 0; j < size; ++j) {
            std::cout << labyrinth[i][j] << "  ";
        }
        std::cout << std::endl;
    }
}

int main() {
    printLab(labyrinth);
    int startX = 2;
    int startY = 0;
    if(true == canMove(labyrinth, startX, startY)) {
        std::cout << "\n Has a way out of the labyrinth \n\n";
        printLab(labyrinth);
    } else {
        std::cout << "\n Has not a way out of the labyrinth \n\n";
        printLab(labyrinth);
    }
    return 0;
}
