#include "vector.hpp"

Vector :: Vector() {
    first = nullptr;
    last = nullptr;
    length = 0;
}

Vector :: ~Vector() {
    Node* temp = first;
    while (nullptr != first) {
        temp = first;
        delete temp;
        first = first -> next;
    }
    first = nullptr;
}

void Vector :: add(std :: string str) {
    ++length;
    Node* newNode = new Node();
    newNode -> value = str;
    newNode -> next = nullptr;
    if (nullptr == first) {
        first = newNode;
        last = first;
    } else {
        last -> next = newNode;
        last = last -> next;
    }
}

bool Vector :: remove(std :: string str) {
    if (empty()) {
        return false;
    }
    Node* temp = first;
    Node* prev = first;
    while (nullptr != temp) {
        if (!str.compare(temp -> value)) {
            prev -> next = temp -> next;
            delete temp;
            temp = nullptr;
            --length;
            return true;
        }
        prev = temp;
        temp = temp -> next;
    }
    return true;
}

bool Vector :: empty() {
    return 0 == length;
}

void Vector :: print() {
    if (empty()) {
        return;
    }
    Node* temp = first;
    while (nullptr != temp) {
        std :: cout << temp -> value << " ";
        temp = temp -> next;
    }
}
