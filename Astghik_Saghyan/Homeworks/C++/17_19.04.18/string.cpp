#include <iostream>
#include "string.hpp"

String::String(std::String str) {
    std::cout << "String constructor works!" << std::endl;
    this -> str = str;
}


std::string toString(std::string str) {
    return str;
}



