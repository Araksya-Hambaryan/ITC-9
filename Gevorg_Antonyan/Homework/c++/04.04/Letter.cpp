#include <iostream>

void tar(char** arr, int size, char symbol, char symbol0) {
    arr = new char*[size];
    for(int i = 0; i < size; ++i) {
        arr[i] = new char[size];
    }
    for(int i = 0; i < size; ++i) {
        for(int j = 0; j < size - 1; ++j) {
             arr[i][j] = symbol0;
        }
    }
    for(int i = 1; i < size - 1; ++i) {
        arr[0][i] = symbol;
        arr[size - 1][i] = symbol;
        arr[i][0] = symbol;
        if(size / 2 < i) {
            arr[i][size - 1] = symbol;
            arr[size / 2 - 1][i] = symbol;
        }
    }
}

int main() {
    int size = 0;
    char symbol0; 
    char symbol;
    std::cout << "enter size" << std::endl; 
    std::cin >> size;
    std::cout << "enter symbol" << std::endl;
    std::cin >> symbol0;
    std::cout << "enter main symbol" <<std::endl;
    std::cin >> symbol;
    char** arr = new char*[size];
    for(int i = 0; i < size; ++i) {
        arr[i] = new char[size];
    }

    tar(arr, size, symbol, symbol0);
    for(int i = 0; i < size; ++i) {
        for(int j = 0; j < size; ++j){
           std::cout << arr[i][j];
        }
        std::cout << std::endl;
    }
    return 0;
}
