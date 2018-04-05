#include <iostream>

bool isPrime (int number) {
    if (1 == number || 2 == number || 3 == number) {
        return true;
    }
    for (int i = 2; i <= number / 2; ++i) {
        if (0 == number % i) {
            return false;
        }
    }
    return true;
}
void primeDivisors(int firstNumber, int secondNumber) {
    int count = 0;
    std::cout << "Common prime dividers: ";
    for (int i = 1; i <= firstNumber / 2; ++i) {
        if (0 == firstNumber % i && isPrime(i) && 0 != secondNumber % i) {
            std::cout << i << " ";
            ++count;
        }
    }
    if (0 == count) {
        std::cout << "No" << std::endl;
    }
    std::cout << std::endl;
}

void validNumber(int& number) {
    while (std::cin.fail() || 0 >= number) {    
        std::cout << "Invalid Value: Try again!" << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << "Please enter the intager number: ";
        std::cin>> number;
    }
}

int main() {
    int firstNumber = 0;
    std::cout << "Enter the first number: ";
    std::cin >> firstNumber;
    validNumber(firstNumber);
    int secondNumber = 0;
    std::cout << "Enter the second number: ";
    std::cin >> secondNumber;
    validNumber(secondNumber);
    primeDivisors(firstNumber, secondNumber);
    return 0;
}
