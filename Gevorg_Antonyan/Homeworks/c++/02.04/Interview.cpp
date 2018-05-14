#include <iostream>
#include <string>

bool question(std::string text, std::string name, bool k) {
    int ask = 0;
    k = 1;
    std::string answer[5] = {"barev", "vonc es?", "gorcert vonc en?", "dasert vonc en?", "ctesutyun"};
    for(int i = 0; i < 5; ++i) {
        if(text == answer[i]) {
            ask = i;
            break;
        } else {
            ask = 5;
        }
    }
    switch(ask) {
        case(0):
            std::cout << "bot:barev " << name << std::endl;
            break;
        case(1):
            std::cout << "bot:lav em , shnorhakalutyun!  " << std::endl;
            break;
        case(2):
            std::cout << "bot:der shxatum em)) " << std::endl;
            break;
        case(3):
            std::cout << "bot:lav en, arajadimum em)"  << std::endl;
            break;
        case(4):
            std::cout << "bot:ctesutyun  " << name << std::endl;
            k = 0;
            break;
        case(5): 
            std::cout << "bot:kneres chhaskaca, xndrum em noric harcru" << name << std::endl;
    }
    return k;
}




int main() {
    bool k = 1;
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
    while (k) {
        std::string text;
        std::getline(std::cin ,text);
        k = question(text, name, k);
    }
    return 0;
}
