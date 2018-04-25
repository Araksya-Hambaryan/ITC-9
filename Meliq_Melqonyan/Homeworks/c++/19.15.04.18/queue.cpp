#include <iostream>
#include "queue.hpp"

Queue :: Queue() {
    length = 5;
    last = 0;
    arr = new int[length];
    insertNulls();
}

Queue :: Queue(int length) {
    this -> length = length;
    last = 0;
    arr = new int[length];
    insertNulls();
}

Queue :: ~Queue() {
    delete[] arr;
}

void Queue :: push(int num) {
    if(last >= length) {
        copyArray(false);
    }
    move();
    arr[0] = num;
    ++last;
}

void Queue :: pop() {
    if (0 == last) {
        return;
    }
    if (5 == length - last) {
        copyArray(true);
    }
    arr[--last] = 0;
}

void Queue :: move() {
    for (int i = last; i > 0; --i) {
        arr[i] = arr[i - 1];
    }
}

void Queue :: copyArray(bool cut) {
    if (cut) {
        length -= 5;
    } else {
        length += 5;
    }
    int* tempArr = new int[length];
    for(int i = 0; i < length; ++i) {

        if(i < last) {
            tempArr[i] = arr[i];
        } else {
            tempArr[i] = 0;
        }
    }
    delete[] arr;
    arr = tempArr;
    tempArr = NULL;
}

void Queue :: insertNulls() {
    for(int i = 0; i < length; ++i) {
        arr[i] = 0;
    }
}

bool Queue :: empty() {
    return length == 0;
}

int Queue :: size() {
    return length;
}

void Queue :: print() {
    if(empty()) {
        return;
    }
    for(int i = 0; i < last; ++i) {
        std :: cout << arr[i] << " ";
    }
    std :: cout << std :: endl;
}
