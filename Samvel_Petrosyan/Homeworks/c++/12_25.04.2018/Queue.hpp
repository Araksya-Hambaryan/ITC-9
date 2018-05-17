#ifndef QUEUE_HPP
#define QUEUE_HPP


class Queue{
    private:
    int size;
    int countForShift;
    int countForPop;
    int* queue;
    public:
    Queue();
    Queue(Queue& que);
    Queue(Queue&& que);
    ~Queue();
    Queue(int n, int fill); 
    int getSize();
    int* getQueue();
    void shift(int newElem);
    void pop();
    void printQueue();
};

#endif

