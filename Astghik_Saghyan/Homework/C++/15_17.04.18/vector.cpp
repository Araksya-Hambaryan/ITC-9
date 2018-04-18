#include <iostream>
#include "vector.hpp"

Vector::Vector() {
    int* vector = nullptr;
    std::cout << "Default constructor works!" << std::endl;
}

Vector::Vector(Vector& vec) {
    std::cout << "Copy constructor works!" << std::endl;
    std::cout << "vec.size:\t" << vec.size << std::endl;
    this->vector = new int[vec.size+10];
    for(int i = 0; i < vec.size; ++i) {
        this->vector[i] = vec.vector[i];
        std::cout << vector[i] << " "; 
    }
    std::cout << std::endl;
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

void Vector::printVec() {
    for(int i = 0; i < size; ++i) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl;
}




//move constructor in progress
//destructor in progress
