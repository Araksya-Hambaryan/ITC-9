#include <iostream>
#include <cmath>

bool isPrime(int num) {
    for (int counter = 2; counter < sqrt(num); ++counter) {
        if (0 == num % counter) {
            return false;
        }
    }
    return true;
}

int main() {

    int number = 0;

    std :: cout << "Enter number : ";
    std :: cin >> number;
    while (!std :: cin || (number < 2)) {
        std :: cin.clear();
        std :: cin.ignore();
        std :: cout << "Please input only positive integer and bigger than 1 : ";
        std :: cin >> number;
    }

    for(int counter = 2; counter <= number; ++counter) {
        if(0 == number % counter && isPrime(counter)) {
	    std :: cout << counter << std :: endl;
	}
    }

    return 0;
}
