#include <iostream>

struct Date {
	int month;
	int day;
	int year;
};

int main() {

	Date date1 = {1, 2, 2000};
	Date date2 = {4, 5, 2001};
	int monthDays[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int days = 0;
	if(date1.year == date2.year) {
		if(date1.month == date2.month) {
			days = date2.day - date1.day;
		} else {
			for(int i = date1.month; i < date2.month-1;i++) {
				days += monthDays[i];
			}
			days += monthDays[date1.month-1] - date1.day + date2.day;
		}
	} else {
		for(int i = 0; i < date2.month-1; i++) {
			days += monthDays[i];
		}
		for(int i = date1.month; i < 12; i++) {
			days += monthDays[i];
		}
		if(date2.year - date1.year >= 0) {
			days += (date2.year - date1.year - 1)*365 + monthDays[date1.month-1] - date1.day + date2.day;
		}
	}
	std:: cout << days << std::endl;
	std:: cout << "year::" << days / 365 << std :: endl;
	std :: cout << "month::" << (days % 365) / 30 << std :: endl;
	std :: cout << "days::" <<  (days % 365) % 30 << std:: endl;
	return 0;
}
