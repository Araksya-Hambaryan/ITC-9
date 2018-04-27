#ifndef VECTOR_HPP
#define VECTOR_HPP

#include "list.hpp"

class Vector {
public:
    Vector();
    Vector(const int size);
    Vector(const Vector& object);
    ~Vector();
    bool insert(const int index, const std::string key, const int value);
    bool getValueByKey(int index, std::string key, int& value);
    bool getKeyByValue(std::string& key, int value);
    bool deleteByKey(int index, std::string key, int& value);
    int size() const;
    void clear();
    void printVector() const;
private:
    List* m_array;
    int m_size;
};

#endif
