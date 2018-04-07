#include <iostream>

void drowLetter( char**& matrix, char symbol, int& size) {
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
            if(size/5+1 > i || size/2 == i || size/5 > j || (size/3*2)-size/5-1 < j) {
                matrix[i][j] = symbol;
            } else {
                matrix[i][j] = '.';    
            }
        }    
    }
}


int main() {
    char** m;
    int size;
    drowLetter( m, 'a', size);
    std::cout << "size after func:\t" << size << std::endl;
    for (int i = 0; i < size; i++) {
        for(int j = 0; j < size/3*2; j++) {
            std::cout << m[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
} 
