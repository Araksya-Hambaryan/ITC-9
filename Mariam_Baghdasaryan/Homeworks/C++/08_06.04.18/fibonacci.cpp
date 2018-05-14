#include <iostream>

int fib(int number, int& count, int firstNum = 0, int secondNum = 1) { 
    count++;
    if (0 == number) {
        return secondNum;
    }
    fib(number - 1, count, secondNum, firstNum + secondNum);
}

int input() {
    int number;
    std :: cout << "Input number : ";
    std :: cin >> number;
    while (!std :: cin || number < 0) {
        std :: cin.clear();
        std :: cin.ignore();
        std :: cout << "Please input correct : ";
        std :: cin >> number;
    }
    return number;
}

int main() 
{
    int number = input();
    int count = 0;
    std :: cout << "Fibonacci number : " << fib(number, count) << std :: endl;
    std :: cout << "Count : " << count << std :: endl;

    return 0;
} 

