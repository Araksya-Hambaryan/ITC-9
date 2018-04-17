#include <iostream>
#include "vector.hpp"

Vector::Vector() {
    int* vector = nullptr;
    std::cout << "Default constructor works!" << std::endl;
}

Vector::Vector(Vector& vec) {
    std::cout << "Copy constructor works!" << std::endl;
    vec.vector = new int[size + 10];
    for(int i = 0; i < size; ++i) {
        vec.vector[i] = vector[i];
    }
}

void Vector::buildArr(int n, int fill) {
    vector = new int[n+10];
    size = n;
    for(int i = 0; i < size; ++i) {
        vector[i] = fill;
    }
}

int Vector::getSize() {
    return size;
}

int* Vector::getVector() {
    return vector;
}

int Vector::getElem(int index) {
    return vector[index];
}

void Vector::push(int newElem) {
    ++size;
    vector[size] = newElem;
    static int count = 0;
    ++count;
    if(0 == count%10) {
//        Vector tempVec;///can I use copy constructor here?
        int* tempVec = new int[size + 10];
        for(int i = 0; i < size; ++i) { 
            tempVec[i] = vector[i]; 
        }  
    delete vector; 
    vector = tempVec; 
    std::cout << "We pushed more than 10 time" << std::endl;
    }
}

void Vector::pop() {
    vector[size] = 0;////????
    --size;
}

//move constructor in progress
//destructor in progress
