#include <iostream>

void tar(char**& arr, int size, char symbol, char symbol0) {
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

void replace (char**& text, int size) {
    char change;
    char str;
    std::cout << "pleace enter change letter" << std::endl;
    std::cin >> change;
    std::cout << "pleace enter new letter" << std::endl;
    std::cin >> str;
    for(int i = 0; i < size; ++i) {
        for(int j = 0; j < size; ++j) {            
            if(text[i][j] == change) {
                text[i][j] = str;
            }
        }
    }
}

int count (char** text, int size) {
    char str;
    std::cout << "enter quantity symbol" <<std::endl;
    std::cin >> str;
    int quantity = 0;
    for(int i = 0; i < size; ++i) {
        for(int j = 0; j < size; ++j) {
            if (text[i][j] == str) {
                ++quantity;
            }
        }
    }
    return quantity;
}


void print(char** arr, int size) {
    for(int i = 0; i < size; ++i) {
        for(int j = 0; j < size; ++j){
           std::cout << arr[i][j];
        }
        std::cout << std::endl;
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
    char** arr;
    tar(arr, size, symbol, symbol0);
    print(arr, size);
    replace(arr, size);
    print(arr, size);    
    std::cout << count(arr, size) << std::endl;
    return 0;
}
