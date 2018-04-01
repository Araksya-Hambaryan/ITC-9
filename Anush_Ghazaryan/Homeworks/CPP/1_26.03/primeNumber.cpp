#include<iostream>
#include<math.h>
int main () {


	int num;
	char ch;  

	bool primeNum = true;

	std::cout << "Enter a positive Integer : " ;

	std::cin >> num ;
	
	if ( num > 0 ) {


	    for ( int  i = 2; i <= sqrt ( num ) ; ++i ) {


		if ( num % i == 0 ) {

		    primeNum = false;

		    break;
		}
	}
		
  	}
	    if ( primeNum ) {

		std::cout << "It's  a prime number " << std::endl;

            } else {

		std::cout << "It's not a prime number " << std::endl;

		}

	return 0;

	}

