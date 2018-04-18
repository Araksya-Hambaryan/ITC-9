#include <iostream>
#include "vector.hpp"

void Vector::pushBack(int val) {  
    ++m_size;
    int* newVec = m_vec;
    m_vec = new int[m_size];
    for(int i =0; i < m_size - 1; ++i) {
        m_vec[i] = newVec[i];
    }
    m_vec[m_size - 1] = val;
    delete []newVec;
}                   

void Vector::popBack() {
    --m_size;
    int* newVec = m_vec;
    m_vec = new int[m_size];
    for(int i =0; i < m_size; ++i) {
        m_vec[i] = newVec[i];
    }
    delete []newVec;

}

void Vector::pushFront(int val) {  
    ++m_size;
    int* newVec = m_vec;
    m_vec = new int[m_size];
    m_vec[0] = val;
    for(int i =1; i < m_size; ++i) {
        m_vec[i] = newVec[i - 1];
    }
    delete []newVec;
}                   

void Vector::popFront() {
    --m_size;
    int* newVec = m_vec;
    m_vec = new int[m_size];
    for(int i =0; i < m_size; ++i) {
        m_vec[i] = newVec[i + 1];
    }
    delete []newVec;

}

void Vector::insert(int index, int val) {
    if (0 > index || m_size < index) {
        std::cout << "Sxal indexi mutqagrum \n";
        return;
    }
    ++m_size;
    int* newVec = m_vec;
    m_vec = new int[m_size];
    for (int i = 0; i < index; ++i) {
        m_vec[i] = newVec[i];
    }
    m_vec[index] = val;
    for (int i = index + 1; i < m_size; ++i) {
        m_vec[i] = newVec[i - 1];
    }
    delete []newVec;
}

void Vector::erase(int index) {
    if (0 > index || m_size < index) {
        std::cout << "Sxal indexi mutqagrum \n";
        return;
    }
    --m_size;
    int* newVec = m_vec;
    m_vec = new int[m_size];
    for (int i = 0; i < m_size; ++i) {
        if (i < index) {
            m_vec[i] = newVec[i];
        } else {
            m_vec[i] = newVec[i + 1];
        }
    }
    delete[] newVec;
}

void Vector::printVector() {
    for (int i = 0; i < m_size; ++i) {
        std::cout << m_vec[i] << "  ";
    } 
    std::cout << std::endl;
}

int Vector::getSize() {
    return m_size;
}

int Vector::getVal(int index) {
    return m_vec[index];
} 

Vector::Vector() {
    m_vec = nullptr;
    m_size = 0;
}

Vector::Vector(int count, int val) {
    if (0 < count) {
        m_vec = new int[count];
        for (int i = 0; i < count; ++i) {
            m_vec[i] = val;
        }
        m_size = count;
    }
}

Vector::Vector(const Vector& obj) {
    this->m_size = obj.m_size;
    this->m_vec = new int[m_size];
    for (int i = 0; i < m_size; ++i) {
        this->m_vec[i] = obj.m_vec[i];
    }
    
}

Vector::Vector (Vector&& obj) {
    this->m_vec = obj.m_vec;
    this->m_size = obj.m_size;
    obj.m_size = 0;
    obj.m_vec = nullptr;
}

Vector::~Vector() {
    delete []m_vec;
    m_vec = nullptr;
}
