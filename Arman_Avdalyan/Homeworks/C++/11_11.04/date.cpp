#include <iostream>

struct Date {
    int day;
    int month;
    int year;
};

void getDate(int& day, int& month, int& year) {
    char tmp = ' ';
    std :: cout << "Input date like this 11.4.2018 : ";
    std :: cin >> day >> tmp >>  month >> tmp >> year;
    while (!std :: cin || day < 0 || day > 31 || month < 0 || month > 12 || year < 0) {
        std :: cin.clear();
        std :: cin.ignore();
        std :: cout << "Please input correct : ";
        std :: cin >> day >> tmp >>  month >> tmp >> year;
    }
}

int leapYears(Date date) {
    int years = date.year;
    if (date.month <= 2) {
        --years;
    }
    return years / 4 - years / 100 + years / 400;
}

bool check(Date d1, Date d2) {
    return d1.year > d2.year || (d1.year == d2.year && d1.month > d2.month) || (d1.year == d2.year && d1.month == d2.month && d1.day > d2.day);
}

int getDays(Date date) {
    int monthDays[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int days = date.year * 365 + date.day;
    for (int i = 0; i < date.month - 1; ++i) {
        days += monthDays[i];
    }
    days += leapYears(date);
    return days;
}

void printDifference (int days) {
    std:: cout << "year : " << days / 365 << std :: endl;
    std :: cout << "month : " << (days % 365) / 30 << std :: endl;
    std :: cout << "days : " << (days % 365) % 30 << std:: endl;
}

int main() {
    int day = 0;
    int month = 0;
    int year = 0;
    
    std :: cout << "Input first date : ";
    getDate(day, month, year);
    Date date1 = {day, month, year};
    std :: cout << "Input second date : ";
    getDate(day, month, year);
    Date date2 = {day, month, year};
    if (check(date1, date2)) {
        std :: cout << "Dates are not correct : ";
        return 0;
    }
    printDifference(getDays(date2) - getDays(date1));

    return 0;
}
