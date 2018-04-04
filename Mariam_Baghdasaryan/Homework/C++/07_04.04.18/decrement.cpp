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
    int number = 7;
    int firstNumber = 17;
    int secondNumber = 0;
    std :: cout << "number = " << number << std :: endl;
    number = preDecrement(number);
    std :: cout << "--number = " << number << std :: endl;
    std :: cout << "firstNumber = " << firstNumber << std :: endl;
    secondNumber = postDecrement(firstNumber);
    std :: cout << "firstNumber++ = " << secondNumber << std :: endl;
    std :: cout << "firstNumber == " << firstNumber << std :: endl;
    return 0;
}
