#include <iostream>

int fib(int index, int present = 1, int previous = 0){
    if(0 == index) {
        return previous;
    }
    if(1 == index) {
        return present;
    }
    return fib(index - 1, present + previous, present);
}

int main() {
    int index = 0;
    std::cout << "Enter index of fibonacci number (0 - inf): ";
    std::cin >> index;
    if(index < 0) {
        std::cout << "ERROR: Negative input." << std::endl;
    }
    std::cout << "Fib number is: " << fib(index) << std::endl;
}
