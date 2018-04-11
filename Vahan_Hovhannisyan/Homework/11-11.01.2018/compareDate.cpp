
#include <iostream> 
#include <cmath>

  int dayCount(int year, int month, int day, int month_days[]) {
    int leapyears = year / 4;
    if (year % 4 == 0 && month < 3) {
      // If this is a leap year
      // And we have not passed Feburary then it does
      // not count.....
      leapyears--;
    }
    // convert year/month/day into a day count
    return year * 365 + month_days[month - 1] + day + leapyears;
  }

void checkForConstraints(int year, int month, int day, bool & isOK) {
  if ((month > 12 || month < 1) ||
    (year % 4 == 0 && month == 2 && day > 29) ||
    (year % 4 != 0 && month == 2 && day > 28) ||
    ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31) ||
    ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)) {
    isOK = false;
  } else {
    isOK = true;
  }
}
int main() {
  bool isOK1 = true;
  bool isOK2 = true;
  char op;
  int year1;
  int month1;
  int day1;
  std::cout << "Enter the first date in the following way please - dd-mm-yyyy: ";
  std::cin >> day1 >> op >> month1 >> op >> year1;
  checkForConstraints(year1, month1, day1, isOK1);

  int year2;
  int month2;
  int day2;

  int days1;
  int days2;
  std::cout << "Enter the second date in the following way please - dd-mm-yyyy: ";
  std::cin >> day2 >> op >> month2 >> op >> year2;
  checkForConstraints(year2, month2, day2, isOK2);
  if (isOK1 && isOK2) {
    int month_days[] = {0,31,59,90,120,151,181,212,243,273,304,334};

    days1 = dayCount(year1, month1, day1, month_days);
    days2 = dayCount(year2, month2, day2, month_days);

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