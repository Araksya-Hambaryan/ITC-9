#include <iostream>

struct Date {
public: 
    Date();
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    int getDay();
    int getMonth();
    int getYear();

private:
    int m_day;
    int m_month;
    int m_year;
};

Date::Date() : m_day(0)
             , m_month(0)
             , m_year(0) {};

void Date::setDay(int day) {
     m_day = day;
}

void Date::setMonth(int month) {
    m_month = month;
}

void Date::setYear(int year) {
    m_year = year;
}

int Date::getDay() {
    return m_day;
}

int Date::getMonth() {
    return m_month;
}

int Date::getYear() {
    return m_year;
}

void findNumberOfDayDateYear(Date firstDate, Date secondDate) {
    int monthAndDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days = 0;

    if (firstDate.getYear() > secondDate.getYear()) {
        std::cout << "\nYear of first date greater then second year!" << std::endl;
        return;
    }
    if (firstDate.getYear() == secondDate.getYear()) {
        if (firstDate.getMonth() == secondDate.getMonth()) {
            days = secondDate.getDay() - firstDate.getDay();
        } else {
            for (int i = firstDate.getMonth(); i < secondDate.getMonth() - 1; ++i) {
                days += monthAndDays[i];
            }
            days += monthAndDays[firstDate.getMonth() - 1] - firstDate.getDay() + secondDate.getDay();
        }
    } else {
        for (int i = 0; i < secondDate.getMonth() - 1; ++i) {
            days += monthAndDays[i];
        }
        for (int i = firstDate.getMonth(); i < 12; ++i) {
            days += monthAndDays[i];
        }
        days += (secondDate.getYear() - firstDate.getYear() - 1) * 365 + monthAndDays[firstDate.getMonth() - 1] - firstDate.getDay() + secondDate.getDay();
    }

    std::cout << "Days between the two date: " << days << std::endl;
}


bool isDate(int day, int month, int year) {
    if (1 > month || 12 < month ||
        (((1 == month || 3 == month || 5 == month || 7 == month || 
           8 == month || 10 == month || 12 == month) && 31 < day)) ||
          (2 == month  && 28 < day ) ||
          (4 == month || 6 == month || 9 == month || 11 == month) && 30 < day) {
        return false;
           
    }             
    return true;
}

void inputedDate(int& day, int& month, int& year) {
    std::cout << "Enter date: dd mm yy  -> ";
    std::cin >> day >> month >> year;
    while (std::cin.fail() || !isDate(day, month, year)) {
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << "Please enter the correct date: ";
        std::cin >> day >> month >> year;
    }
}

void initDate(Date& date) {
    int day = 0;
    int month = 0;
    int year = 0;
    inputedDate(day, month, year);
    date.setDay(day);
    date.setMonth(month);
    date.setYear(year);
}

int main() {
    Date firstDate;
    initDate(firstDate);
    Date secondDate;
    initDate(secondDate);
   /* int secondDay = 0;
    int secondMonth = 0;
    int secondYear = 0;
    inputedDate(secondDay, secondMonth, secondYear);
    secondDate.setDay(secondDay);
    secondDate.setMonth(secondMonth);
    secondDate.setYear(secondYear);
  */
    findNumberOfDayDateYear(firstDate, secondDate);
    return 0;
}
