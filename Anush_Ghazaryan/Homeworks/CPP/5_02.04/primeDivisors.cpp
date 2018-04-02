#include<iostream>
#include<math.h>

bool prime ( int number ) {

	for ( int i = 2; i <= sqrt ( number ) ; ++i ) {

		if ( number % i == 0 ) {

			return false; 
		} 
	}

	return true; 

}

void divisors ( int number ) {

	for ( int i = 2; i <= number; ++i ) {

		if ( 0 == number % i && prime (i) ) {

			std::cout << " " << i;
		}

	}

	std::cout << "\n";

}
 
int main () {

	int number;
	std::cout << " Input a number : ";
	std::cin >> number; 
	std::cout << "Prime divisor : ";
	divisors ( number ) ;

return 0;

} 
