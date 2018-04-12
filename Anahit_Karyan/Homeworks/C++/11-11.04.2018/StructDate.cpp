#include <iostream>
#include <cmath>

struct Date {
	int year;
	int month;
	int day;
	int sum;
};

int main() {
	Date date1;
	Date date2;
	date1.day = 12;
	date1.month = 6;
	date1.year = 2019;
	date1.sum = date1.day + date1.month * 30 + date1.year * 365;
	std::cout << "Arajin amsativ" << std::endl;
	std :: cout << date1.day << '.' <<  date1.month << '.' << date1.year << std :: endl;  
	date2.day = 5;
	date2.month = 2;
	date2.year = 2018;
	date2.sum = date2.day + date2.month * 30 + date2.year * 365;
	std::cout << "Erkrord amsativ" << std::endl;
	std :: cout << date2.day << '.' <<  date2.month << '.' << date2.year << std :: endl;  

	int tarb = std::abs(date1.sum - date2.sum);
	int tarbYear = tarb / 365;
	int tarbMonth = (tarb % 365) / 30;
	int tarbDay = (tarb % 365) % 30;  
	std::cout << "Tarberutyun" << std::endl;
	std :: cout << tarbDay << '.' << tarbMonth << '.' << tarbYear << std :: endl;    
	return 0;
}

