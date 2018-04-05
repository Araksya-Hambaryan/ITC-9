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

bool printPrimeDivisors(int number) {
    int isTrue = 0;
    for (int i = 2; i < number; ++i) {
        if (0 == number % i && isPrime(i)) {
            isTrue = 1;
            std :: cout << i << " ";
        }
    }
    std :: cout << std :: endl;
    return isTrue;
}

int main() {
    int number = inputNumber();
    if (!printPrimeDivisors(number)) {
        std :: cout << "The number hasn't got prime divisors.\n";
    }
    return 0;
}
