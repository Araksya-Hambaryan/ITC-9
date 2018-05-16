#include <iostream>
#include "var.hpp"

Var::Var() {
    std::cout << "Default constructor works!" << std::endl;
}

Var::Var(Var& vec) {
    std::cout << "Copy constructor works!" << std::endl;
}

Var::Var(Var&& vec) {
    std::cout << "Move constructor works!" << std::endl;
}

Var::~Var() {
    std::cout << "Destructor works!" << std::endl;
}

Var operator=() {

}

std::string toString() {

}



