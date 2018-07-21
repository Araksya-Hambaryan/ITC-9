#include <iostream>
#include <math.h>

bool prime(int num) {
    for( int i = 2; i <= sqrt(num); i++) {
        if( num % i == 0) {
            return false;
        }  
    }
    return true;
}

int main() {
	int num;
	std::cout << "Input a number:  ";
	std::cin >> num;
	std::cout << "Prime divisors : " << std::endl;
	for( int i = 1; i <= num; ++i ) {
		if(num % i == 0 && prime(i)) {
			std::cout << " " << i << std::endl;
		}
	}  
	return 0;
}
