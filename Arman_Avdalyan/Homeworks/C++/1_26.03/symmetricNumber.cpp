#include <iostream>

int reversedNumber(int number) {
    int digit = 0;
    int reversedNumber = 0;
    while(0 != number){
        digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }
    return reversedNumber;
}

int inputNumber() {
    int num = 0;
    std :: cout << "Input number to check is it symmetric: ";
    std :: cin >> num;
    while(!std :: cin) {
        std :: cin.clear();
        std :: cin.ignore();
        std :: cout << "Please input only number : ";
        std :: cin >> num;
    }
    return num;
}

int main() {
    int number = inputNumber();
    if (number == reversedNumber(number)) {
        std :: cout << "The number is symmetric." << std :: endl;
    } else {
        std :: cout << "The number is not symmetric." << std :: endl;
    }
    return 0;
}

