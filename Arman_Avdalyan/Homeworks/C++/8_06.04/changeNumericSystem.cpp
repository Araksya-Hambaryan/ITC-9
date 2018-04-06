#include <iostream>

void numTo(unsigned number, unsigned& sys) {
    if (number < sys) {
        std :: cout << number;
        return;
    }
    numTo(number / sys, sys);
    if (number % sys < 10) {
        std :: cout << number % sys;
    } else {
        std :: cout << char('A' + number % sys - 10);
    }
}

void input(unsigned& number, unsigned& sys) {
    std :: cout << "Input number and numeric system(Numberic system will be bigger than 0) : ";
    std :: cin >> number >> sys;
    while (!std :: cin || sys < 0 || number < 0) {
        std :: cin.clear();
        std :: cin.ignore();
        std :: cout << "Please input correct : ";
        std :: cin >> number >> sys;
    }
}

int main() {
    unsigned number = 0;
    unsigned system = 0;
    input(number, system);
    numTo(number, system);
    std :: cout << std :: endl;
    return 0;
}
