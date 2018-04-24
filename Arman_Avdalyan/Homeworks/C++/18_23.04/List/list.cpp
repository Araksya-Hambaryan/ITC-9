#include <iostream>
#include "list.hpp"

List :: List () {
    head = nullptr;
    tail = nullptr;
    length = 0;
}

List :: List (const List& obj) {
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

List :: List(List&& obj) {
    std :: cout << "\nMove\n";
    this -> head = obj.head;
    obj.head = nullptr;
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

void List :: push(int num) {
    ++length;
    Node* newNode = new Node;
    newNode -> value = num;
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
    --length;
    Node* temp = head;
    while (temp -> next != tail) {
        temp = temp -> next;
    }
    delete tail;
    tail = temp;
}

bool List :: insert(int index, int num) {
    if (index > length) {
        return false;
    }
    ++length;
    Node* newNode = new Node;
    newNode -> value = num;
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
    --length;
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

int List :: get(int index) {
    if (index > length) {
        return 0;
    }
    Node* temp = head;
    for (int i = 0; i < index; ++i) {
        temp = temp -> next;
    }
    return temp -> value;
}

bool List :: empty() {
    return length == 0;
}

int List :: size() {
    return length;
}

void List :: print() {
    if (empty()) {
        return;
    }
    Node* temp = head;
    for (int i = 0; i < length; ++i) {
        std :: cout << temp -> value << " ";
        temp = temp -> next;
    }
}
