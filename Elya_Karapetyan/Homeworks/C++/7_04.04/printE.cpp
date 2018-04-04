#include <iostream>
#include <stdlib.h>
#include <time.h>

void printMatrix(char**& array, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void deleteMatrix(char**& array, int size) {
    for (int i = 0; i < size; ++i) {
        delete[] array[i];
    }
    delete[] array;
}

int countOfInputedCharacter(char**& array, int size, char inputedCharacter) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (inputedCharacter == array[i][j]) {
                ++count;
            }
        }
    }
    return count;
}

void replace(char**& array, int size, char oldCharacter, char newCharacter) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (array[i][j] == oldCharacter) {
                array[i][j] = newCharacter;
            }
        } 
    } 
}

int sizeOfE(char**& array, char symbol) {
    srand(time(0));
    int mashtab = 0;
    while (0 == mashtab % 2 || 4 > mashtab || 20 <  mashtab) {
        mashtab = rand() % 10; 
    }
    array = new char*[mashtab];
    for (int i = 0; i < mashtab; ++i) {
        array[i] = new char[mashtab];
    }
    for (int i = 0; i < mashtab; ++i) {
        for (int j = 0; j < mashtab; ++ j) {
            array[i][j] = symbol;
            if (i > 0 && i < mashtab/2) {
                array[i][j] = symbol;
                j += mashtab;
            }
            if (i > mashtab/2 && i < mashtab - 1) {
                array[i][j] = symbol;
                j += mashtab;
            }
        }
    }
    return mashtab;
}

int main() {
    char** arr;
    char symbol = ' ';
    int size = 0;
    bool continueAction = 1;
    std::cout << "\nAny symbol: ";
    std::cin >> symbol;
    size = sizeOfE(arr, symbol);
    printMatrix(arr, size);
    std::cout << "\nSize: " << size  << std::endl;
    char inputedCharacter = ' ';
    std::cout << "Enter Symbol: ";
    std::cin >> inputedCharacter;
    std::cout << "Count of " << inputedCharacter << " is: " 
       << countOfInputedCharacter(arr, size, inputedCharacter) << std::endl;
    char newCharacter = ' ';
    std::cout << "Enter new symbol: ";
    std::cin >> newCharacter;
    replace(arr, size, symbol, newCharacter);
    printMatrix(arr, size);
    
    deleteMatrix(arr, size);
    return 0;
}
