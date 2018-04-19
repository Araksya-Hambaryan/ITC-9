#ifndef STACK
#define STACK

#include "Vector.hpp"

class Stack : private Vector {
public:
	Stack();
	Stack(const int, const int);
	Stack(const Stack&);
	Stack(Stack&&);
    void push1(const int);
    void pop1();
	void printStack() const;
};

#endif
