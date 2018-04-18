#include "stack.hpp"

void Stack::push(const int value) {
    insert(0, value);
}

void Stack::pop() {
    erase(0);
}

void Stack::printStack() const {
    printVector();
}

Stack::Stack() {
    std::cout << "Default constructor\n";
}

Stack::Stack(const int size, const int value) : Vector(size, value) {
    std::cout << "Stack parametrise constructor\n";
};

Stack::Stack(const Stack& object) : Vector(object) {
    std::cout << "Stack copy constructor\n";
}

Stack::Stack(Stack&& object) : Vector(object) {
    std::cout << "Stack move constructor\n";
}

Stack::~Stack() {
    std::cout << "Stack destructor\n";
}
