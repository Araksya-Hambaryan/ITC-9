#include <iostream>

//I supposed, that fib(0) = 0; fib(1) = 1
int fib(int num, int& count) {
    ++count;
    if( 0 == num) {
        return 0; 
    }
    if( 1 == num) {
        return 1;
    }
    return fib(num-1, count) + fib(num-2, count); 
}

int main() {
    int number;
    int count = 0;
    std::cout << "Enter number!" << std::endl;
    std::cin >> number; 
    std::cout << "The " << number;
    std::cout << "-th mamber of Fibonacci sequence is:\t";
    std::cout << fib(number, count) << std::endl;
    std::cout << "Count:\t" << count << std::endl;
    return 0;
}
