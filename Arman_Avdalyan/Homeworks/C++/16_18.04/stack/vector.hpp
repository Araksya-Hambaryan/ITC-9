#ifndef VECTOR_HPP
#define VECTOR_HPP

class Vector {
    public:
        Vector();
        Vector(int size);
        Vector(int size, int firstElement);
        Vector(const Vector&);
        Vector(Vector&&);
        ~Vector();
        void pushBack(int num);
        void popBack();
        void pushFront(int num);
        void popFront();
        void insert(int index, int num);
        void erase(int index);
        bool empty();
        int size();
        int get(int index);
    private:
        int* arr;
        int lastIndex;
        int length;
        void insertNulls();
        void copyArray();
        void cut();
};

#endif
