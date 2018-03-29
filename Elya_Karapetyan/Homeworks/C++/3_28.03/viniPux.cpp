#include <iostream>
#include <string>

bool longYear(int year) {
    if (0 == year % 400) {
        return true;
    }
    if (0 == year % 100) {
        return false;
    }
    return (0 == year % 4);
}

bool checkInputDate(int day,int month, int year)
{
    if (1 > month || 12 < month || 1 > day ||
        (((1 == month || 3 == month || 5 == month || 7 == month || 
         8 == month || 10 == month || 12 == month) && 31 < day)) ||
         (2 == month && 28 < day && false == longYear(year)) ||
         (2 == month && 29 < day && true == longYear(year)) ||
         (4 == month || 6 == month || 9 == month || 11 == month) && 30 < day) {
        
        std::cout << "Invalid Date!" << std::endl;
        return false;
    
    } else {
        return true;
    }
}

bool checkMonth(int month) {
    return (1 == month || 10 == month || 11 == month);
}

bool checkDay(int day) {
    return (4 >= day || 9 <= day);
}

int reverse(int number) {
    if (number < 10) {
        number *= 10;
    } else {
        number = (number % 10) * 10 +  number/10;
    }
    return number;
}

void getMonthAndDay(std::string& bDay, int& month, int& day) {
    std::string strMonth;
    std::string strDay;
    int length = bDay.length();
    for (int i = 0; i < length; ++i) {
        if (i >= 0 && i < 2) {
            strMonth += bDay[i]; 
        }
        if (i > 2 && i < 5) {
            strDay += bDay[i];
        }
    }
    month = stoi(strMonth);
    day = stoi(strDay);
}

void whenCome(int month, int day, int year) {
    int newDay = reverse(day);
    int newMonth = reverse(month);
 
    if (checkMonth(month) && checkDay(day)) {
        if (newDay == day && newMonth == month) {
            std::cout << "Guests will come in his birthday - " 
                      << newDay << "-" << newMonth << "-" << year << std::endl;
            return;
        } else if (newMonth > month) {
            std::cout << "Guests will come after his birthday - " 
                      << newDay << "-" << newMonth << "-" << year << std::endl;
            return;
        } else if (newMonth < month) {
            std::cout << "Guests will come befor his birthday - " 
                      << newDay << "-" << newMonth << "-" << year << std::endl;
            return;
        } else if (newMonth == month) {
            if (newDay > day) {
                std::cout << "Guests will come after his birthday - " 
                      << newDay << "-" << newMonth << "-" << year << std::endl;
                return;
            }
            if (newDay < day ){
                std::cout << "Guests will come befor his birthday - " 
                      << newDay << "-" << newMonth << "-" << year << std::endl;
                return;
            }
        }
    } else {
            std::cout << "Guests don't come!" << std::endl;
    }
}


int main() {
    int year = 0;
    std::string bDay;
    int month = 0;
    int day = 0;
    std::cout << "Enter birthday (yy mm-dd): ";
    std::cin >> year >> bDay;
    /*if (0 > year || 2018 < year || 5 == date.length() && '-' == date[2]) {
        return ;
    }*/
    getMonthAndDay(bDay, month, day);
    std::cout << "month: " << month << "\tday: " << day << std::endl;
    if (!checkInputDate(day, month, year)) {
        return 0;
    }
    whenCome(month,day, year); 
    
    return 0;
}
