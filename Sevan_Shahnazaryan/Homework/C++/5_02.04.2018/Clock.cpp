#include <iostream>

int main() {
    const unsigned short int minutesPerHour = 60;
    unsigned short int hour1 = 0;
    unsigned short int hour2 = 0;
    unsigned short int min1 = 0;
    unsigned short int min2 = 0;
    unsigned short int amount = 0;
    char minute2[3];
    char minute1[3];  
    std::cout << "Enter first time and then second time" << std::endl;
    std::cin >> hour1 >> minute1;
    std::cin >> hour2 >> minute2;
    min1 = (minute1[1] - '0') * 10 + minute1[2] - '0'; 
    min2 = (minute2[1] - '0') * 10 + minute2[2] - '0'; 
    if (hour1 > 12 || min1 > 59 || hour2 > 12 || min2 > 59) {
        std::cout << "Wrong input" << std::endl;
        return 0;
    }
    if (hour1 > hour2 || hour1 == hour2 && min1 > min2) {
        std::cout << "Wrong time. It's passed" << std::endl;
        return 0;
    }
    int j = min1;
    if (0 == j) {
        amount = 1;
    }
    for (int i = hour1; i <= hour2; i++) {
        for (j; j <= minutesPerHour; j++) {
            if (7 == j) {
                amount++;
            }
            if (i == hour2-hour1+1 && j >= min2) {
                std::cout << amount << std::endl;
                return 0;
            } 
        }
        j = 0;
        amount ++;
    }
    std::cout << amount << std::endl;
    return 0;
}
