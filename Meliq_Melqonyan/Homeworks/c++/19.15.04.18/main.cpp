#include <iostream>
#include "queue.hpp"

int main() {
    Queue q;
    for (int i = 0; i < 10; ++i) {
        q.push(i);
    }
    q.print();
    q.pop();
    q.pop();
    q.print();
    return 0;
}

