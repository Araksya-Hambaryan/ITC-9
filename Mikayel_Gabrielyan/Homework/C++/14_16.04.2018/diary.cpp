#include <iostream>
#include <fstream>
#include <string>

bool checkName(std::string str) {
    for(int i = 1; i < sizeof(str) -1; ++i)
        if('A' > str[0] || 'Z' < str[0] || 'a' > str[i] || 'z' < str[i]) {
            return false;
        } else {
            return true;
        }
}

bool checkDate(std::string str){
    int x = 48;  // Ascii axyusaki 0-i arjeq@
    int day = (str[0] - x) * 10 + str[1] - x;
    int month = (str[3] - x) * 10 + str[4] - x;
    int time = (str[11] - x) * 10 + str[12] - x;
    int minut = (str[14] - x) * 10 + str[15] - x;
    int year = 0;
    int j = 1000;
    for(int i = 6; i < 10; ++i) {
        year = year + (str[i] - x) * j;
        j = j / 10;
    }
    if(0 < day && 31 > day && 0 < month && 13 > month && 0 < year && 2019 > year && 0 <= time && 23 >= time && 0 <= minut && 60 >= minut) {
        return true;
    } else {
        std::cout << "Orva, Amsva, Tarva kam Jami sxal mutqagrum \n";
        return false;
    }
}

void getName(std::string str) {
    std::ifstream file;
    std::string nameStr = "";    
    std::string dataStr = "";    
    file.open("file.txt");
    if(file.is_open()) {
        while(file >> nameStr >> dataStr) {
            if(str == nameStr || str == dataStr) {
                std::cout << nameStr << " " << dataStr << std::endl;
            }
        }
    }
}

int main() {
    std::string str = "";
    std::cout << "Mutqagrel anun@(orinak Mher) kam amsativ@ (orinak 16.04.2018/15:00) -> \n";
    std::getline(std::cin,str);
    if(checkName(str)) {
        getName(str);
    } else if(checkDate(str)) {
        getName(str);
    } else {
        std::cout << "Sxal Mutqagrum \n";
    }
    return 0;
}
