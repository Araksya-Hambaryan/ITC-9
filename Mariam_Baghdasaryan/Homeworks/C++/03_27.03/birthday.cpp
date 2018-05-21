#include <iostream>

bool isLeapYear(int year) {

    if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        return 1;
    }
    return 0; 
}

bool check(int year, std :: string date) {

    return (year > 0 && date[2] == '-' && 5 == date.length() && '-' == date[2]);
}

void inputYearAndDate(int& year, std :: string& date) {

    std :: cout << "Input year and date like this -> year day-month : ";
    std :: cin >> year >> date;
    while(!std :: cin || !check(year, date)) {
        std :: cin.clear();
        std :: cin.ignore();
        std :: cout << "Please input correct (year day-month): ";
        std :: cin >> year >> date;
    }
}

int maxDay(int day[], int year) {
    
    int maxDay = 0;
    if (1 == (day[1] * 10 + day[0]) % 2) {
        maxDay = 31;
    } else if (2 == day[1] * 10 + day[0]) {
        if (isLeapYear(year)) {
            maxDay = 29;
        } else {
            maxDay = 28;
        }
    } else if (8 == day[1] * 10 + day[0]) {
        maxDay = 31;
    } else {
        maxDay = 30;
    }

    return maxDay;
}

int main() {

    int year = 0;
    int size = 5;
    std :: string date = " ";

    inputYearAndDate(year, date);

    int day[2];
    for (int counter = 0; counter < 2; ++ counter) {
        day[counter] = date[counter] - 48;
    }

    int month[2];
    for (int counter = 3; counter < 5; ++ counter) {
        month[counter - 3] = date[counter] - 48;
    }

    if ((day[1] * 10 + day[0]) > 12) {
        std :: cout << "Months can't be bigger than 12." << std :: endl;
    } else if ((month[1] * 10 + month[0]) > maxDay(day, year)) {
        std :: cout << "The " << day[1] * 10 + day[0] << "-th month has " << maxDay(day, year) << " days." << std :: endl;
    } else if ((day[0] * 10 + day[1]) == (month[1] * 10 + month[0])) {
        std :: cout << "The guests will be in time." << std :: endl;
    } else if ((month[0] * 10 + month[1]) < (day[1] * 10 + day[0])) {
        std :: cout << "The guests will be late." << std :: endl;
    } else {
        std :: cout << "The guests will be early." << std :: endl;
    }

    return 0;
}
