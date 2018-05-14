#include <iostream>
#ifndef VECTOR_HPP
#define VECTOR_HPP

struct Vector {
    private:
        struct Node {
            std :: string value;
            Node* next;
            Node() : next(nullptr) {};
        };
        Node* first;
        Node* last;
        int length;
    public:
        Vector();
        ~Vector();
        void add(std :: string);
        bool remove(std :: string);
        bool empty();
        void print();
};

#endif
