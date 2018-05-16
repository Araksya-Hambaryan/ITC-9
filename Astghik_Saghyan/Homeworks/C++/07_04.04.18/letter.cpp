#include <iostream>

void drowLetter(char**& matrix, int& size, char& sym) {
    std::cout << "Enter the size (from 6 to 60):\t";
    std::cin >> size;
    std::cout << "Size:\t" << size << std::endl;
    matrix = new char*[size];
    while(6 > size || 60 < size) {
        std::cout << "Please, enter a number from the range!" << std::endl;
        std::cin >> size;
    }

    for(int i = 0; i < size; i++) {
        matrix[i] = new char[size/3*2];
    }
    for(int i = 1; i < size; i++) {
        for(int j = 0; j < size/3*2; j++) {
            if(size/5+1 > i || size/2 == i || size/5 > j ||
                 (size/3*2)-size/5-1 < j) {
                matrix[i][j] = sym;
            } else {
                matrix[i][j] = '.';    
            }
        }    
    }
}

void printLetter(char** matrix, int size) {
    std::cout << std::endl;
    for (int i = 0; i < size; i++) {
        for(int j = 0; j < size/3*2; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void countSymbols(char** matrix, int size) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size/3*2; j++) {
            if(matrix[i][j] == '.') {
                ++count;
            }
        }
    }
    std::cout << "The number of symbols is:\t";
    std::cout << (size-1)*size/3*2 - count << std::endl;
}

void replace(char** matrix, int size, char sym) {
    char toSym;
    std::cout << "Enter a symbols to replace!" << std::endl;
    std::cin >> toSym;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size/3*2; j++) {
            if(matrix[i][j] == sym) {
                matrix[i][j] = toSym;
            }
        }
    }
}

int main() {
    char** m;
    int size;
    char symbol;
    std::cout << "Enter a symbol to draw:\t";
    std::cin >> symbol;
    drowLetter(m, size, symbol);
    printLetter(m, size);
    std::cout << std::endl;
    countSymbols(m, size);
    replace(m, size, symbol);
    printLetter(m, size);


    for (int i = 0; i < size; ++i) {
        delete m[i];
    }
    delete[] m; 
   
    return 0;
} 
