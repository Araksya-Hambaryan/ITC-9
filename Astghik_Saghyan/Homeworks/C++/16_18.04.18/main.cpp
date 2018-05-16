#include <iostream>
#include "stack.hpp"


int main() {
    Stack myStack(10, 8);
    for(int i = 0; i < 6; ++i) {
        myStack.pushBack(i);
    }
    myStack.printStack();
    Stack otherStack = myStack;
    otherStack.printStack();
    for(int i = 0; i < 6; ++i) {
        otherStack.popBack();
    }
    otherStack.printStack();
    return 0;
} 
