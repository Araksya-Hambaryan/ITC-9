#include "vector.hpp"

Vector :: Vector() {
    m_length = 10;
    lastIndex = 0;
    m_array = new int[m_length];
    insert();
}

Vector :: Vector(int length, int value) {
    this -> m_length = length;
    m_array = new int[m_length];
    for (int i = 0; i < m_length; ++i) {
        m_array[i] = value;
    }
}

Vector :: Vector(const Vector& object) {
    this -> m_length = object.m_length;
    this -> lastIndex = object.lastIndex;
    m_array = new int[m_length];
    for (int i = 0; i < m_length; ++i) {
        m_array[i] = object.m_array[i];
    }
}

Vector :: Vector(Vector&& object) {
    this -> m_array = object.m_array;
    this -> m_length = object.m_length;
    this -> lastIndex = object.lastIndex;
    object.m_array = nullptr;
}

Vector :: ~Vector() {
    delete[] m_array;
    m_array = nullptr;
}

void Vector :: push(int number) {
    if (lastIndex > m_length) {
        copyArray();
    }
    m_array[lastIndex++] = number;
}

int Vector :: pop() {
    int temp = m_array[--lastIndex];
    m_array[lastIndex] = 0;
    return temp;
}

int Vector :: size() {
    return m_length;
}

int Vector :: get(int index) {
    return m_array[index];
}

void Vector :: insert() {
    for (int i = 0; i < m_length; ++i) {
        m_array[i] = 0;
    }
}

void Vector :: copyArray() {
    int temp = m_length;
    m_length += 10;
    int* tempArray = new int[m_length];
    for (int i = 0; i < m_length; ++i) {
        if (i <= temp) {
            tempArray[i] = m_array[i];
        } else {
            tempArray[i] = 0;
        }
    }
    delete[] m_array;
    m_array = tempArray;
}

