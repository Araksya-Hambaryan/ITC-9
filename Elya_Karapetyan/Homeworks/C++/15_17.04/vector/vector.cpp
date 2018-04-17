#include <iostream>
#include "vector.hpp"

void Vector::insert(const int index, const int value) {
    if (0 > index || m_size < index) {
        std::cout << "Invalid index!" << std::endl;
        return;
    }
    int* tmp = m_array;
    m_array = new int[++m_size];
    for (int i = 0; i < index; ++i) {
        m_array[i] = tmp[i];
    }
    m_array[index] = value;
    for (int i = index + 1; i < m_size; ++i) {
        m_array[i] = tmp[i - 1];
    }
    delete[] tmp;
}

void Vector::push_back(const int value) {
    insert(m_size, value);
}                   

void Vector::erase(const int index) {
    if (0 > index || m_size < index) {
        std::cout << "Invalid index!" << std::endl;
        return;
    }
    int* tmp = m_array;
    m_array = new int[--m_size];
    for (int i = 0; i < m_size; ++i) {
        if (i < index) {
            m_array[i] = tmp[i];
        } else {
            m_array[i] = tmp[i + 1];
        }
    }
    delete[] tmp;
}

void Vector::pop_back() {
    erase(m_size - 1);
}

int Vector::size() const {
    return m_size;
}

void Vector::printVector() const {
    std::cout << "\nVector -> ";
    for (int i = 0; i < m_size; ++i) {
        std::cout << m_array[i] << " ";
    } 
    std::cout << std::endl << std::endl;
}

Vector::Vector() : m_array(nullptr)
         , m_size(0) {};

Vector::Vector(const int size, const int value) : m_size(size) {
    m_array = new int[size];
    for (int i = 0; i < m_size; ++i) {
        m_array[i] = value;
    }
}

Vector::Vector(const Vector& object) {
    m_size = object.m_size;
    m_array = new int[m_size];
    for (int i = 0; i < m_size; ++i) {
        m_array[i] = object.m_array[i];
    }
    
}

Vector::Vector (Vector&& object) {
    m_array = object.m_array;
    m_size = object.m_size;
    object.m_size = 0;
    object.m_array = nullptr;
}

Vector::~Vector() {
    delete[] m_array;
    m_array = nullptr;
}


