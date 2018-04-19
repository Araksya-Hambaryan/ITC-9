#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>

class Vector {
public:
    void pushBack(int val);
    void popBack();
    void pushFront(int val);
    void popFront();
    void insert(int index, int val);
    void erase(int index);
    void printVector();
    int getSize();
    int getVal(int index);
    Vector();
    Vector(int count, int val);
    Vector(const Vector& obj);
    Vector(Vector&& obj);
    ~Vector();
private:
    int* m_vec;
    int m_size;
};

#endif
