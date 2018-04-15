#include <iostream>

struct Date {
public:
    Date();
    Date(int, int, int); 
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
             , m_year(0){};

Date::Date(int day, int month, int year) : m_day(day)
                                         , m_month(month)
                                         , m_year(year) {};

int Date::getMonth() {
    return m_month;    
}

int Date::getDay() {
    return m_day;    
}

int Date::getYear() {
    return m_year;    
}

void validNumber(int& number) {
    while (std::cin.fail()) {
        std::cout << "Invalid Value: Try again!" << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << "Please enter the intager number: ";
        std::cin>> number;
    }
}


int main() {
    int dd1 = 0;
    int mm1 = 0;
    int yy1 = 0;
    int dd2 = 0;
    int mm2 = 0;
    int yy2 = 0;
    std::cout << "enter 1:Day, Month, Year" << std::endl;
    std::cin >> dd1;
    validNumber(dd1);
    while (0 > dd1) {
        std::cout << "enter correct number" << std::endl;
        std::cin >> dd1;
        validNumber(dd1);
    }
    std::cin >> mm1;
    validNumber(mm1);
    while (0 > mm1) {
        std::cout << "enter correct number" << std::endl;
        std::cin >> mm1;
        validNumber(mm1);
    }
    std::cin >> yy1;
    validNumber(yy1);
    while (0 > yy1) {
        std::cout << "enter correct number" << std::endl;
        std::cin >> yy1;
        validNumber(yy1);
    }
    std::cout << "enter 2:Day, Month, Year" << std::endl;
    std::cin >> dd2;
    validNumber(dd2);
    while (0 > dd2) {
        std::cout << "enter correct number" << std::endl;
        std::cin >> dd2;
        validNumber(dd2);
    }
    std::cin >> mm2;
    validNumber(mm2);
    while (0 > mm2) {
        std::cout << "enter correct number" << std::endl;
        std::cin >> mm2;
        validNumber(mm2);
    }
    std::cin >> yy2;
    validNumber(yy2);
    while (0 > yy2) {
        std::cout << "enter correct number" << std::endl;
        std::cin >> yy2;
        validNumber(yy2);
    }
    Date day1(dd1, mm1, yy1); 
    Date day2(dd2, mm2, yy2); 
    int leftDay = day2.getDay() - day1.getDay();
    int leftMonth = day2.getMonth() - day1.getMonth();
    int leftYear = day2.getYear() - day1.getYear();
    if(0 > leftDay) {
        leftDay = leftDay + 31;
        --leftMonth;
    }
    if(0 > leftMonth) {
        leftMonth = leftMonth + 12;
        --leftYear;
    }
    if(0 > leftYear) {
        std::cout << "error date" << std::endl;    
    } else {    
        std::cout << "Left " << leftDay << " day, " << leftMonth << " month, " << leftYear << " year:" << std::endl;
    }
    return 0;    
}
