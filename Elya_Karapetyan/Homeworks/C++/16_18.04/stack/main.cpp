#include "stack.hpp"

void isValue(int& number) {
    while (std::cin.fail()) {    
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << "Please enter the intager number: ";
        std::cin >> number;
    }    
}

void chooseFunction(const int function, Stack& stack) {
    int index = 0;
    int value = 0;
    switch (function) {
        case 1 :  
            std::cout << "Enter the value: ";
            std::cin >> value;
            isValue(value);
            stack.push(value);
            stack.printStack();
            break;
        case 2 : 
            stack.pop();
            stack.printStack();
            break;
        default : 
            return;
    }
}

int main() {
    Stack s(5, 7);
    std::cout << "Initial Steck";
    s.printStack();
    int func = 0;
    do {
        do {
            std::cout << "\nChoose Function: 1 - push()\t2 - pop()\t3 - Exit ";
            std::cin >> func;
            chooseFunction(func, s);
        } while (std::cin.fail() || 1 < func && 3 > func);
    } while(3 != func);
    return 0;
}
