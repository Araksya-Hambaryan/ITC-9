#include "vector.h"

Vector :: Vector () {
    head = nullptr;
    tail = nullptr;
    length = 0;
}

Vector :: ~Vector() {
    Node* temp = head;
    while (nullptr != head) {
        temp = head;
        delete temp;
        head = head -> next;
    }
    head = nullptr;
}


void Vector :: add(std :: string str) {
    ++length;
    Node* newNode = new Node();
    newNode -> value = str;
    newNode -> next = nullptr;
    if (nullptr == head) {
        head = newNode;
        tail = head;
    } else {
        tail -> next = newNode;
        tail = tail -> next;
    }
}

bool Vector :: remove(std :: string str) {
    if (empty()) {
        return false;
    }
    Node* temp = head;
    Node* prev = head;
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
    return length == 0;
}

int Vector :: size() {
    return length;
}

void Vector :: print() {
    if (empty()) {
        return;
    }
    Node* temp = head;
    while (nullptr != temp) {
        std :: cout << temp -> value << "  ";
        temp = temp -> next;
    }
}
