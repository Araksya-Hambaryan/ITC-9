#include <iostream>

int main() {
	char slash;
	char probel;
	int year;
	int day;
	int month;

	std::cout << "Enter the date 'yyyy dd/mm'" << std::endl;
	std::cin >> year >> probel >> day >> slash >> month;
	while (year < 0 || year > 2018  ) {
		std::cout << "The year can be a number from 0 to 2018" << std::endl;
		std::cin >> year >> probel >> day >> slash >> month;
	}
	while (day < 0 || day > 31 ) {
		std::cout << "The day can be a number from 1 to 31";		
		std::cin >> year >> probel >> day >> slash >> month;
	}
	while (month < 1 || month > 12) {
		std::cout << "The month can be a number from 1 to 12";
		std::cin >> year >> probel >> day >> slash >> month;
	}

	int reversMonth = day%10 * 10 + (day - day%10) / 10;
	int reversDay = month%10 * + (month - month%10) / 10;

	if(reversMonth > 12 ) {
		std::cout << "The aliens will not visit Winnie" << std::endl; 
	}

	return 0;
}
