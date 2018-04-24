#include "list.hpp"
#include <iostream>

List :: List() {
    head = nullptr;
    tail = nullptr;
    mLength = 0;
}

List :: List(const List& object) {
    this -> mLength = object.mLength;
    Node* newNode = new Node;
    head = newNode;
    newNode -> mValue = object.head -> mValue;
    Node* temp = object.head;
    Node* newTemp = this -> head;
    for (int i = 1; i < mLength; ++i) {
        temp = temp -> next;
        Node* newNode = new Node;
        newNode -> mValue = temp -> mValue;
        newTemp -> next = newNode;
        newTemp = newTemp -> next;
    } 
}

List :: List(List&& object) {
    this -> head = object.head;
    object.head = nullptr;
}

List :: ~List() {
    Node* temp = head;
    while (nullptr != head) {
        temp = head;
        head = head -> next;
        delete temp;
    }
    head = nullptr;
}

void List :: push(int value) {
    ++mLength;
    Node* newNode = new Node;
    newNode -> mValue = value;
    newNode -> next = nullptr;
    if (nullptr == head) {
        head = newNode;
        tail = head;
    } else {
        tail -> next = newNode;
        tail = tail -> next;
    }
}

void List :: pop() {
    --mLength;
    Node* temp = head;
    while (tail != temp -> next) {
        temp = temp -> next;
    }
    delete tail;
    tail = temp;
}

bool List :: insert(int index, int value) {
    if (index > mLength) {
        return false;
    }
    ++mLength;
    Node* newNode = new Node;
    newNode -> mValue = value;
    if (0 == index) {
        newNode -> next = head;
        head = newNode;
        return true;
    }
    Node* temp = head;
    for (int i = 1; i < index; ++i) {
        temp = temp -> next;
    }
    newNode -> next = temp -> next;
    temp -> next = newNode;
    return true;
}

bool List :: erase(int index) {
    if (empty()) {
        return false;
    }
    --mLength;
    Node* temp = head;
    if (0 == index) {
        head = head -> next;
        delete temp;
        return true;
    }
    Node* oldNode = nullptr;
    for (int i = 1; i < index; ++i) {
        temp = temp -> next;
    }
    oldNode = temp -> next;
    temp -> next = oldNode -> next;
    delete oldNode;
    return true;
}

bool List :: empty() {
    return 0 == mLength;
}

int List :: get(int index) {
    if (index > mLength) {
        return 0;
    }
    Node* temp = head;
    for (int i = 0; i < index; ++i) {
        temp = temp -> next;
    }
    return temp -> mValue;
}

int List :: size() {
    return mLength;
}

void List :: print() {
    if (empty()) {
        return;
    }
    Node* temp = head;
    for (int i = 0; i < mLength; ++i) {
        std :: cout << temp -> mValue << " ";
        temp = temp -> next;
    }
    std :: cout << std :: endl;
}
