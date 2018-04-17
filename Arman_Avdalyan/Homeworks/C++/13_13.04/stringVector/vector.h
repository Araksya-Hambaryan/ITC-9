#include <iostream> // include iostream here because it needs in 3 files at once
#ifndef VECTOR_H
#define VECTOR_H

struct Vector {
    public:
        Vector();
        ~Vector();
        void add(std :: string);
        bool remove(std :: string);
        bool empty();
        int size();
        void print();
    private:
        struct Node {
            std :: string value;
            Node* next;
            Node() : next(nullptr){};
        };
        Node* head;
        Node* tail;
        int length;
};

#endif
