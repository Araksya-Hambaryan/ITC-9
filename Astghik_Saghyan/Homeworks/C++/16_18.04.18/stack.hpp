#ifndef STACK_HPP
#define STACK_HPP
#include "vector.hpp"

class Stack: private Vector {
    public:
    Stack();
    Stack(Stack& obj);
    Stack(Stack&& obj);
    ~Stack();
    Stack(int n, int fill); 
    void pushBack(int newElem);
    void popBack();
    void printStack();
};

#endif

