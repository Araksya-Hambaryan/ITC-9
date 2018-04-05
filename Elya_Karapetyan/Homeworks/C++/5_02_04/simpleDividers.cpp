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

void primeDivisors(int number) {
    std::cout << "Prime divisors of " <<  number << " are: ";
    for (int i = 1; i <= number / 2; ++i) {
        if (0 == number % i && isPrime(i)) {
            std::cout << i << " ";
        }
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
    primeDivisors(firstNumber);
    return 0;
}
