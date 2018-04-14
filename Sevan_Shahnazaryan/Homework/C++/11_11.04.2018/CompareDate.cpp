#include <iostream>

struct Date {
    int day;
    int month;
    int year;
};

bool check(Date date) {
    
    if((date.day <= 0 || date.day > 31) || 
      (date.month < 0 || date.month > 12) || (date.year < 0)) {
        return false;
    }
    if((date.month < 0 || date.month > 12) || ((1 == date.month || 
      3 == date.month || 5 == date.month || 7 == date.month ||
      8 == date.month || 10 == date.month || 12 == date.month) && date.day > 31)) {
        return false;
    }
    if(2 == date.month && ((0 == date.year % 4 && date.day > 29)
      || (0 != date.year % 4 && date.day > 28))) {
        return false;
    }
    if((4 == date.month || 6 == date.month || 9 == date.month || 11 == date.month) && date.day > 30) {
        return false;
    }
    return true;
}

/* I could do some tricks to get the correct answer of the problem
But I prefer to make the real imitation of time, because it's more interesting
And it's working flawless
To check if it's working correct, you can visit following link
https://www.timeanddate.com/date/duration.html
(My program counts including the end day )*/

int dayCount(Date date1, Date date2) {
    int days = 0;
    int dayLimit = 0;
    int monthLimit = 0;
    int i = date1.year;
    int j = date1.month;
    int k = date1.day;
    for(i; i <= date2.year; i++) {
        if(i == date2.year) {
            monthLimit = date2.month;
        } else {
            monthLimit = 12;
        }
        for(j; j <= monthLimit; j++) {
            if(i == date2.year && j == date2.month) {
                dayLimit = date2.day;
            }
            else if(2 == j) {
                if(0 ==  i % 4) {
                    dayLimit = 29;
                } else {
                    dayLimit = 28;
                }
            }
            else if(1 == j || 3 == j || 5 == j || 7 == j || 8 == j || 10 == j || 12 == j) {
                dayLimit = 31;
            } 
            else if(4 == j || 6 ==j || 9 ==j || 11 == j) {
                dayLimit = 30;
            }
            for(k; k <= dayLimit; k++) {
                ++days;
            }
            k = 1;
        }
        j = 1;
    }
    return days;
}

int main() {
    Date date1;
    Date date2;
    std::cout << "Input Dates like this \" <DD> <MM> <YY>\"" << std::endl;
    std::cout << "Input Date 1: ";
    std::cin >> date1.day >> date1.month >> date1.year;
    std::cout << "Input Date 2: ";
    std::cin >> date2.day >> date2.month >> date2.year;
    if(false == check(date1) || false == check(date2)) {
        std::cout << "WRONG INPUT" << std::endl;
    } else {
        std::cout << "Between those dates are " << dayCount(date1, date2) << " days" << "(Including the end day)" << std::endl;
    }
    return 0; 
}
