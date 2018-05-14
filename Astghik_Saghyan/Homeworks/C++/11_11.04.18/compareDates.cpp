#include <iostream>
#include <stdio.h>

int main (){
    struct Date{
        int day;
        int month;
        int year;
        bool compareDates(Date date1, Date date2) {
            if(date1.year < date2.year) {
                return true; 
            } else if(date1.year == date2.year) {
                if(date1.month < date2.month) {
                    return true;
                } else if(date1.month == date2.month) {
                    if(date1.day <= date2.day) {
                        return true;
                    } else {
                        return false;
                    }


                } else {
                    return false;
                }
            } else {
                return false;
            }
        }
    };

//    Date firstDate {28, 12, 2018};
//    Date secondDate {15, 10, 2017};

    Date firstDate;
    std::cout << "Enter the day of the first date!" <<std::endl;
    std::cin >> firstDate.day;
    while(firstDate.day <=0 || firstDate.day > 31) {
        std::cout << "Enter correct number!" << std::endl;
        std::cin >> firstDate.day;
    }
    std::cout << "Enter the month of the first date!" <<std::endl;
    std::cin >> firstDate.month;
    while(firstDate.month <=0 || firstDate.month > 12) {
        std::cout << "Enter correct number!" << std::endl;
        std::cin >> firstDate.month;
    }
    std::cout << "Enter the year of the first date!" <<std::endl;
    std::cin >> firstDate.year;
    while(firstDate.year <=0) {
        std::cout << "Enter correct number!" << std::endl;
        std::cin >> firstDate.year;
    }
    Date secondDate;
    std::cout << "Enter the day of the second date!" <<std::endl;
    std::cin >> secondDate.day;
    while(secondDate.day <=0 || secondDate.day > 31) {
        std::cout << "Enter correct number!" << std::endl;
        std::cin >> secondDate.day;
    }
    std::cout << "Enter the month of the second date!" <<std::endl;
    std::cin >> secondDate.month;
    while(secondDate.month <=0 || secondDate.month > 12) {
        std::cout << "Enter correct number!" << std::endl;
        std::cin >> secondDate.month;
    }
    std::cout << "Enter the year of the second date!" <<std::endl;
    std::cin >> secondDate.year;
    while(secondDate.year <=0) {
        std::cout << "Enter correct number!" << std::endl;
        std::cin >> secondDate.year;
    }

    if(firstDate.compareDates(firstDate, secondDate)) {
        std::cout << "The first date is befor the second or is the same!\n";
    } else {
        std::cout << "The first date is after the second date!\n";
    }
    return 0;

}
 

