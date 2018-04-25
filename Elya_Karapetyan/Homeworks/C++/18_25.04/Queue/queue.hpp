#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <iostream>

class Queue {
public:
    Queue();
    Queue(const int size);
    Queue(const Queue& object);
    ~Queue();
    bool isEmpty() const;
    bool isFull() const;
    int getSize() const;
    void push(const int value);
    void pop();
    int& front();
    int& back();
    void print() const;
private:
    int* m_array;
    int m_size;
    int m_front;  
    int m_rear;
};

#endif
