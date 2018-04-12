#include <iostream>

int main() {
    const int size = 12;
    int i = 4;
    int j = 11;
    char maze[size][size] = {
                         {'#','#','#','#','#','#','#','#','#','#','#','#'},
                         {'#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#'},
                         {' ',' ','#',' ','#',' ','#','#','#','#',' ','#'},
                         {'#','#','#',' ','#',' ',' ',' ',' ','#',' ','#'},
                         {'#',' ',' ',' ',' ','#','#','#',' ','#',' ','o'},
                         {'#','#','#','#',' ','#',' ','#',' ','#',' ','#'},
                         {'#',' ',' ','#',' ','#',' ','#',' ','#',' ','#'},
                         {'#','#',' ','#',' ','#',' ','#',' ','#',' ','#'},
                         {'#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#'},
                         {'#','#','#','#','#','#',' ','#','#','#',' ','#'},
                         {'#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#'},
                         {'#','#','#','#','#','#','#','#','#','#','#','#'},
    };
    std::cout << "HEY! Let's play a game. I made for you a labirint and you should help Mr. O to escape it" << std::endl;
    std::cout << "All you have to do, just PRESS and HOLD \"Enter \"" << std::endl;
    std::cin.ignore();
    for(int m = 0; m < size; m++) {
        for(int n = 0; n < size; n++) {
            if(' ' == maze[m][n] || '#' == maze[m][n] || 'o' == maze[m][n]){
                std::cout << maze[m][n] << " ";
            } else {
                std::cout << ' ' << ' ';
            }
        }
        std::cout << std::endl;
    }
    std::cin.ignore();
    maze[4][11] = ' ';
    while(i != 2 || j != 0) {
        if(i + 1 < 11 && ' ' == maze[i + 1][j]) {
            i++;
            maze[i][j] = '*';
        } else if(j + 1 < 11 && ' ' == maze[i][j + 1]) {
            j++;
            maze[i][j] = '*';
        } else if(i - 1 >= 0 && ' ' == maze[i - 1][j]) {
            i--;
            maze[i][j] = '*';
        } else if(j - 1 >= 0 && ' ' == maze[i][j - 1]) {
            j--;
            maze[i][j] = '*';
        } else if(i - 1 >= 0 && '*' == maze[i - 1][j]) {
            i--;
            maze[i][j] = '/';
        } else if(j + 1 < 11 && '*' == maze[i][j + 1]) {
            j++;
            maze[i][j] = '/';
        } else if(i + 1 < 11 && '*' == maze[i + 1][j]) {
            i++;
            maze[i][i] = '/';
        } else if(j - 1 >= 0 && '*' == maze[i][j - 1]) {
            j--;
            maze[i][j] = '/';
        } else if(i + 1 < 11 && '/' == maze[i + 1][j]) {
            i++;
            maze[i][j] = '*';
        } else if(j + 1 < 11 && '/' == maze[i][j + 1]) {
            j++;
            maze[i][j] = '*';
        } else if(i - 1 >= 0 && '/' == maze[i - 1][j]) {
            j--;
            maze[i][j] = '*';
        } else if(j - 1 >= 0  && '/' == maze[i][j - 1]) {
            j--;
            maze[i][j] = '*';
        } else if(i - 1 >= 0 && '/' == maze[i - 1][j]) {
            i--;
            maze[i][j] = '/';
        }
        char temp = maze[i][j];
        maze[i][j] = 'o';
        for(int b = 0; b < 3; b++) { //Loop for more slow animation
            for(int m = 0; m < size; m++) {
                for(int n = 0; n < size; n++) {
                    if(' ' == maze[m][n] || '#' == maze[m][n] || 'o' == maze[m][n]){
                        std::cout << maze[m][n] << " ";
                    } else {
                        std::cout << ' ' << ' ';
                    }
                }
            std::cout << std::endl;
            }
            //maze[i][j] = temp;
            std::cout << "i, j = " << i << "," << j << std::endl;
            std::cin.ignore();
        }
        maze[i][j] = temp;
    }
    std::cout << "YES! WE ARE OUT!!!" << std::endl;    
    return 0;
}
