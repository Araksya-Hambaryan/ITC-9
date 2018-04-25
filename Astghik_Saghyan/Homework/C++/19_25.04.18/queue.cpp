#include <iostream>
#include "queue.hpp"

Queue::Queue() {
    int size = 0;
    int* queue = nullptr;
    int countForPop = 0;
    std::cout << "Default constructor works!" << std::endl;
}

Queue::Queue(Queue& que) {
    std::cout << "Copy constructor works!" << std::endl;
    this->queue = new int[que.size+5];
    this->size = que.size;
    this->countForShift = que.countForShift;
    this->countForPop = que.countForPop;
    for(int i = 0; i < que.size; ++i) {
        this->queue[i] = que.queue[i];
    }
}

Queue::Queue(Queue&& que) {
    std::cout << "Move constructor works!" << std::endl;
    this->queue = que.queue;
    this->size = que.size;
    this->countForShift = que.countForShift;
    this->countForPop = que.countForPop;
    delete que.queue;
    que.queue = nullptr;
    que.size = 0;
    que.countForShift = 0;
    que.countForPop = 0;
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
        queue[i] = fill;
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




