#include<iostream>

int palindromNum ( int number ) {

	
	int digit = 0;

	int reversedNum = 0;

	while ( 0 != number ) {
	
		digit = number % 10;

		reversedNum = ( reversedNum  * 10 ) + digit;

		number = number / 10;

	   }

	return reversedNum;
}



int main () {

	int number;
	std::cout << "Input a number : " ;
	std::cin >> number;
	
	if ( number > 0 ) {

		if ( number == palindromNum ( number ) ) {
		    std::cout << "The number is a  Palindrome " << std::endl;
		} else {
	

		    std::cout << "The number is not a Palindrome " << std::endl;

		}

	}
	
	
return 0;
}
