#include <iostream>

int fib(int number) {   
    static int countOfFunctionCall = 0;
    if (0 >= number) {
        ++countOfFunctionCall;
        return 0;
    } 
    if (1 == number || 2 == number) {
        ++countOfFunctionCall;
        return 1;
    }
    ++countOfFunctionCall;
    return fib(number - 1) + fib(number - 2);
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
    int index = 0;
    bool check = 1;
    do {
        std::cout << "Enter index: ";
        std::cin >> index;
        validNumber(index);
        std::cout << "Fibonacci number: " << fib(index) << std::endl;
        std::cout << "Enter 1 to continue, Enter 0 for Exit: ";
        std::cin >> check;
    } while (check);
    return 0;
}
