#ifndef QUEUE_HPP
#define QUEUE_HPP

class Queue {
    public:
        Queue();
        Queue(int);
        Queue(const Queue&);
        Queue(Queue&&);
        ~Queue();
        void push(int);
        void pop();
        int get(int);
        int size();
        bool empty();
        void print();
    private:
        int* arr;
        int length;
        int last;
        void insertNulls();
        void copyArray(bool);
        void move();
};
#endif
