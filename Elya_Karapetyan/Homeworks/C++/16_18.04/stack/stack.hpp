#ifndef STACK_HPP
#define STACK_HPP

#include "vector.hpp"

class Stack : private Vector {
public:
    void push(const int value);
    void pop();
    void printStack() const;
    Stack();
    Stack(const int size, const int value);
    Stack(const Stack& object);      
    Stack(Stack&& object);
    ~Stack();  
};

#endif
