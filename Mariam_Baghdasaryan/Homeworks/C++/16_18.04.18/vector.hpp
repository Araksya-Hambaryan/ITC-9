#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>

class Vector {
public:
    Vector();
    Vector(int, int);
    Vector(const Vector&);
    Vector(Vector&&);
    ~Vector();
    void pushBack(int);
    void popBack();
    void pushFront(int);
    void popFront();
    void erase(int index);
    void insert(int, int);
    int size();
    int get(int);
    void printVector() const;
private:
    int* m_array;
    int m_length;
    int lastIndex;
    void insertNulls();
    void copyArray();
    void cut();                   
};

#endif
