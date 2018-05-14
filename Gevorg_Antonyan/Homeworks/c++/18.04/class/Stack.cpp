#include "Stack.hpp"

Stack::Stack() {
	std::cout << "Default ctor - Stack\n";
}

Stack::Stack(const int size, const int num) : Vector(size, num) {std::cout << "paraetr Stack\n";} 

Stack::Stack(const Stack& other) : Vector(other) {std::cout << "copy Stack\n";}

Stack::Stack(Stack&& other) : Vector(std::move(other)) {std::cout << "move Stack\n"; }

void Stack::push1(const int num) {
    push(num);
}

void Stack::pop1() {
    pop();
}

void Stack::printStack() const {
	printVector();
}
