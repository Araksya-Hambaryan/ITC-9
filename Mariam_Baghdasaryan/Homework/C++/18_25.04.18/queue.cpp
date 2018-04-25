#include "queue.hpp"
#include <iostream>

Queue :: Queue() {
    std :: cout << "Default constructor" << std :: endl;
    this -> mSize = 5;
    this -> lastIndex = this -> mSize;
    this -> mArray = new int[lastIndex];
    for (int i = 0; i < lastIndex; ++i) {
        mArray[i] = i;
    }
}

Queue :: Queue(int size, int value) {
    std :: cout << "Parametrized constructor" << std :: endl;
    this -> mSize = size;
    this -> lastIndex = this -> mSize;
    this -> mArray = new int[lastIndex];
    for (int i = 0; i < lastIndex; ++i) {
        mArray[i] = value;
    }
}

Queue :: Queue(const Queue& object) {
    std :: cout << "Copy constructor" << std :: endl;
    this -> mSize = object.mSize;
    this -> lastIndex = this -> mSize;
    this -> mArray = new int[lastIndex];
    for (int i = 0; i < lastIndex; ++i) {
        this -> mArray[i] = object.mArray[i];
    }
}

Queue :: ~Queue() {
    std :: cout << "Destructor" << std :: endl;
    delete[] mArray;
    mArray = nullptr;
}

void Queue :: push(int value) {
    if (lastIndex == mSize) {
        int temp = mSize;
        mSize += 5;
        int* tempArray = new int[mSize];
        for (int i = 0; i <= temp; ++i) {
            tempArray[i] = mArray[i]; 
        }
        delete[] mArray;
        mArray = tempArray;
    }
    mArray[lastIndex] = value;
    ++lastIndex;
}

void Queue :: pop() {
    if (5 == (mSize - lastIndex)) {
        mSize -= 5;
        int* tempArray = new int[mSize];
        for (int i = 0; i < mSize; ++i) {
            tempArray[i] = mArray[i];
        }
        delete[] mArray;
        mArray = tempArray;
    }
    for (int i = 0; i < lastIndex - 1; ++i) {
        mArray[i] = mArray[i + 1];
    }
    mArray[--lastIndex] = 0;
}

void Queue :: print() {
    for (int i = 0; i < mSize; ++i) {
        std :: cout << mArray[i] << " ";
    }
    std :: cout << std :: endl;
}

void Queue :: size() {
    std :: cout << "Size of queue : " << mSize << std :: endl;
}
