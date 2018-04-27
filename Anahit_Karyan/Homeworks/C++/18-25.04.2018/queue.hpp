#ifndef QUEUE_HPP
#define QUEUE_HPP

class Queue {
private:
    int size;
    int* arr;
public:
    Queue();
    Queue(int n,int a);
    Queue(const Queue& object);
    ~Queue();
    void push(int value);
    void pop();
    void print();
    void getSize();
};

#endif
