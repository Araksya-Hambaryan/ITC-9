#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <iostream>

class Queue {
public:
    Queue();
    Queue(const Queue& object);
    ~Queue();
    int getSize() const;
    bool isEmpty() const;
    void push_back(const int value);
    void pop_front();
    void clear();
    void printQueue() const;
    
private:
    struct Node {
        int m_value;
        Node* m_next;
        Node(int value, Node* next = nullptr) : m_value(value)
                                              , m_next(next) {}
    };   
    Node* m_head;
};

#endif
