#include <iostream>

int main() {
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
    amount = (hour2 - hour1) * 2;
    if(0 == min1) {
        amount ++;
    }
    if(min2 >= 35) {
        amount ++;
    }
    if(min1 > 35) {
        amount --;
    }
    std::cout << amount << std::endl;
    return 0;
}
