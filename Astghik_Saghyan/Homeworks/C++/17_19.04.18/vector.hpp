#include "var.hpp"
#ifndef VECTOR_HPP
#define VECTOR_HPP


class Vector{
    protected:
    int size;
    int countForPush;
    int countForPop;
    Var* vector;
    public:
    Vector();
    Vector(Vector& vec);
    Vector(Vector&& vec);
    ~Vector();
    Vector(int n, Var fill); 
    int getSize();
    Var* getVector();
    Var getElem(int index);
    void push(Var newElem);
    void pop();
    void printVec();
};

#endif
