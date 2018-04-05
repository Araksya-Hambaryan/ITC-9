#include <iostream>

int& prefix(int& number) {
    number -= 1;
    return number;
}

int postfix(int& number) {
    int tmp = number;
    number -= 1;
    return tmp;
}

void validNumber(int& number) {
    while (std::cin.fail()) {
        std::cout << "Invalid Value: Try again!" << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << "Please enter the intager number: ";
        std::cin>> number;
    }
}

int main() {
    int number = 0;
    std::cout << "Enter any intager number: ";
    std::cin >> number;
    validNumber(number); 
    std::cout << "Number: " << number << std::endl;
    std::cout << "--number: " << prefix(number) << std::endl;
    std::cout << "number--: " << postfix(number) << std::endl;
    std::cout << "Number: " << number << std::endl;
    
    return 0;
}
