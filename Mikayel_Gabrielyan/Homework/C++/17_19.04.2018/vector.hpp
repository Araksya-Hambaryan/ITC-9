#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>
#include <string>
#include "string.hpp"
#include "number.hpp"

class Vector {
public:
    void pushBack(const Var& obj);
    void printVector();
    int getSize();
    Vector();
private:
    Var* m_vec;
    int m_size;
};

#endif
