#include <iostream>
#include <cmath>
#include <stack>

bool checkPrime(int num) {
    for(int i = 2; i <= sqrt(num); i++) {
        if(num%i == 0) {
            return false;
        }  
    }
    return true;
}

int main() {
	int number;
	int pair;
	std::cout << "Please, enter the first number:  ";
	std::cin >> number; 
	std::cout << "Please, enter the second number:  ";
	std::cin >> pair; 
	for( int i = 1; i <= number; i++) {
		if(number%i == 0 && checkPrime(i)) {
			if(pair%i != 0) { 
			std::cout << "Not common prime divisor: " << i << std::endl;
			}
		}
	}
	return 0;
}



