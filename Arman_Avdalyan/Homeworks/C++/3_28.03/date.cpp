#include <iostream>
#include <sstream>

int getRev(int num) {
    return num % 10 * 10 + num / 10 % 10;
}

bool isLeapYear(int year) {
    if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        return 1;
    }
    return 0; 
}

int isCorrectDayAndMonth(int year, int day, int month) {
    int size = 6;
    int dayVariants[] = {10,20,30, 01,11,21};
    int feb = isLeapYear(year) ? 29: 28;
    int monthDays[] = {31,feb,31,30,31,30,31,31,30,31,30,31};
    int dayCount = 0;
    if (day > monthDays[month - 1]) {
        std :: cout << "Please input correct day. The " << month << " month has " << monthDays[month - 1] << " days";
        return 0;
    }
    for (int i = 0; i < size; ++i) {
        if(day == dayVariants[i]) {
            ++dayCount;
        }
    }
    if (0 >= month || 12 < month) {
        std :: cout << "Months can't be small than 0 or bigger than 12." << std :: endl;
        return 0;
    }
    //if inputed day is not from dayVariants array
    if (0 == dayCount) {
        std :: cout << "We cant reverse that number because the month can't be bigger than 12. " << std :: endl;
        return 0;
    }
    return 1;
}

bool check(int year, std :: string date) {
    return year > 0 && date[2] == '-' && 5 == date.length() && '-' == date[2];
}

//this function inputs data
void inputDateAndYear(int& year, std :: string& date) {
    std :: cout << "Input year and date like this -> year day-month : ";
    std :: cin >> year >> date;
    while(!std :: cin || !check(year, date)) {
        std :: cin.clear();
        std :: cin.ignore();
        std :: cout << "Please input correct (year day-month): ";
        std :: cin >> year >> date;
    }
}

//check time
int inTime() {
    int year = 0;
    int size = 5;
    std :: string date = " ";
    int day = 0;
    int month = 0;
    std :: string arr[2];
    inputDateAndYear(year, date);
    std :: stringstream geek(date.substr(0, size/2));
    geek >> day;
    std :: stringstream geek1(date.substr(size / 2 + 1, size - 1));
    geek1 >> month;
    if (!isCorrectDayAndMonth(year, day, month)) {
        return -1;
    }
    int revDay = getRev(month);
    int revMonth = getRev(day);
    if (0 == revMonth / 10) {
        std :: cout << year << " " << revDay << "-0" << revMonth << "  ";
    } else if(0 == revDay / 10) {
        std :: cout << year << " 0" << revDay << "-" << revMonth << "  ";
    } else {
        std :: cout << year << " 0" << revDay << "-" << revMonth << "  ";
    }
    if (day == revDay && month == revMonth) {
        //in time
        return 1;
    }
    if (month > revMonth || (month == revMonth &&  day > revDay)) {
        //will be early
        return 2;
    }
    if (month < revMonth || (month == revMonth &&  day < revDay)) {
        //will be late
        return 0;
    }
}

void start() {
    bool flag = 0;
    switch(inTime()) {
        case 0:
            std :: cout << "The guests will be late. " << std :: endl;
            break;
        case 1:
            std :: cout << "The guests will be in time. " << std :: endl;
            break;
        case 2:
            std :: cout << "The guests will be early. " << std :: endl;
            break;
        case -1:
            std :: cout << "Try again. " << std :: endl;
            start();
            break;
    }
}

int main() {
    start(); 
    return 0;
}
