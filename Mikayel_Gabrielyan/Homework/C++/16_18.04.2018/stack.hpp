#ifndef STACK_HPP
#define STACK_HPP

#include "vector.hpp"

class Stack : private Vector {
public:
    void push(int value);
    void pop();
    void printStack();
};

#endif
