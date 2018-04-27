#include <iostream>
#include "queue.hpp"


int main() {
    Queue myQueue;
    std::cout << "Shifting 6 elements" << std::endl;
    for(int i = 0; i < 6; i++) {
        myQueue.unshift(i);
    }
    myQueue.printQueue();
    std::cout << "Pop once" << std::endl;
    myQueue.pop();
    myQueue.printQueue();




    return 0;
} 
