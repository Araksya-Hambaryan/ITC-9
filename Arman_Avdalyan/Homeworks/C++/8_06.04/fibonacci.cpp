#include <iostream>

int fib(int number, int& count, int first = 0, int second = 1) {
    count++;
    if (0 == number) {
        return second;
    }
    fib(number - 1, count, second, first + second);
}

int input() {
    int num = 0;
    std :: cout << "Input number : ";
    std :: cin >> num;
    while (!std :: cin || num < 0) {
        std :: cin.clear();
        std :: cin.ignore();
        std :: cout << "Please input correct : ";
        std :: cin >> num;
    }
    return num;
}

int main() {
    int number = input();
    int count = 0;
    std :: cout << "Fibonacci number = " << fib(number, count) << ".\n";
    std :: cout << "Count = " << count << std :: endl;
    return 0;
}
