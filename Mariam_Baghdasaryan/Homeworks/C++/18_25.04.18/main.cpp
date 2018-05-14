#include "queue.hpp"
#include <iostream>

int main() {
    Queue* queue = new Queue;
    queue -> print();
    queue -> size();
    std :: cout << std :: endl;

    Queue* queue1 = new Queue(5, 15);
    queue1 -> print();
    queue1 -> size();
    std :: cout << std :: endl;

    Queue* queue2 = new Queue(*queue1);
    queue2 -> print();
    queue2 -> size();

    for (int i = 0; i < 5; ++i) {
        queue2 -> push(i);
    }
    queue2 -> print();
   
    for (int i = 0; i < 3; ++i) {
        queue2 -> pop();
    }
    queue2 -> print();
    queue2 -> size();
    std :: cout << std :: endl;

    delete queue;
    delete queue1;
    delete queue2;

    return 0;
}
