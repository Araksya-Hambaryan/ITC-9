#include <iostream>

int globalx = 2;
int globaly = 0;

void array(char**& arr, int size) {
    arr = new char*[size];
    for(int i = 0; i < size; ++i) {
        arr[i] = new char[size];
    }
}

void inumitLabirint(char**& labirint, int size) { 
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            labirint[i][j] = '#';
        }
    } 
    for(int i = 0; i < 12; ++i) {
        if (1 == i || 2 == i || 3 == i || 5 == i || 6 == i || 7 == i || 8 == i || 9 == i || 10 == i) {
            labirint[1][i] = '.';        
        }
    }
    for(int i = 0; i < 12; ++i) {
        if ( 0 == i || 1 == i || 3 == i || 5 == i || 10 == i) {
            labirint[2][i] = '.';       
        }
    }
    for(int i = 0; i < 12; ++i) {
        if (3 == i || 5 == i || 6 == i || 7 == i || 8 == i || 10 == i) {
            labirint[3][i] = '.';
        }
    }
    for(int i = 0; i < 12; ++i) {
        if (1 == i || 2 == i || 3 == i || 4 == i || 8 == i || 10 == i || 11 == i) {
            labirint[4][i] = '.';
        }
    }
    for(int i = 0; i < 12; ++i) {
        if (4 == i || 6 == i || 8 == i || 10 == i) {
            labirint[5][i] = '.';
        }
    }
    for(int i = 0; i < 12; ++i) {
        if (1 == i || 2 == i || 4 == i || 6 == i || 8 == i || 10 == i) {
            labirint[6][i] = '.';
        }
    }
    for(int i = 0; i < 12; ++i) {
        if (2 == i || 4 == i || 6 == i || 8 == i || 10 == i){
            labirint[7][i] = '.';
        }
    }
    for(int i = 0; i < 12; ++i) {
        if (1 == i || 2 == i || 3 == i || 5 == i || 6 == i || 7 == i || 8 == i || 4 == i || 10 == i){
            labirint[8][i] = '.';
        }
    }
    for(int i = 0; i < 12; ++i) {
        if (6 == i || 10 == i) {
            labirint[9][i] = '.';
        }
    }
    for(int i = 0; i < 12; ++i) {
        if (1 == i || 2 == i || 3 == i || 5 == i || 6 == i || 4 == i || 8 == i || 9 == i || 10 == i) {
            labirint[10][i] = '.';
        }
    }
}



 
void printLabirint(char** labirint, int size) {
   for (int i = 0; i < 12; ++i) {
       for (int j = 0; j < 12; ++j) {
           std::cout << labirint[i][j]; 
       } 
       std::cout << std::endl;
    } 
}


char dirLeft(char a) {
    char dir;
    switch (a) {
        case 'l':
            dir = 'd';
            break;
        case 'd':
            dir = 'r';
            break;
        case 'r':
            dir = 'u';
            break;
        case 'u':
            dir = 'l';
            break;
        default: 
            std::cout << "..." << std::endl;
    }
    return dir;
}

char dirRigth(char a) {
    char dir;
    switch (a) {
        case 'l':
            dir = 'u';
            break;
        case 'd':
            dir = 'l';
            break;
        case 'r':
            dir = 'd';
            break;
        case 'u':
            dir = 'r';
            break;
        default: 
            std::cout << "..." << std::endl;
    }
    return dir;
}

void step(char dir, int& x, int& y) {
    switch (dir) {
        case 'l':
            --y;
            break;
        case 'd':
            --x;
            break;
        case 'r':
            ++y;
            break;
        case 'u':
            ++x;
            break;
        default: 
            std::cout << "..." << std::endl;
    }
}


int f(char**& labirint, int startX, int startY, char symbol) {
    
//    step(symbol, startX, startY);
    switch(symbol) {
        case 'u':
            if ('#' != labirint[startX][startY - 1]) {
                symbol = dirLeft(symbol);
                return f(labirint, startX, startY, symbol);
            } else if ('#' == labirint[startX - 1][startY]) {
                symbol = dirRigth(symbol);
                return f(labirint, startX, startY, symbol);
            } else {
                step(symbol, startX, startY);
            }
            break;
        case 'd':
            if ('#' != labirint[startX][startY + 1]) {
                symbol = dirLeft(symbol);
                return f(labirint, startX, startY, symbol);
            } else if ('#' == labirint[startX - 1][startY]) {
                symbol = dirRigth(symbol);
                return f(labirint, startX, startY, symbol);
            } else {
                step(symbol, startX, startY);
            }
            break;

        case 'l':
            if ('#' != labirint[startX + 1][startY]) {
                symbol = dirLeft(symbol);
                return f(labirint, startX, startY, symbol);
            } else if ('#' == labirint[startX][startY - 1]) {
                symbol = dirRigth(symbol);
                return f(labirint, startX, startY, symbol);
            } else {
                step(symbol, startX, startY);
            }
            break;
        
        case 'r':
            if ('#' != labirint[startX - 1][startY]) {
                symbol = dirLeft(symbol);
                return f(labirint, startX, startY, symbol);
            } else if ('#' == labirint[startX][startY + 1]) {
                symbol = dirRigth(symbol);
                return f(labirint, startX, startY, symbol);
            } else {
                step(symbol, startX, startY);
            }
    }
    if ('.' == labirint[startX][startY]) {
        labirint[startX][startY] = 'o';
    } else {
        labirint[startX][startY] = '.';
    }
    //step(symbol, startX, startY);
    if (0 > startX || 0 > startY || 11 < startX|| 12 < startY) {
        if (globalx == startX && globaly == startY) {
            std::cout << "no exit" << std::endl;
            return 1;
        } else {
            std::cout << "There is an exit" << std::endl;
            return 1;
        }
    } else {
        return f(labirint, startX, startY, symbol);
    }    
 
}


int main() {
    int size = 12;
    char** arr;
    array(arr, size);
    inumitLabirint(arr, size);
    printLabirint(arr, size);
    f(arr, 2, 0, 'r');
    printLabirint(arr, size);
      
 
 
    return 0;    


}





























