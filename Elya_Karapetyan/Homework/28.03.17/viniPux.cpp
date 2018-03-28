#include <iostream>

bool longYear(int year) {
    if (0 == year % 400) {
        return true;
    }
    if (0 == year % 100) {
        return false;
    }
    return (0 == year % 4);
}

bool checkInputData(int day,int month, int year)
{
    if (1 > month || 12 < month || 1 > day) {
        std::cout << month << "  " << day << std::endl;
        std::cout << "Invalid Date!" << std::endl;
        return false;
    }
    if((1 == month || 3 == month || 5 == month || 7 == month || 8 == month || 10 == month || 12 == month) && 31 < day) {
        std::cout << month << "  " << day << std::endl;
        std::cout << "Invalid Date!" << std::endl;
        return false;
    }
    else if (2 == month && 28 < day && false == longYear(year)) {
        std::cout << month << "  " << day << std::endl;
        std::cout << "Invalid Date!" << std::endl;
        return false;
    }
    else if (2 == month && 29 < day && true == longYear(year)) {
        std::cout << month << "  " << day << std::endl;
        std::cout << "Invalid Date!" << std::endl;
        return false;
    } 
    else if ((4 == month || 6 == month || 9 == month || 11 == month) && 30 < day) {
        std::cout << month << "  " << day << std::endl;
        std::cout << "Invalid Date!" << std::endl;
        return false;
    }
    else {
        return true;
    }
}

bool checkMonth(int month) {
    return (month == 1 || month == 10 || month == 11);
}

int reverse(int number) {
    if (number < 10) {
        number *= 10;
    } else {
        number = (number % 10) * 10 +  number/10;
    }
    return number;
}

int main() {
    int year = 0;
    int month = 0;
    int day = 0;
    char c;
    
    std::cout << "Enter birthday (yy-mm-dd): ";
    std::cin >> year >> c >> month >> c >> day;
    if ('-' != c) {
        std::cout << "Invalid format!" << std::endl;
        return 0;
    }
    
    if (!checkInputData(day, month, year)) {
        return 0;
    }
    day = reverse(day);
    month = reverse(month);
    if (checkMonth(month)) {
        std::cout << "Will come in " << day << "-" << month << "-" 
                  << year << std::endl;
    } else {
        std::cout << "Don't come!" << std::endl;
    }
   
    return 0;
}
