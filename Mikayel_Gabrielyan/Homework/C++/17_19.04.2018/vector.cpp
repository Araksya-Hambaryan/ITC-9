#include "vector.hpp"

void Vector::pushBack(const Var& obj) {
    m_vec[m_size] = obj;
    ++m_size;
}

Vector::Vector() {
    m_size = 0;
    m_vec = new Var[5];
}

void Vector::printVector() {
    std::string string = "";
    for (int i = 0; i < m_size; ++i) {
        if(0 == m_vec[i].getVal()) {
            string += m_vec[i].getStr();
        } else {
            string += std::to_string(m_vec[i].getVal());
        }
    }
    std::cout << "Vectori elemntneri gumarn e -> " << string << std::endl;
}

int Vector::getSize() {
    return m_size;
}

