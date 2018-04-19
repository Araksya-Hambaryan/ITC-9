#include "vector.hpp"

Vector :: Vector() {
    length = 10;
    lastIndex = 0;
    arr = new int[length];
    insertNulls();
}

Vector :: Vector(int length) {
    this -> length = length;
    lastIndex = 0;
    arr = new int[length];
    insertNulls();
}

Vector :: Vector(int length, int firstElement) {
    this -> length = length;
    arr = new int[length];
    insertNulls();
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

void Vector :: pushBack(int num) {
    insert(lastIndex, num);
}

void Vector :: popBack() {
    erase(lastIndex - 1);
}

void Vector :: pushFront(int num) {
    insert(0, num);
}

void Vector :: popFront() {
    erase(0);
}

int Vector :: get(int index) {
    return arr[index];
}

bool Vector :: empty() {
    return 0 == lastIndex;
}

int Vector :: size() {
    return lastIndex;
}

void Vector :: insert(int index, int num) {
    if (lastIndex == length) {
        copyArray();
    }
    for (int i = lastIndex; i > index; --i) {
        arr[i] = arr[i - 1];
    }
    arr[index] = num;
    ++lastIndex;
}

void Vector :: erase(int index) {
    if (5 == (length - lastIndex)) {
        cut();
    }
    for (int i = index; i < lastIndex - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    --lastIndex;
    arr[lastIndex] = 0;
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

void Vector :: cut() {
    length -= 5;
    int* tempArray = new int[length];
    for (int i = 0; i < length; ++i) {
        tempArray[i] = arr[i];
    }
    delete[] arr;
    arr = tempArray;
}

void Vector :: insertNulls() {
    for (int i = 0; i < length; ++i) {
        arr[i] = 0;
    }
}
