#include <iostream>

int conversion(int number, int system) {
   int convertNumber = 0;
    int index = 1;
    while (0 != number) {
        convertNumber += (number % system) * index;
        number /= system;
        index = index * 10;
    }
    return convertNumber;
}

int main() {
    int number = 0;
    std::cout << "Enter number: ";
    std::cin >> number;
    int system = 0;
    std::cout << "Enter system: ";
    std::cin >> system;
    
    std::cout << "Conversion: " << conversion(number, system) << std::endl;

    return 0;
}
