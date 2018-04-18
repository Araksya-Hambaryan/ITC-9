#ifndef VECTOR_HPP
#define VECTOR_HPP

class Vector {
public:
    void insert(const int index, const int value);
    void push_back(int value);
    void erase(const int index);
    void pop_back();
    int size() const;
    void printVector() const;
    
    Vector();
    Vector(int size, int value);
    Vector(const Vector& object);
    Vector(Vector&& object);
    ~Vector();
private:
    int* m_array;
    int m_size;
};

#endif
