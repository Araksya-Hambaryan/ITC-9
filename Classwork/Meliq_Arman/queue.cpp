#include <iostream>
#include "queue.hpp"

Queue :: Queue () {
    head = nullptr;
    tail = nullptr;
    length = 0;
}

Queue :: Queue (const Queue& obj) {
    std :: cout << "\nCopy\n";
    this -> length = obj.length;
    Node* newNode = new Node;
    head = newNode;
    newNode -> value = obj.head -> value;
    Node* temp = obj.head;
    Node* myTemp = this -> head;
    for (int i = 1; i < length; ++i) {
        temp = temp -> next;
        Node* newNode = new Node;
        newNode -> value = temp -> value;
        myTemp -> next = newNode;
        myTemp = myTemp -> next;
    }
}

Queue :: Queue(Queue&& obj) {
    std :: cout << "\nMove\n";
    this -> head = obj.head;
    obj.head = nullptr;
}

Queue :: ~Queue() {
    Node* temp = head;
    while (nullptr != head) {
        temp = head;
        head = head -> next;
        delete temp;
    }
    head = nullptr;
}

void Queue :: push(int num) {
    ++length;
    Node* newNode = new Node;
    newNode -> value = num;
    if (nullptr == head) {
        head = newNode;
        tail = head;
    } else {
        newNode -> next = head;
        head = newNode;
    }
}

bool Queue :: pop() {
    if (empty()) {
        return false;
    }
    --length;
    Node* temp = head;
    while (temp -> next != tail) {
        temp = temp -> next;
    }
    delete tail;
    tail = temp;
    return true;
}

int Queue :: get(int index) {
    if (index > length) {
        return 0;
    }
    Node* temp = head;
    for (int i = 0; i < index; ++i) {
        temp = temp -> next;
    }
    return temp -> value;
}

bool Queue :: empty() {
    return length == 0;
}

int Queue :: size() {
    return length;
}

void Queue :: print() {
    if (empty()) {
        return;
    }
    Node* temp = head;
    for (int i = 0; i < length; ++i) {
        std :: cout << temp -> value << " ";
        temp = temp -> next;
    }
}

