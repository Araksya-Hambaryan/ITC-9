#include "var.hpp"

Var::Var() {
    m_val = 0;
    m_str = "";
}

void Var::print() {
    std::string string = "";
    if(0 == this->m_val) {
        std::cout << this->m_str;
    } else {
        std::cout << this->m_val;
    }
}

void Var::operator=(const Var* obj) {
    this->m_str = obj->m_str;
    this->m_val = obj->m_val;
}

int Var::getVal() {
    return this->m_val;
}

std::string Var::getStr() {
    return this->m_str;
}
