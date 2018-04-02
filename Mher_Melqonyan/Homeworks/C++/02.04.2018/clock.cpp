#include <iostream>
int main() {
int hour1;
int minut1;
int hour2;
int minut2;
int minimum;
int maximum;
int counter = 0;
std::cout << "Nermuceq arajin jam@" << std::endl;
std::cin >> hour1;
std::cout << "Nermuceq arajini ropener@" << std::endl;
std::cin >> minut1;
std::cout << "Nermuceq erkrord jam@" << std::endl;
std::cin >> hour2;
std::cout << "Nermuceq erkrordi ropener@" << std::endl;
std::cin >> minut2;
    if(12 == hour1){
        hour1 = 0;
    }
    if(12 == hour2){
        hour2 = 0;
    }
    if(hour1 < 12 && hour2 < 12 && minut1 < 60 && minut2 < 60 && hour1 >= 0 && hour2 >= 0 && minut1 >= 0 && minut2 >= 0) {
        if(hour1 == hour2 && minut1 < minut2 || hour1 < hour2) {
            minimum = hour1 * 60 + minut1;   
            maximum = hour2 * 60 + minut2;
            for(int i = minimum; i <= maximum; ++i) {
                if(0 == i % 60 || 7 == i % 60) {
                    ++counter;
                }   
            }
            std::cout << "kznga " << counter << " angam";
        } else {
            std::cout << "Sxal jmain mijakayq";
        }
    } else {
        std::cout << "Tvyal jam goyutyun chuni";
    }
   return 0;
}

