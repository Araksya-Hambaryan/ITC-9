#include <iostream> 
#include <cmath>

  int dayCount(int year, int month, int day, int month_days[]) {
    int leapyears = year / 4;
    if (0 == year % 4 && 3 > month) {
      // If this is a leap year
      // And we have not passed Feburary then it does
      // not count.....
      leapyears--;
    }
    // convert year/month/day into a day count
    return year * 365 + month_days[month - 1] + day + leapyears;
  }

void checkForConstraints(int year, int month, int day, bool & isOK) {
  if ((12 < month || 1 > month) ||
    (0 == year % 4 && 2 == month && 29 < day) ||
    (0 != year % 4 && 2 == month && 28 < day) ||
    ((1 == month || 3 == month || 5 == month || 7 == month || 8 == month || 10 == month || 12 == month) && 31 < day) ||
    ((4 == month || 6 == month || 9 == month || 11 == month) && 30 < day)) {
    isOK = false;
  } else {
    isOK = true;
  }
}

struct Date {
    int year;
    int month;
    int day;
};

int main() {
  bool isOK1 = true;
  bool isOK2 = true;
  char op;
  
  Date  d1;
  
  std::cout << "Enter the first date in the following way please - dd-mm-yyyy: ";
  std::cin >> d1.day >> op >> d1.month >> op >> d1.year;
  checkForConstraints(d1.year, d1.month, d1.day, isOK1);

  Date d2;

  int days1;
  int days2;
  std::cout << "Enter the second date in the following way please - dd-mm-yyyy: ";
  std::cin >> d2.day >> op >> d2.month >> op >> d2.year;
  checkForConstraints(d2.year, d2.month, d2.day, isOK2);
  if (isOK1 && isOK2) {
    int month_days[] = {0,31,59,90,120,151,181,212,243,273,304,334};

    days1 = dayCount(d1.year, d1.month, d1.day, month_days);
    days2 = dayCount(d2.year, d2.month, d2.day , month_days);

    int differenceDays = 0;
    differenceDays = abs(days1 - days2);
    
    int year;
    int month;
    int day;

    year = differenceDays / 365;
    month = 11;
    while (((differenceDays % 365) - (year / 4)) < month_days[month]) {
      month--;
    }
    day = (differenceDays % 365) - (year / 4) - month_days[month];

    std::cout << "The difference is " << year << " year(s)," << month << " month(s)," << day << " day(s). \n";

    std::cout << "The difference in days is: " << differenceDays;
  } else {
    std::cout << "Sorry,wrong input! \n";
  }
    return 0;
}
