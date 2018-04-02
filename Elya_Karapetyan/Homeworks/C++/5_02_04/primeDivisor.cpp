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

void primeDivisors(int number,int& count, int* array) {
    int c = 0;
    int j = 0;
    std::cout << "Prime divisors of " <<  number << " are: ";
    for (int i = 1; i <= number; ++i) {
        if (0 == number % i && isPrime(i)) {
            std::cout << i << " ";
            array[j] = i;
            ++j;
            ++count;
        }
    }
    std::cout << std::endl;
}

void findDivisors(int firstNumber, int secondNumber, int firstCount, int secondCount) {
    int* firstArray = new int;
    int* secondArray = new int;
    primeDivisors(firstNumber, firstCount, firstArray);
    primeDivisors(secondNumber, secondCount, secondArray);
    int countOfZeroes = 0;
    for (int i = 0; i < firstCount; ++i) {
        for (int j = 0; j < secondCount; ++j) {
            if (firstArray[i] == secondArray[j]) {
                firstArray[i] = 0;
                ++countOfZeroes;
            }
        }
    }
    if (countOfZeroes == firstCount) {
        std::cout << "Ther isn't divisor!" << std::endl;
        return;
    }
    for (int i = 0; i < firstCount; ++i) {
        if (0 != firstArray[i]) {
            std::cout << firstArray[i] << " ";
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
    int secondNumber = 0;
    std::cout << "Enter the second number: ";
    std::cin >> secondNumber;
    validNumber(secondNumber);
    int firstCount = 0;
    int secondCount = 0;
    findDivisors(firstNumber, secondNumber, firstCount, secondCount);
    return 0;
}
