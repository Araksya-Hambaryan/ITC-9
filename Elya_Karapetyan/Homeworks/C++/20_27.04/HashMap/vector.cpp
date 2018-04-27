#include <iostream>
#include "vector.hpp"

Vector::Vector() : m_size(5) {
    m_array = new List[m_size];
}

Vector::Vector(const int size) : m_size(size) {
    m_array = new List[size];
}

Vector::Vector(const Vector& object) {
    m_size = object.m_size;
    m_array = new List[m_size];
    for (int i = 0; i < m_size; ++i) {
        m_array[i] = object.m_array[i];
    }
    
}

Vector::~Vector() {
    delete[] m_array;
    m_array = nullptr;
}

bool Vector::insert(const int index, const std::string key, const int value) {
    return m_array[index].push_front(key, value) ;
}

bool Vector::getValueByKey(int index, std::string key, int& value) {
    return m_array[index].getValueByKey(key, value) ;
}

bool Vector::getKeyByValue(std::string& key, int value) {
    for (int i = 0; i < m_size; ++i) {
        if (m_array[i].getKeyByValue(key, value)) {
            return true;
        }
    }
    return false;
}

bool Vector::deleteByKey(int index, std::string key, int& value) {
    return m_array[index].deleteByKey(key, value);
}

int Vector::size() const {
    return m_size;
}

void Vector::clear() {
    for (int i = 0; i < m_size; ++i) {
        m_array[i].clear();
    }
}

void Vector::printVector() const {
    for (int i = 0; i < m_size; ++i) {
        m_array[i].printList();
        std::cout << std::endl;
    } 
    std::cout << std::endl << std::endl;
}

