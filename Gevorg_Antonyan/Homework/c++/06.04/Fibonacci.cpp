#include <iostream>

int a = 0;
int fib(int num, int x, int y) {
    ++a;
    int c = x + y;
    x = y;
    y = c;
    --num;
    if(num == 1) {
        return c;
    } else {
        return fib(num, x, y);
    }       
}

int main() {
    int num = 0;
    std::cout << "enter the Fibonacci number" << std::endl;
    std::cin >> num ;
    if(0 == num || 1 == num) {
        std::cout << "Fibonacci value is - 1" << std::endl;
    } else {
    ++num;
    std::cout << "Fibonacci value is - " << fib(num, 0, 1) << std::endl;
    }
    std::cout << "funkcion Fibonacci is callid " << a << "pices" << std::endl;
    return 0;
} 
