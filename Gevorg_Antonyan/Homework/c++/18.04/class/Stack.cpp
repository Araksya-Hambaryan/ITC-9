#include "Stack.hpp"
#include "Vector.hpp"

void Stack::push(const int num) {
    Vector.push(num);
}

void Stack::pop() {
    Vector.pop();
}
