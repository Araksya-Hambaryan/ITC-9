#include <iostream>
#include <cmath>

bool checkPrime(int num) {
    for( int i = 2; i <= sqrt(num); i++) {
        if(num%i == 0) {
            return false;
        }  
    }
    return true;
}

int main() {
	int number;
	std::cout << "Please, enter a number:  ";
	std::cin >> number;
	for( int i = 1; i <= number; i++) {
		if(number%i == 0 && checkPrime(i)) {
			std::cout << i << std::endl;
		}
	}  
	return 0;
}


