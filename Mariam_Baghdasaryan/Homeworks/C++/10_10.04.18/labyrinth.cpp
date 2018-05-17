#include <iostream>

void printLabyrinth(char labyrinth[12][13]) {
    for (int counter1 = 0; counter1 < 12; ++counter1) {
        for (int counter2 = 0; counter2 < 12; ++counter2) {
            std :: cout << labyrinth[counter1][counter2] << " ";
        }
        std :: cout << std :: endl;
    }
    std :: cout << std :: endl;
}

bool checkWay(char labyrinth[12][13], int x, int y) {
    if (0 > x || 11 < x || 0 > y || 11 < y) {
        return false;
    }
    if ('E' == labyrinth[x][y]) {
        return true;
    }
    if (' ' != labyrinth[x][y] && 'S' != labyrinth[x][y]) {
        return false;
    }
    labyrinth[x][y] = 'o';
    if (checkWay(labyrinth, x - 1, y)) {
        return true;
    }
    if (checkWay(labyrinth, x, y + 1)) {
        return true;
    }
    if (checkWay(labyrinth, x + 1, y)) {
        return true;
    }
    if (checkWay(labyrinth, x, y - 1)) {
        return true;
    }
    labyrinth[x][y] = '.';
    return false;
}

int main() {
    char labyrinth[12][13] = {"############",
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

    printLabyrinth(labyrinth);
    int startX = 4;
    int startY = 11;

    if (checkWay(labyrinth, startX, startY)) {
        printLabyrinth(labyrinth);
    } else {
        std::cout << "There is no way out of the labyrinth..." << std::endl;
    }

    return 0;
} 
