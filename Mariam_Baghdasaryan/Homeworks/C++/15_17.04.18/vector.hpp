#ifndef VECTOR_HPP
#define VECTOR_HPP

class Vector {
    private:
        int* m_array;
        int m_length;
        int lastIndex;
        void insert();
        void copyArray();
    public:
        Vector();
        Vector(int, int);
        Vector(const Vector&);
        Vector(Vector&&);
        ~Vector();        
        void push(int);
        int pop();
        int size();
        int get(int);
};

#endif
