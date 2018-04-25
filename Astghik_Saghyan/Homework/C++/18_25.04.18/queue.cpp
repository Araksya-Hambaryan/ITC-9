#include <iostream>
#include "queue.hpp"

Queue::Queue() {
    int size = 0;
    int* queue = nullptr;
    int countForPop = 0;
    std::cout << "Default constructor works!" << std::endl;
}

Queue::Queue(Queue& vec) {
/*    std::cout << "Copy constructor works!" << std::endl;
    this->queue = new int[vec.size+5];
    this->size = vec.size;
    this->countForPush = vec.countForPush;
    this->countForPop = vec.countForPop;
    for(int i = 0; i < vec.size; ++i) {
        this->queue[i] = vec.queue[i];
    }*/
}

Queue::Queue(Queue&& vec) {
/*    std::cout << "Move constructor works!" << std::endl;
    this->queue = vec.queue;
    this->size = vec.size;
    this->countForPush = vec.countForPush;
    this->countForPop = vec.countForPop;
    vec.queue = nullptr;
    vec.size = 0;
    vec.countForPush = 0;
    vec.countForPop = 0;*/
}

Queue::~Queue() {
    std::cout << "Destructor works!" << std::endl;
    delete [] queue;
    queue = nullptr;
}

Queue::Queue(int n, int fill) {
    queue = new int[n+5];
    size = n;
    for(int i = 0; i < size; ++i) {
        queue[i] = fill+i;
    }
}

int Queue::getSize() {
    return size;
}

int* Queue::getQueue() {
    return queue;
}

void Queue::shift(int newElem) {
    ++size;
    for(int i = size-1; 0 < i; --i) {
	queue[i] = queue[i - 1];
    }
    queue[0] = newElem;
    ++countForShift;
    if(0 == countForShift%5) {
        int* tempQueue = new int[size + 5];
        for(int i = 0; i < size; ++i) { 
            tempQueue[i] = queue[i]; 
        }  
        delete queue; 
        queue = tempQueue; 
        std::cout << "We shifted more than 5 time" << std::endl;
    }
}

void Queue::pop() {
    if(0 < size) {
        queue[size] = 0;
        --size;
        ++countForPop;
        if(0 == countForPop%5) {
            int* tempQueue = new int[size + 5];
            for(int i = 0; i < size; ++i) { 
                tempQueue[i] = queue[i]; 
            }  
            delete queue; 
            queue = tempQueue; 
            std::cout << "We poped more than 5 time" << std::endl;
        }
    }
}

void Queue::printQueue() {
    for(int i = 0; i < size; ++i) {
        std::cout << queue[i] << " ";
    }
    std::cout << std::endl;
}




