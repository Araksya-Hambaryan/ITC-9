#include <iostream>

void allocatedMatrix(char**& matrix, int row) {
    matrix = new char*[row];
    for (int i = 0; i < row; ++i) {
        matrix[i] = new char[row];
    }
}

void deleteMatrix(char**& array, int size) {
    for (int i = 0; i < size; ++i) {
        delete[] array[i];
    }
    delete[] array;
}

void printMatrix(char**& array, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void initMatrix(char**& array, char symbol, int size) {
    allocatedMatrix(array, size);
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++ j) {
            array[i][j] = symbol;
            if (i > 0 && i < size/2) {
                array[i][j] = symbol;
                j += size;
            }
            if (i > size/2 && i < size - 1) {
                array[i][j] = symbol;
                j += size;
            }
        }
    }
}

void validNumber(int& number) {
    while (std::cin.fail() || 5 > number || 
           23 < number || 0 == number % 2) {
    
        std::cout << "Invalid Value: Try again!" << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << "Please enter the intager number (5, 7, 9, ..., 23): ";
        std::cin>> number;
    }
}

int main() {
    char** arr;
    char symbol = ' ';
    int size = 0;
    bool continueAction = 1;
    std::cout << "\nAny symbol: ";
    std::cin >> symbol;
    std::cout << "Enter odd number for size: ";
    std::cin >> size;
    validNumber(size);
    initMatrix(arr, symbol, size);
    printMatrix(arr, size);
    
    deleteMatrix(arr, size);

    return 0;
}
