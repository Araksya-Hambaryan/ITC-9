#include <iostream>


int fib(int num, int x, int y) {
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
    if(1 == num) {
        std::cout << "Fibonacci value is - 1" << std::endl;
    } else {
    std::cout << "Fibonacci value is - " << fib(num, 0, 1) << std::endl;
    }
    return 0;
} 
