#ifndef VECTOR_H
#define VECTOR_H

struct Vector {
    public:
        Vector();
        Vector(int size);
        Vector(int size, int firstElement);
        Vector(const Vector&);
        Vector(Vector&&);
        ~Vector();
        void push(int num);
        int pop();
        bool empty();
        int size();
        int get(int index);
    private:
        int* arr;
        int lastIndex;
        int length;
        void insert();
        void copyArray();
};

#endif
