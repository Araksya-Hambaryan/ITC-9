#include <iostream>
#include <string>


int main() {
    bool k = 1;
    int ask = 0;
    std::cout << "bot:Inch e qo anune?  " << std::endl;
    std::string name;
    std::getline(std::cin , name) ;
    std::cout << "bot:Ok  " << name << std::endl;
    std::cout << name << " du karogh es harcnel:" << std::endl;
    std::cout << "1. barev " << std::endl;
    std::cout << "2.vonc es? " << std::endl;
    std::cout << "3.gorcert vonc en?" << std::endl;
    std::cout << "4.dasert vonc en?" << std::endl;
    std::cout << "5.ctesutyun (durs galu hamar):" << std::endl; 
    while (1 == k) {
        std::string text;
        std::getline(std::cin ,text);
        if  ("barev" == text) {
            std::cout << "bot:barev " << name << std::endl;
        } else if ("vonc es?" == text) { 
            std::cout << "bot:lav em , shnorhakalutyun!  " << std::endl;
        } else if ("gorcert vonc en?" == text) {
            std::cout << "bot:der shxatum em)) " << std::endl;
        } else if ("dasert vonc en?" == text) {
            std::cout << "bot:lav en, arajadimum em)"  << std::endl;
        } else if ("ctesutyun" == text) {
            std::cout << "bot:ctesutyun  " << name << std::endl;
            k = 0;
        } else {
            std::cout << "bot:kneres chhaskaca, xndrum em noric harcru" << name << std::endl;
        }
    }
    return 0;
}
