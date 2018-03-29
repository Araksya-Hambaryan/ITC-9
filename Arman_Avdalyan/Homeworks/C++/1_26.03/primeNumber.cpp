#include <iostream>
#include <math.h>

bool isPrime(unsigned num) {
    for(int i = 2; i <= sqrt(num); ++i){
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

unsigned inputNumber() {
    unsigned num = 0;
    std :: cout << "Input number to check is it prime : ";
    std :: cin >> num;
    while(!std :: cin){
        std :: cin.clear();
        std :: cin.ignore();
        std :: cout << "Please input only positive numbers: ";
        std :: cin >> num;
    }
    return num;
}

int main() {
    unsigned number = inputNumber();
    if(isPrime(number)) {
        std :: cout << std :: endl << number << " is a prime number. \n";
    } else {
        std :: cout << std :: endl << number << " is not a prime number. \n";
    }
    return 0;
}
