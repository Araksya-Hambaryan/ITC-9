#ifndef STACK_HPP
#define STACK_HPP

#include "vector.hpp"

class Stack : private Vector {
public:
    Stack();
    Stack(int, int);
    Stack(const Stack&);
    Stack(Stack&&);
    ~Stack();
    void push(int);
    void pop();
    int top();
    int mSize();
    void printStack() const;
};

#endif
