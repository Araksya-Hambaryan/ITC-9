#include "string.hpp"

String::String() {
}

String::String(std::string str) {
    this->m_str = str; 
}

/*String::String virtual operator+(const String& obj) {
    String tmp;
    tmp.m_str = this->m_str + obj.m_str;
    tmp.m_val = 0;
    return tmp;
}

String::String virtual operator=(const String& obj) {
    this->m_val = obj.m_val;
    this->m_str = tmp.m_str;
    return tmp;
}*/

