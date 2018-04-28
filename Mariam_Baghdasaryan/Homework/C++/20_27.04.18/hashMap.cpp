#include "hashMap.hpp"
#include <iostream>

HashMap :: HashMap() {
    std :: cout << "Default constructor" << std :: endl;
    mSize = 10;
    mArray = new Node*[mSize];
    for (int i = 0; i < mSize; ++i) {
        mArray[i] = new Node;
    }
}

HashMap :: HashMap(const HashMap& object) {
    std :: cout << "Copy constructor" << std :: endl;
    this -> mSize = object.mSize;
    mArray = new Node*[mSize];
    for (int i = 0; i < mSize; ++i) {
        Node* temp = new Node;
        temp = object.mArray[i];
        while (nullptr != object.mArray[i]) {
            addNode(temp -> key, temp -> value);
            temp = temp -> next;
        }
        temp = nullptr;
    }
}

HashMap :: ~HashMap() {
    std :: cout << "Destructor" << std :: endl;
    Node* tempNode = new Node;
    for (int i = 0; i < mSize; ++i) {
        tempNode = mArray[i];
        while (nullptr != tempNode) {
            Node* temp = new Node;
            temp = tempNode;
            tempNode = tempNode -> next;
            delete temp;
            temp = nullptr;
        }
        delete tempNode;
        tempNode = nullptr;
    }
    delete[] mArray;
    mArray = nullptr;
}

void HashMap :: addNode(std :: string key, std :: string value) {
    int index = hashCode(key);
    Node* temp = mArray[index];
    Node* newNode = new Node;
    newNode -> key = key;
    newNode -> value = value;
    newNode -> next = nullptr;
    if (nullptr == mArray[index]) {
        mArray[index] = newNode;
    } else {
        while (nullptr != temp -> next) {
            if (temp -> key == key) {
                return;
            }
            temp = temp -> next;    
        }
        temp -> next = newNode;
    }
}

void HashMap :: updateNode(std :: string key, std :: string value) {
    int index = hashCode(key);
    if (nullptr == mArray[index]) {
        return;
    }
    Node* temp = mArray[index];
    while (temp -> key != key) {
        temp = temp -> next;
        if (nullptr == temp) {
            return;  
        }
    }
    temp -> value = value;
    temp = nullptr;
}

void HashMap :: deleteNode(std :: string key) {
    int index = hashCode(key);
    if (nullptr == mArray[index]) {
        return;
    }
    Node* tempNode = mArray[index];
    if (tempNode -> key == key) {
        mArray[index] = mArray[index] -> next;
        delete tempNode;
        tempNode = nullptr;
        return;
    }
    while (tempNode -> next != nullptr) {
        if (nullptr != tempNode -> next)
            tempNode -> next = tempNode -> next -> next;
            delete tempNode -> next;
            tempNode -> next = nullptr;
            return;
        tempNode = tempNode -> next;
    }
}

std :: string HashMap :: getNode(std :: string key) {
    int index = hashCode(key);
    Node* temp = mArray[index];
    while (temp -> key != key) {
        temp = temp -> next;
        if (nullptr == temp) {
            return "";
        }
    }
    std :: string value = temp -> value;
    temp = nullptr;
    return value;
}

int HashMap :: hashCode(std :: string key) {
    int index = 0;
    int i = 0;
    while ('\0' != key[i]) {
        index = (key[i] + 128 * index) % mSize;
        ++i;
    }
    return index;
}

void HashMap :: printNode(std :: string key) {
    int index = hashCode(key);
    Node* temp = mArray[index];   
    while (nullptr != temp) {
        if (temp -> key == key) {
            std :: cout << temp -> key << " : " << temp -> value << std :: endl;
        }
        temp = temp -> next;
    }
    std :: cout << std :: endl; 
}
