#ifndef VECTOR
#define VECTOR

#include <iostream>

class Vector {
protected:
    int size;
    int number;
    int* array;

public:
    Vector();
    Vector(const int, const int);
    void push(const int);
    void pop();
    int Size();
    void pushFront(const int);
    void popFront();
    int element(const int);
    void printVector() const;
    void insert(const int, const int);
    void eraise(const int);
    Vector(const Vector& obj);
    Vector(Vector&& obj);
};


#endif
