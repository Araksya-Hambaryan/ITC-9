#include <iostream>
#include <string>


int main() {
    bool k = 1;
    int ask = 0;
    std::cout << "bot:Inch e qo anune?  " << std::endl;
    std::string name;
    std::getline(std::cin , name) ;
    std::cout << "bot:Ok  " << name << std::endl;
    while (true == k) {
        std::string text;
        std::getline(std::cin ,text);
        if  ("barev" == text) {
            ask = 1;
        }
        if ("vonc es?" == text) { 
            ask = 2;
        }
        if ("gorcert vonc en?" == text) {
            ask = 4;
        }
        if ("dasert vonc en?" == text) {
            ask = 3;
        }
        if ("ctesutyun" == text) {
            ask = 5;
        }
        switch (ask) {
            case 1:
                std::cout << "bot:barev " << name << std::endl;
                ask = 0;
                break;
            case 2:
                std::cout << "bot:lav em , shnorhakalutyun!  " << std::endl;
                ask = 0;
                break;
            case 3:
                std::cout << "bot:lav en, isk qon@?"  << std::endl;
                ask = 0;
                break;
            case 4:
                std::cout << "bot:der shxatum em)) " << std::endl;
                ask = 0;
                break;
            case 5:
                std::cout << "bot:ctesutyun  " << name << std::endl;
                k = 0;
                break;
            default: 
                break;                
        }
    }
    return 0;
}
