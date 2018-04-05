#include <iostream>

void drowLetter( char**& matrix, char symbol) {
    matrix = new char*[5];
    for(int i = 0; i < 5; i++) {
        matrix[i] = new char[3];
    }
    for(int i = 1; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            if(0 == j || 2 == j) {
                matrix[i][j] = symbol;
            } else {
                matrix[i][j] = '.';    
            }
        }    
    }
    matrix[0][1] = symbol;
    matrix[2][1] = symbol;
    matrix[0][0] = '.';
    matrix[0][2] = '.';
}


int main() {
    char** m;
    drowLetter( m, 'a');
    for (int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            std::cout << m[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
} 
