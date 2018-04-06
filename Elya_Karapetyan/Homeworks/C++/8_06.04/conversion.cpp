#include <iostream>

int firstConversion(int number, int system) {
   int convertNumber = 0;
    int index = 1;
    while (0 != number) {
        convertNumber += (number % system) * index;
        number /= system;
        index = index * 10;
    }
    return convertNumber;
}

void secondConversion(int number, int system) {
    std::string convertNumber = " ";
    int index = 0;
    while (0 != number) {
        int remainder = number % system;
        if (10 > remainder) {
            convertNumber[index] = remainder + 48;
            ++index;
        } else {
             convertNumber[index] = remainder + 55;
            ++index;
        }
        number /= system; 
    }
    for (int i = index - 1; i >= 0; --i) {
        std::cout << convertNumber[i];
    }
    std::cout << std::endl;
}

void validNumber(int& number) {
    while (std::cin.fail() || 0 > number) {
        std::cout << "Invalid Value: Try again!" << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << "Please enter the intager number: ";
        std::cin>> number;
    }
}

int main() {
    int number = 0;
    std::cout << "Enter number: ";
    std::cin >> number;
    validNumber(number);
    int system = 0;
    std::cout << "Enter system(2, 3, 4, ... , 16): ";
    do {
        std::cin >> system;
        if (1 < system && 9 > system) { 
            std::cout << "Conversion: " << firstConversion(number, system) << std::endl;
            return 0;
        }
        if (10 < system && 16 >= system) { 
            std::cout << "Conversion: ";
            secondConversion(number, system);
            return 0;
        }     
        std::cout << "Invalid systema! Please enter 2 or 3 or 4 ... 16 -> ";
    } while (1 > system || 16 < system); 
    return 0;
}
