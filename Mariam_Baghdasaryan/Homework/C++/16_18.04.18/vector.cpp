#include "vector.hpp"

Vector :: Vector() {
    m_length = 10;
    lastIndex = 0;
    m_array = new int[m_length];
    insertNulls();
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

void Vector :: pushBack(int value) {
    insert(lastIndex, value);
}

void Vector :: popBack() {
    erase(lastIndex - 1);
}

void Vector :: pushFront(int value) {
    insert(0, value);
}

void Vector :: popFront() {
    erase(0);
}

int Vector :: size() {
    return lastIndex;
}

int Vector :: get(int index) {
    return m_array[index];
}

void Vector :: insert(int index, int value) {
    if (lastIndex == m_length) {
        copyArray();
    }
    for (int i = lastIndex; i > index; --i) {
        m_array[i] = m_array[i - 1];
    }
    m_array[index] = value;
    ++lastIndex;
}

void Vector :: erase(int index) {
    if (5 == (m_length - lastIndex)) {
        cut();
    }
    for (int i = index; i < lastIndex - 1; ++i) {
        m_array[i] = m_array[i + 1];
    }
    --lastIndex;
    m_array[lastIndex] = 0;
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

void Vector :: cut() {
    m_length -= 5;
    int* tempArray = new int[m_length];
    for (int i = 0; i < m_length; ++i) {
        tempArray[i] = m_array[i];
    }
    delete[] m_array;
    m_array = tempArray;
}

void Vector :: insertNulls() {
    for (int i = 0; i < m_length; ++i) {
        m_array[i] = 0;
    }
}

void Vector :: printVector() const {
    for (int i = 0; i < m_length; ++i) {
        std :: cout << m_array[i] << " ";
    }
    std :: cout << std :: endl;
}
