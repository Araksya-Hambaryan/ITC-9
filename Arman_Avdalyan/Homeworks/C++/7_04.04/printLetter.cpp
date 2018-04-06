#include <iostream>
#include <cstdlib>

int drawLetter(char** &arr, char symbol) {
    srand(time(0));
    int length = 0;
    do {
        length = rand() % 30 + 11;
    } while (length % 2 != 1);

    int j = length / 2;
    arr = new char*[length];
    
    for (int i = 0; i < length; ++i) {
        arr[i] = new char[length];
        for (int j = 0; j < length; ++j) {
            arr[i][j] = ' ';
        }
    }

    for (int i = 0; i < length && j > 0; ++i) {
        arr[i][j] = symbol;
        arr[i][length - j - 1] = symbol;
        if (i == length / 4 + 1) {
            for (int k = j; k < length - j; ++k) {
                arr[i][k] = symbol;
            }
        }
        --j;
    }
    return length;
}

bool replace(char** &arr, char oldSymbol, char newSymbol, int length) {
    bool flag = 0;
    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < length; ++j) {
            if (arr[i][j] == oldSymbol) {
                flag = 1;
                arr[i][j] = newSymbol;
            }
        }
    }
    return flag;
}

int count(char** &arr, char symbol, int length) {
    int count = 0;
    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < length; ++j) {
            if (arr[i][j] == symbol) {
                ++count;
            }
        }
    }
    return count;
}

void printArray(char** &arr, int length) {
    for (int i = 0; i < length / 2; ++i) {
        for (int j = 0; j < length; ++j) {
            std :: cout << arr[i][j];
        }
        std :: cout << "\n";
    }
}

int main() {
    int length = 0;
    char** arr;
    char oldSymbol = ' ';
    char newSymbol = ' ';
    char symbol = ' ';
    std :: cout << "Input symbol to draw : ";
    std :: cin >> symbol;
    length = drawLetter(arr, symbol);
    printArray(arr, length);
    std :: cout << "Input old and new symbols to replace : ";
    std :: cin >> oldSymbol >> newSymbol;
    if (!replace(arr, oldSymbol, newSymbol, length)) {
        std :: cout << "There is not " << oldSymbol << " to replace.\n";
    } else {
        symbol = newSymbol;
    }
    printArray(arr, length);
    std :: cout << "Count of " << symbol << " = " << count(arr, symbol, length) << std :: endl;
    
    
    for (int i = 0; i < length; ++i) {
        delete arr[i];
    }
    delete[] arr;
    return 0;
}
