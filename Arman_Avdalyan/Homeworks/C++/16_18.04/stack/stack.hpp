#ifndef STACK_HPP
#define STACK_HPP
#include "vector.hpp"

class Stack : private Vector {
    public:
        Stack();
        Stack(int size);
        Stack(int size, int firstElement);
        Stack(const Stack&);
        Stack(Stack&&);
        ~Stack();
        void push(int num);
        void pop();
        int top();
        bool emptyStack();
        int mSize();
};

#endif
