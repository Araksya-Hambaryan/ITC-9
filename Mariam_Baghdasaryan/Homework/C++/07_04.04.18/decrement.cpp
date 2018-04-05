#include <iostream>

int preDecrement(int& number) {
    number = number - 1;
    return number;
}

int postDecrement(int& number) {
    int temp = number;
    number = number - 1;
    return temp;
}

int main() {
    int number = 0;
    int firstNumber = 0;
    int secondNumber = 0;

    std :: cout << "Enter the first number : ";
    std :: cin >> firstNumber;
    firstNumber = preDecrement(firstNumber);
    std :: cout << "--(first number) = " << firstNumber << std :: endl;

    std :: cout << "Enter the second number : ";
    std :: cin >> secondNumber;
    number = postDecrement(secondNumber);
    std :: cout << "(second number)-- = " << number << std :: endl;
    std :: cout << "second number == " << secondNumber << std :: endl;

    return 0;
}
