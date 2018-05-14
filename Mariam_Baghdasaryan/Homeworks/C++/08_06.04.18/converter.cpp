#include <iostream>

void numericSystem(int number) {
    switch (number) {
        case 10: {
            std :: cout << 'A';
            break;
        }
        case 11: {
            std :: cout << 'B';
            break;
        }
        case 12: {
            std :: cout << 'C';
            break;
        }
        case 13: {
            std :: cout << 'D';
            break;
        }
        case 14: {
            std :: cout << 'E';
            break;
        }
        case 15: {
            std :: cout << 'F';
            break;
        }
    }
}

void convert(int number, int system) {
    if (number <= system) {
        if (number < 10 || 10 == system) {
            std :: cout << number;
        } else {
            numericSystem(number);
        }
        return;
    }
    convert(number / system, system);
    if (number % system < 10 || 10 == system) {
        std :: cout << number % system;
    } else {
        numericSystem(number % system);
    }
}

void input(int& number, int& system) {
    std :: cout << "Input number : ";
    std :: cin >> number;
    std :: cout << "Input numeric system : ";
    std :: cin >> system;
    while (!std :: cin || number < 0 || system <= 0 || system > 16) {
        std :: cin.clear();
        std :: cin.ignore();
        std :: cout << "Please input correct (numeric system will be bigger than 0 and smaller than 17) : ";
        std :: cin >> number >> system;
    }
}
 
int main() {
    int number;
    int system;

    input(number, system);
    convert(number, system);

    std :: cout << std :: endl;

    return 0;
}
                                                          

