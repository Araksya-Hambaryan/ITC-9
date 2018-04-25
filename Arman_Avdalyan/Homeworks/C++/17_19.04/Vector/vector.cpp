#include "vector.hpp"
#include <string>

Vector :: Vector() {
    length = 10;
    lastIndex = 0;
    arr = new Var*[length];
    insertNulls();
}

Vector :: Vector(int length) {
    this -> length = length;
    lastIndex = 0;
    arr = new Var*[length];
    insertNulls();
}

Vector :: Vector(int length, Var firstElement) {
    this -> length = length;
    arr = new Var*[length];
    insertNulls();
    *arr[0] = firstElement;
    lastIndex = 1;
}

Vector :: Vector(const Vector& obj) {
    this -> length = obj.length;
    this -> lastIndex = obj.lastIndex;
    arr = new Var*[length];
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

void Vector :: pushBack(Var* value) {
    insert(lastIndex, value);
}

void Vector :: popBack() {
    erase(lastIndex - 1);
}

void Vector :: pushFront(Var* value) {
    insert(0, value);
}

void Vector :: popFront() {
    erase(0);
}

int Vector :: get(int index) {
    return arr[index] -> getValue();
}

bool Vector :: empty() {
    return 0 == lastIndex;
}

int Vector :: size() {
    return lastIndex;
}

void Vector :: insert(int index, Var* value) {
    if (lastIndex == length) {
        copyArray();
    }
    for (int i = lastIndex; i > index; --i) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
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
    *arr[lastIndex] = 0;
}

void Vector :: copyArray() {
    int temp = length;
    length += 10;
    Var** tempArray = new Var*[length];
    for (int i = 0; i < length; ++i) {
        if (i <= temp) {
            tempArray[i] = arr[i];
        } else {
            tempArray[i] = nullptr;
        }
    }
    delete[] arr;
    arr = tempArray;
}

void Vector :: cut() {
    length -= 5;
    Var** tempArray = new Var*[length];
    for (int i = 0; i < length; ++i) {
        tempArray[i] = arr[i];
    }
    delete[] arr;
    arr = tempArray;
}

void Vector :: insertNulls() {
    for (int i = 0; i < length; ++i) {
        arr[i] = new Var;
    }
}

void Vector :: print() {
    int temp = 0;
    std :: string tmpString = "";
    for (int i = 0; i < length; ++i) {
        temp = arr[i] -> getValue();
        tmpString += arr[i] -> getStrValue();
        if (-1 != temp) {
            tmpString += std::to_string(arr[i] -> getValue());
            tmpString += std::to_string(arr[i] -> getBool());
        }
    }
    std :: cout << tmpString << std :: endl;
}
