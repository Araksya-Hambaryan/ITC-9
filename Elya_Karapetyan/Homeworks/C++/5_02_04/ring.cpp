#include <iostream>

bool isValid(int hour, int minute, char symbol) {
    if (0 >= hour || 12 < hour || 0 > minute || 59 < minute || ':' != symbol) {
        return false;
    }
    return true;
}

void inputClock(int& hour, int& minute, char& symbol) {

    do {
        std::cin >> hour >> symbol >> minute;
        if (!isValid(hour, minute, symbol)) { 
            std::cout << "Invalid  input! Try again (hh : mm) " << std::endl;
        }
    } while(!isValid(hour, minute, symbol));
}

int countOfRings(int startHour, int startMinute, int endHour, int endMinute) {
    int start = startHour * 60 + startMinute;
    int end = endHour * 60 + endMinute;
    int count = 0;
    for (int i = start; i <= end; ++i) {
        if (0 == i % 60 || 7 == i % 60) {
            ++count;
        }
    }
    return count;
}

int main() {
    char symbol = ' ';
    int startHour = 0;
    int startMinute = 0;
    std::cout << "Please input start clock(hh : mm) ";
    inputClock(startHour, startMinute, symbol);
    int endHour = 0;
    int endMinute = 0;
    std::cout << "Please input end clock(hh : mm): ";
    inputClock(endHour, endMinute, symbol);
    std::cout << "Count of rings: " << countOfRings(startHour, startMinute, endHour, endMinute) << std::endl;

    return 0;
}
