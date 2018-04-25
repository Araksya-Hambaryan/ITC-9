#include <iostream>
#include "queue.hpp"

int main() {
    Queue q;
    for (int i = 1; i < 10; ++i) {
        q.push(i);
    }
    q.print();
    for (int i = 0; i < 15; ++i) {
        q.pop();
    }
    if (q.empty()) {
        std :: cout << "\nQueue is empty.\n";
    } else {
        std :: cout << std :: endl;
        q.print();
    }
    return 0;
}
