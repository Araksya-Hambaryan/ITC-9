#ifndef STACK
#define STACK

#include <iostream>
#include "Vector.hpp"

class Stack : private Vector {

public:
    void push(const int);
    void pop();
};

#endif
