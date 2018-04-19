#include <iostream>
#include "stack.hpp"

void printVector(Vector& v) {
    int size = v.size();
    for (int i = 0; i < size; ++i) {
        std :: cout << v.get(i) << "  ";
    }
    std :: cout << std :: endl;
}

int main() {
    Stack s;
    for (int i = 0; i < 15; ++i) {
        s.push(i);
    }
    Stack s1(s);
    s.push(100);
    std :: cout << "s1.top = " << s1.top() << std :: endl;
    std :: cout << "s.top = " << s.top() << std :: endl;
    return 0;
}
