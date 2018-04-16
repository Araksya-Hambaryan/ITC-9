#include <iostream>
#include <fstream>
#include <string>

bool checkName(std::string& inStr) {
    for(int i = 1; i < sizeof(inStr) -1; ++i)
        if('A' > inStr[0] || 'Z' < inStr[0] || 'a' > inStr[i] || 'z' < inStr[i]) {
            return false;
        } else {
            return true;
        }
}

int main() {
    std::string inStr = "";
    std::string str = "";
    std::ifstream file;
    std::cout << "Mutqagrel anun@ -> ";
    std::getline(std::cin,inStr);
    if(checkName(inStr)) {
        file.open("./file.txt");
        while(file >> str) {
            if(str == inStr) {
                std::cout << str << " ";
                file >> str;
                std::cout << str << std::endl;
            }
        }
    } else {
        std::cout << "Anvan sxal mutqagrum \n";
    }
    return 0;
}
