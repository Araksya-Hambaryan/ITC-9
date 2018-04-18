#include <iostream>
#include <fstream>
#include <string>

bool checkName(std::string& str) {
        if('A' > str[0] || 'Z' < str[0]) {
            return false;
        } else {
            return true;
        }
}

bool checkDate(std::string& str){
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

void getNameOrDate(std::string& str, int& count) {
    std::ifstream file;
    std::string nameStr = "";    
    std::string dataStr = "";    
    file.open("file.txt");
    if(file.is_open()) {
        while(file >> nameStr >> dataStr) {
            if(str == nameStr || str == dataStr) {
                std::cout << nameStr << " " << dataStr << std::endl;
                count++;
            }
        }
    }
    file.close();
}
void printNameOrDate(std::string& str) {
    int count = 0;
    if(checkName(str)) {
        getNameOrDate(str, count);
        if(0 == count){
            std::cout << "Aydpisi Anun chka cucakum \n";
        }
    } else if(checkDate(str)) {
        getNameOrDate(str, count);
        if(0 == count){
            std::cout << "Aydpisi Data chka cucakum \n";
        }
    }
}

int main() {
    int count = 0;
    std::string str = "";
    std::cout << "Mutqagrel anun@(orinak Mher) kam amsativ@ (orinak 16.04.2018/15:00) -> \n";
    std::getline(std::cin,str);
    printNameOrDate(str);
    return 0;
}
