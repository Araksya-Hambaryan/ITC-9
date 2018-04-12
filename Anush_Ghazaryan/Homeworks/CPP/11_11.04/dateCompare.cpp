#include <iostream>

struct Date {
    int day;
    int month;
    int year;
};

bool check(int day,int month) {
    if(1 > month || 12 < month || 1 > day) {
        return false;
    }
    if((1 == month || 3 == month || 5 == month || 7 == month || 8 == month || 10 == month || 12 == month) && 31 < day) {
        return false;
    } else if(2 == month && 28 < day) {
        return false;
    } else if((4 == month || 6 == month || 9 == month || 11 == month) && 30 < day) {
        return false;
    } else {
        return true;
    }
}
int daysCount(Date firstDate, Date secondDate) {
    int daysOfMonths[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int daysCount = (secondDate.year - firstDate.year - 1) * 365 - firstDate.day + secondDate.day;
    for(int i = firstDate.month; i < 12; ++i) {
        daysCount += daysOfMonths[i];
    }
    for(int i = 0; i < secondDate.month; ++i) {
        daysCount += daysOfMonths[i];
    }
    return daysCount;
}
int main() {
    int year;
    int month;
    int day;
    std::cout << "Input the first date- DAY MONTH YEAR (ex. 12 01 2018) : ";
    std::cin >> day >> month  >> year;
    std::cout << "\n";
    Date firstDate = { day, month, year };
    if(check(day, month) ) {
	std::cout << "Input the second date- DAY MONTH YEAR (ex. 20 01 2018) : ";
	std::cin >> day >> month >> year;
	std::cout << "\n";
	Date secondDate = {day, month, year};
	if(check(day, month)) {
            if(firstDate.year > secondDate.year || (firstDate.year == secondDate.year && firstDate.month > secondDate.month) ||
              (firstDate.year == secondDate.year && firstDate.month == secondDate.month && firstDate.day > secondDate.day)) {
              std::cout << "The first date is leter than the second\n";
            } else {
               std::cout << "The count of the days is :  " << daysCount(firstDate, secondDate) << std::endl;
            }
        } else {
            std::cout << "Wrong input\n";
        } 
     } else {
        std::cout << "Wrong input\n";
     }
     return 0;
}
    
