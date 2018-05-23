#include "stack.hpp"


void Stack::push(int value) {
    pushBack(value);
}

void Stack::pop() {
    popBack();
}

void Stack::printStack() {
    printVector();
}
