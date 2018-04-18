#include <iostream>
#include "stack.hpp"

void printVector(Vector& v) {
    int size = v.size();
    for (int i = 0; i < size; ++i) {
        std :: cout << v.get(i) << "  ";
    }
    std :: cout << std :: endl;
}

void testVector() {
    Vector v;
    for (int i = 0; i < 15; ++i) {
        v.pushBack(i);
    }
    printVector(v);
    v.insert(5,100);
    printVector(v);
    v.erase(7);
    printVector(v);
    v.pushFront(77);
    printVector(v);
    v.popFront();
    v.popFront();
    printVector(v);
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
    testVector();
    return 0;
}
