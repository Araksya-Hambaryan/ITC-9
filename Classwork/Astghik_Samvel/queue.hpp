#ifndef QUEUE_HPP
#define QUEUE_HPP
#include "list.hpp"

class Queue: public List {
    public:
    Queue();
    Queue(Queue& obj);
    Queue(Queue&& obj);
    ~Queue();
    Queue(int n, int fill); 
    void unshift(int newElem);
    void popBack();
    void printQueue();
};

#endif

