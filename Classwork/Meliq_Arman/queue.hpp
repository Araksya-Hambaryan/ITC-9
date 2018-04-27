#ifndef QUEUE_HPP
#define QUEUE_HPP

class Queue {
    public:
        Queue();
        Queue(const Queue&);
        Queue(Queue&&);
        ~Queue();
        void push(int);
        bool pop();
        int get(int index);
        bool empty();
        int size();
        void print();
    private:
        struct Node {
            int value;
            Node* next;
            Node() : next(nullptr) {};

        };
        Node* head;
        Node* tail;
        int length;
};
#endif
