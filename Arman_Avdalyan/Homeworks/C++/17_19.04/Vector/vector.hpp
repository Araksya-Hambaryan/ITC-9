#ifndef VECTOR_HPP
#define VECTOR_HPP
#include "../var/var.hpp"
// vector.cpp

class Vector {
    public:
        Vector();
        Vector(int size);
        Vector(int size, Var firstElement);
        Vector(const Vector&);
        Vector(Vector&&);
        ~Vector();
        void pushBack(Var* value);
        void popBack();
        void pushFront(Var* value);
        void popFront();
        void insert(int index, Var* value);
        void erase(int index);
        bool empty();
        int size();
        int get(int index);
        void print();
    private:
        Var** arr;
        int lastIndex;
        int length;
        void insertNulls();
        void copyArray();
        void cut();
};

#endif
