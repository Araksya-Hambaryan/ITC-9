#include <iostream>
#include <math.h>

bool prime( int num ) {
    for( int i = 2; i <= sqrt(num); ++i ) {
        if( 0 == num % i ) {
            return false;
        }
    }
    return true;
}

bool primeDivisors( int num1, int num2 ) {
    int n = 0;
    bool flag = true;
    for (int i = 2; i <= num1; ++i) {
        if (0 == num2 % i && prime( i ) ) {
            n  = i;
        }
        if ( n != i &&  0 == num1 % i && prime( i )) {
            flag = false;
            std :: cout << "\n " <<  i;
        }
    }
    std :: cout << "\n";
    return flag;
}

int main() {
	int num1 = 0;
	int num2 = 0;
	std::cout << "Input first number ";
	std::cin >> num1;
	std::cout << "Input second number ";
	std::cin >> num2;
	for( int i = 0; i < 50; ++i ) {
		std::cout << "*";
	}	
	if( 0 < num1 && 0 < num2 ) {
		if (primeDivisors(num1, num2)) {
        		std :: cout << "\nDon't have common simple divisors " << std :: endl;
		 }
	} else {
		std::cout << "\nInput only positive numbers " << std::endl;
	} 
    return 0;
}


