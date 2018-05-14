#include <iostream>
#include "number.hpp"

Number::Number(int num) {
    std::cout << "Number constructor works!" << std::endl;
    this->number = num;
}

std::string toString(int num) {
    return to_string(num);
}



