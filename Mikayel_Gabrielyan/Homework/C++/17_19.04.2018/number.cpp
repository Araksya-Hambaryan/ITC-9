#include "number.hpp"

Number::Number() {
}

Number::Number(int val) {
    this->m_val = val;
}

/*Number::Number virtual operator+(const Number& obj) {
    Number tmp;
    tmp.m_val = this->m_val + obj.m_val;
    tmp.m_str = "";
    return tmp;
}

Number::Number virtual operator=(const Number& obj) {
    this->m_val = obj.m_val;
    this->m_str = tmp.m_str;
    return tmp;
}*/

