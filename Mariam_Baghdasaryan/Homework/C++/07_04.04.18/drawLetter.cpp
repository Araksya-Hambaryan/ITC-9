#include <iostream>
#include <cstdlib>

int drawM(char**& array, char symbol) {
    int length = 0;
    
    srand(time(NULL));
    do {
        length = rand() % 30 + 5;
    } while (length % 2 != 0);

    array = new char*[length];
    for (int counter = 0; counter < length; ++counter) {
        array[counter] = new char[length];
    }

    for(int counter1 = 0; counter1 < length / 2 + 1; ++counter1) {
        for(int counter2 = 0; counter2 < length; ++counter2) {
            array[counter1][counter2] = ' ';
        }
    }

    for(int counter1 = 0; counter1 < length / 2 + 1; ++counter1) {
        for(int counter2 = 0; counter2 < length; ++counter2) {
            if ((counter1 == counter2) || (length - 1 == counter1 + counter2)) {
                array[counter1][counter2] = symbol;
            }
        }
        array[counter1][0] = symbol;
        array[counter1][length - 1] = symbol;
    }
    
    return length;
}

void printArray(char**& array, int length) {
    for (int counter1 = 0; counter1 < length; ++counter1) {
        for (int counter2 = 0; counter2 < length; ++counter2) {
            std :: cout << array[counter1][counter2];
        }
        std :: cout << std :: endl;
    }
}

bool replace(char**& array, char oldSymbol, char newSymbol, int length) {
    bool check = false;
    for (int counter1 = 0; counter1 < length; ++counter1) {
        for (int counter2 = 0; counter2 < length; ++counter2) {
            if (oldSymbol == array[counter1][counter2]) {
                check = true;
                array[counter1][counter2] = newSymbol;
            }
        }
    }
    return check;
}

int count(char**& array, char symbol, int length) {
    int count = 0;
    for (int counter1 = 0; counter1 < length; ++counter1) {
        for (int counter2 = 0; counter2 < length; ++counter2) {
            if (symbol == array[counter1][counter2]) {
                ++count;
            }
        }
    }
    return count;
}

int main() {
    int length = 0;
    char ** array;
    char symbol = ' ';
    
    std :: cout << "Enter symbol to draw : ";
    std :: cin >> symbol;
    char oldSymbol = ' ';
    char newSymbol = ' ';

    length = drawM(array, symbol);
    printArray(array, length);

    std :: cout << "Input old and new symbols to replace : ";
    std :: cin >> oldSymbol >> newSymbol;
    if (!replace(array, oldSymbol, newSymbol, length)) {
        std :: cout << "There is not " << oldSymbol << " to replace.\n";
    } else {
        symbol = newSymbol;
    }
    printArray(array, length);
    std :: cout << "Count of " << symbol << " : " << count(array, symbol, length) << std :: endl;

    delete array;

    return 0;
}
