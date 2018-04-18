#include "stack.hpp"

Stack :: Stack() {
    std :: cout << "Default constructor" << std :: endl;
}

Stack :: Stack(int length, int value) : Vector(length, value) {
    std :: cout << "Stack parametrise constructor" << std :: endl;
}

Stack :: Stack(const Stack& object) : Vector(object) {
    std :: cout << "Stack copy constructor" << std :: endl;
}

Stack :: Stack(Stack&& object) : Vector(object) {
    std :: cout << "Stack move constructor" << std :: endl;
}

Stack :: ~Stack() {
    std::cout << "Stack destructor" << std :: endl;
}

void Stack :: push(int value) {
    pushBack(value);
}

void Stack :: pop() {
    popBack();
}

int Stack :: top() {
    return get(size() - 1);
}

int Stack :: mSize() {
    return size();
}

void Stack :: printStack() const {
    printVector();
}
