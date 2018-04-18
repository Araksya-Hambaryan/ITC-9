#include "vector.h"

Vector :: Vector() {
    length = 10;
    lastIndex = 0;
    arr = new int[length];
    insert();
}

Vector :: Vector(int length) {
    this -> length = length;
    lastIndex = 0;
    arr = new int[length];
    insert();
}

Vector :: Vector(int length, int firstElement = 0) {
    this -> length = length;
    arr = new int[length];
    insert();
    arr[0] = firstElement;
    lastIndex = 1;
}

Vector :: Vector(const Vector& obj) {
    this -> length = obj.length;
    this -> lastIndex = obj.lastIndex;
    arr = new int[length];
    for (int i = 0; i < length; ++i) {
        arr[i] = obj.arr[i];
    }
}

Vector :: Vector(Vector&& obj) {
    this -> length = obj.length;
    this -> lastIndex = obj.lastIndex;
    this -> arr = obj.arr;
    obj.arr = nullptr;
}

Vector :: ~Vector() {
    delete[] arr;
    arr = nullptr;
}

void Vector :: push(int num) {
    if (lastIndex > length) {
        copyArray();
    }
    arr[lastIndex++] = num;
}

int Vector :: pop() {
    int temp = arr[--lastIndex];
    arr[lastIndex] = 0;
    return temp;
}

int Vector :: get(int index) {
    return arr[index];
}


bool Vector :: empty() {
    return 0 == length;
}

int Vector :: size() {
    return length;
}

void Vector :: copyArray() {
    int temp = length;
    length += 10;
    int* tempArray = new int[length];
    for (int i = 0; i < length; ++i) {
        if (i <= temp) {
            tempArray[i] = arr[i];
        } else {
            tempArray[i] = 0;
        }
    }
    delete[] arr;
    arr = tempArray;
}

void Vector :: insert() {
    for (int i = 0; i < length; ++i) {
        arr[i] = 0;
    }
}
