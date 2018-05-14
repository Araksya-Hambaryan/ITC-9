#ifndef VECTOR_HPP
#define VECTOR_HPP


class Vector{
    protected:
    int size;
    int countForPush;
    int countForPop;
    int* vector;
    public:
    Vector();
    Vector(Vector& vec);
    Vector(Vector&& vec);
    ~Vector();
//    void buildArr(int n, int fill); 
    Vector(int n, int fill); 
    int getSize();
    int* getVector();
    int getElem(int index);
    void push(int newElem);
    void pop();
    void printVec();
};

#endif

