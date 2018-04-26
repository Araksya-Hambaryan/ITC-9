#include <iostream>
#include "queue.hpp"

int main() {
    Queue q;
    for(int i = 1; i < 10; ++i) {
        q.push(i);
    }
    q.print();
    std :: cout << std :: endl;
    q.pop();
    q.print();
    return 0;
}


