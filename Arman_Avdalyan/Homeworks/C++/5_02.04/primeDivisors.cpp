#include <iostream>
#include <math.h>

bool isPrime(int num) {
    for(int i = 2; i <= sqrt(num); ++i){
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

int inputNumber() {
    int num = 0;
    std :: cout << "Input number to find prime divisors : ";
    std :: cin >> num;
    while(!std :: cin || num < 0){
        std :: cin.clear();
        std :: cin.ignore();
        std :: cout << "Please input only positive numbers: ";
        std :: cin >> num;
    }
    return num;
}

void printPrimeDivisors(int number) {
    for (int i = 2; i <= number; ++i) {
        if (0 == number % i && isPrime(i)) {
            std :: cout << i << " ";
        }
    }
    std :: cout << std :: endl;
}

int main() {
    int number = inputNumber();
    printPrimeDivisors(number);
    return 0;
}
