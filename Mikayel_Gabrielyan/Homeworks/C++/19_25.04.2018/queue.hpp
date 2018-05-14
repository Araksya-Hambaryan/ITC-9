#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <iostream>

class Queue {
public:
    Queue();
    Queue(const int size);
    void push(const int value);
    void pop();
    void print();
    ~Queue();
private:
    int* arr;
    int size;
    int count;
};

#endif
