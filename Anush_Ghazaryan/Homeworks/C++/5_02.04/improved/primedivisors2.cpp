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


    }
 
    int main () {

	int number;
	std::cout << " Input a number : ";
	std::cin >> number;
	if ( number > 0 ) { 
		std::cout << " Prime divisors : ";
		divisors ( number ) ;
		std::cout <<  "\n";
	} else {
		std::cout << " The number must be greater than 0 " << std::endl;

	}

    return 0;

    } 
