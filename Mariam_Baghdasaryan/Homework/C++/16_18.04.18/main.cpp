#include "stack.hpp"

int main() {
    Stack stack(4, 5);
    stack.printStack();

    stack.push(15);
    stack.push(0);
    stack.push(2);
    stack.push(20);
    stack.push(13);
    stack.push(16);
    stack.push(11);
    stack.push(9);
    stack.push(5);
    stack.push(6);
    stack.printStack();
  
    stack.pop();
    stack.printStack();

    Stack stack1(stack);
    std :: cout << "stack.top : " << stack.top() << std :: endl;
    std :: cout << "stack1.top : " << stack1.top() << std :: endl;

    Vector vector(5, 0);
    vector.pushBack(10);
    vector.pushBack(20);
    vector.pushBack(30);
    vector.printVector();

    vector.erase(2);
    vector.printVector();

    vector.insert(0, 100);
    vector.printVector();

    return 0;
}

