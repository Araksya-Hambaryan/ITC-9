#include <iostream>
#include "stack.hpp"

Stack :: Stack() {
    //No need to call base constructor because it calls automaticaly
}

Stack :: ~Stack() {
    //No need to call base destructor because it calls automaticaly
}

Stack :: Stack(const Stack& obj) : Vector(obj) {}

Stack :: Stack(Stack&& obj) : Vector(std :: move(obj)) {}

void Stack :: push(int num) {
    pushBack(num);
}

void Stack :: pop() {
    popBack();
}

int Stack :: top() {
    return get(size() - 1);
}

bool Stack :: emptyStack() {
    return 0 == size();
}

int Stack :: mSize() {
    return size();
}
