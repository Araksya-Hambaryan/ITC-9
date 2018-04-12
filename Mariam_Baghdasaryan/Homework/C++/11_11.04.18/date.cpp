#include <iostream>

struct Date {
        int year;
        int month;
        int day;
};

bool isLeapYear(int year) {
    if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        return true;
    }
    return false;
}

int maxDay(int day, int month, int year) {
    int maxDay = 0;
    if (1 == month % 2) {
        maxDay = 31;
    } else if (2 == month) {
        if (isLeapYear(year)) {
            maxDay = 29;
        } else {
            maxDay = 28;
        }
    } else if (8 == month) {
        maxDay = 31;
    } else {
        maxDay = 30;
    }
    return maxDay;
}

bool isDate(int day, int month, int year) {
    if (1 > month || 12 < month || 1 > year || day > maxDay(day, month, year)) {
        return false;     
    }             
    return true;
}

void inputDate(int& day, int& month, int& year) {
    std :: cout << "Input day : ";
    std :: cin >> day;
    std :: cout << "Input month : ";
    std :: cin >> month;
    std :: cout << "Input year : ";
    std :: cin >> year;
    while (!std :: cin || !isDate(day, month, year)) {
        std :: cin.clear();
        std :: cin.ignore();
        std :: cout << "Please input correct : ";
        std :: cin >> day >> month >> year;
    }
    std :: cout << std :: endl;
}

int leapYears(Date date) {
    int years = date.year;
    if (date.month <= 2) {
        --years;
    }
    return years / 4 - years / 100 + years / 400;
}

bool check(Date date1, Date date2) {
    return date1.year > date2.year || (date1.year == date2.year && date1.month > date2.month) || 
          (date1.year == date2.year && date1.month == date2.month && date1.day > date2.day);
}

int getDays(Date date) {
    int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days = date.year * 365 + date.day;
    for (int i = 0; i < date.month - 1; ++i) {
        days += monthDays[i];
    }
    days += leapYears(date);
    return days;
}

void difference(int days) {
    std :: cout << "\nyear : " << days / 365 << std :: endl;
    std :: cout << "month : " << (days % 365) / 30 << std :: endl;
    std :: cout << "days : " << (days % 365) % 30 << std:: endl;
}

int main() {
    int day = 0;
    int month = 0;
    int year = 0;

    std :: cout << "Input first date : \n";
    inputDate(day, month, year);
    Date firstDate = {day, month, year};

    std :: cout << "Input second date : \n";
    inputDate(day, month, year);
    Date secondDate = {day, month, year};
    
    if (check(firstDate, secondDate)) {
        std :: cout << "\nYear of first date greater then second year!";
        return 0;
    }
    difference(getDays(secondDate) - getDays(firstDate));

    return 0;
}
