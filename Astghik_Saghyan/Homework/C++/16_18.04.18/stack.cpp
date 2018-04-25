#include <iostream>
#include "stack.hpp"

Stack::Stack() {
    std::cout << "Stack default constructor works!" << std::endl;
}

Stack::Stack(Stack& obj) : Vector(obj) {
    std::cout << "Stack copy constructor works!" << std::endl;
}

Stack::Stack(Stack&& obj) : Vector(obj) {
    std::cout << "Stack move constructor works!" << std::endl;
}

Stack::~Stack() {
    std::cout << "Stack destructor works!" << std::endl;
}

Stack::Stack(int n, int fill) : Vector(n, fill) {
    std::cout << "Stack built array!" << std::endl;
}

void Stack::pushBack(int newElem) {
    push(newElem);
}

void Stack::popBack() {
    pop();
}

void Stack::printStack() {
    printVec();
}



