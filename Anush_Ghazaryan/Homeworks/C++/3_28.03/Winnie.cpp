#include<iostream>

int main () {

	int year = 0;
	char space;
	int month = 0;
	char dash;
	int day = 0;
	
	std::cout << "Input Winnie's Birthday (ex. 2018 09-01)  : ";
	std::cin >> year >> space >> day >> dash >> month;
	if  ( year !=  2018 ) {
		std::cout << " You should enter 2018 " << std::endl;
		std::cin >> year >> space >> day >> dash >> month;
	}
	if  ( day < 0 || day > 31 ) {
		std::cout << " You should enter from 1 to 31 " << std::endl;
		std::cin >> year >> space >> day >> dash >> month;
	}
	if  ( month < 1 || month > 12 ) {
		std::cout << " You should enter from 1 to 12 " << std::endl;
	}

	int rMonth = day % 10 * 10 + ( day - day % 10 ) / 10;
	int rDay = month % 10 * 10 + ( month - month % 10 ) /10;

	if ( rMonth > 12 ) {
		std::cout << " The Aliens will not come on Winnie's Birthday " << std::endl;
	} else if ( rMonth > month || ( rMonth == month && rDay > day ) ) {
		std::cout << " The Aliens will be late " << std::endl;
	} else if ( rMonth == month && rDay == day ) {
		std::cout << " The Aliens will be in time " << std::endl;
	} else {
		std::cout << " The Aliens will come early " << std::endl;
	}
return 0;
}
