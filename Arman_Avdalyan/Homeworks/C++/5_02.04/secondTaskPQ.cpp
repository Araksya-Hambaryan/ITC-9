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

void inputNumbers(int& num1, int& num2) {
    std :: cout << "Input number to find prime divisors : ";
    std :: cin >> num1 >> num2;
    while(!std :: cin || num1 < 0 || num2 < 0){
        std :: cin.clear();
        std :: cin.ignore();
        std :: cout << "Please input only positive numbers: ";
        std :: cin >> num1 >> num2;
    }
}

bool printNotCommonPrimeDivisors(int num1, int num2) {
    int temp = 0;
    int max = num1 > num2 ? num1 : num2;
    int min = num1 < num2 ? num1 : num2;
    bool noOne = 1;
    for (int i = 2; i <= max; ++i) {
        if (0 == min % i && isPrime(i)) {
            temp = i;
        }
        if (0 == max % i && isPrime(i) && temp != i && 0 != temp) {
            noOne = 0;
            std :: cout << i << " ";
        }
    }
    std :: cout << std :: endl;
    return noOne;
}

int main() {
    int num1 = 0;
    int num2 = 0;
    inputNumbers(num1, num2);
    if (printNotCommonPrimeDivisors(num1, num2)) {
        std :: cout << "There isn't any not common prime divisor : " << std :: endl;
    }
    return 0;
}
