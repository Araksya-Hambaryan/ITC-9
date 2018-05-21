#ifndef QUEUE_HPP
#define QUEUE_HPP

class Queue {
private:
    int mSize;
    int* mArray;
    int lastIndex;
public:
    Queue();
    Queue(int, int);
    Queue(const Queue&);
    ~Queue();
    void push(int);
    void pop();
    void print();
    void size();
};

#endif
