#include <iostream>

bool isNotTrue(int hour1, int minute1, int hour2, int minute2) {
    return hour1 < 0 || hour2 < 0 || hour1 >= 12 || hour2 >= 12 || minute1 < 0 || minute2 < 0 
    || minute1 >= 60 || minute2 >= 60 || hour1 > hour2 || ((hour1 == hour2) && (minute1 > minute2));
}

void inputDate(int& hour1, int& hour2, int& minute1, int& minute2) {
    char temp = ' ';
    std :: cout << "Input the start time range like this 3:20 : ";
    std :: cin >> hour1 >> temp >> minute1;
    std :: cout << "Input the end time range like this 5:05 : ";
    std :: cin >> hour2 >> temp >> minute2;
    while (!std :: cin || isNotTrue(hour1, minute1, hour2, minute2)) {
        std :: cin.clear();
        std :: cin.ignore();
        std :: cout << "Please input correct (like this 3:20 5:05): ";
        std :: cin >> hour1 >> temp >> minute1;
        std :: cin >> hour2 >> temp >> minute2;
    }
}

int main() {
    int startHour = 0;
    int endHour = 0;
    int startMinute = 0;
    int endMinute = 0;
    inputDate(startHour, endHour, startMinute, endMinute);
    int startTime = startHour * 60 + startMinute;
    int endTime = endHour * 60 + endMinute;
    int time = endTime - startTime;
    int countOfRing = time / 60 + time / 67 + 1;
    if (0 == countOfRing) {
        std :: cout << "The clock doesn't ring." << std :: endl;
    } else {
        std :: cout << "The clock rings " << countOfRing << " times." << std :: endl;
    }

    return 0;
}
