#include <iostream>

struct Date {
    int day;
    int month;
    int year;
};

bool check(int day,int month) {
    if(1 > month || 12 < month || 1 > day) {
        return false;
    }
    if((1 == month || 3 == month || 5 == month || 7 == month || 8 == month || 10 == month || 12 == month) && 31 < day) {
        return false;
    } else if(2 == month && 28 < day) {
        return false;
    } else if((4 == month || 6 == month || 9 == month || 11 == month) && 30 < day) {
        return false;
    } else {
        return true;
    }
}

void getDate(int& daym, int& monthm, int& yearm) {
    std::cout << "Mutqagrel or@ -> ";
    std::cin >> daym;
    std::cout << "Mutqagrel amis@ -> ";
    std::cin >> monthm;
    std::cout << "Mutqagrel tarin -> ";
    std::cin >> yearm;
}

int countOfDays(Date date1, Date date2) {
    int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int countOfDays = (date2.year - date1.year - 1) * 365 - date1.day + date2.day;
    for(int i = date1.month; i < 12; ++i) {
        countOfDays += monthDays[i];
    }
    for(int i = 0; i < date2.month; ++i) {
        countOfDays += monthDays[i];
    }
    return countOfDays;
}

int main() {
    int daym = 0;
    int monthm = 0;
    int yearm = 0;
    std::cout << "Mutqagrel skzbnakan amsatver@ \n";
    getDate(daym, monthm, yearm);
    Date date1 = {daym, monthm, yearm};
    if(check(daym, monthm)) { 
        std::cout << "Mutqagrel verjnakan amsatver@ \n";
        getDate(daym, monthm, yearm);
        Date date2 = {daym, monthm, yearm};
        if(check(daym, monthm)) {
            if(date1.year > date2.year || (date1.year == date2.year && date1.month > date2.month) || (date1.year == date2.year && date1.month == date2.month && date1.day > date2.day)) {
              std::cout << "Araji amsativ@ erkrordic heto e \n";
            } else {
               std::cout << "Oreri qanakn e -> " << countOfDays(date1, date2) << std::endl;
            }
        } else {
            std::cout << "Sxal mutqagrum \n";
        } 
     } else {
        std::cout << "Sxal mutqagrum \n";
     }
     return 0;
}
