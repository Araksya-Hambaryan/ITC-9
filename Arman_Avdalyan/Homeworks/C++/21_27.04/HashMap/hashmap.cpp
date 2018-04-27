#include <iostream>
#include <cmath>
#include "hashmap.hpp"

HashMap :: HashMap() {
    size = 20;
    arr = new Node*[size];
}

HashMap :: HashMap(const HashMap& obj) {
    size = obj.size;
    arr = new Node*[size];
    Node* temp = nullptr;
    Node* objNode = nullptr;
    for (int i = 0; i < size; ++i) {
        objNode = obj.arr[i];
        while (objNode != nullptr) {
            add(objNode -> key, objNode -> value);
            objNode = objNode -> next;
        }
    }
}

HashMap :: ~HashMap() {
    Node* temp = nullptr;
    Node* oldNode = nullptr;
    for (int i = 0; i < size; ++i) {
        temp = arr[i];
        while (temp != nullptr) {
            oldNode = temp;
            temp = temp -> next;
            delete oldNode;
        }
    }
    delete[] arr;
}

bool HashMap :: add(std :: string key, std :: string value) {
    int index = hashCode(key);
    Node* newNode = new Node;
    newNode -> key = key;
    newNode -> value = value;
    if (nullptr == arr[index]) {
        arr[index] = newNode;
        return true;
    }
    Node* temp = arr[index];
    while (nullptr != temp -> next) {
        if (temp -> key == key) {
            return false;
        }
        temp = temp -> next;
    }
    temp -> next = newNode;
}

bool HashMap :: get(std :: string key, std :: string& value) {
    int index = hashCode(key);
    if (nullptr == arr[index]) {
        return false;
    }
    Node* temp = arr[index];
    while (temp != nullptr) {
        if (temp -> key == key) {
            value = temp -> value;
            return true;
        }
        temp = temp -> next;
    }
    return false;
}

bool HashMap :: remove(std :: string key) {
    int index = hashCode(key);
    if (nullptr == arr[index]) {
        return false;
    }
    bool hasKey = false;
    Node* temp = arr[index];
    Node* prev = temp;
    if (temp -> key == key) {
        arr[index] = temp -> next;
    }
    while (nullptr != temp) {
        if (temp -> key == key) {
            if (nullptr != temp -> next) {
                std :: cout << "Temp = " << temp << "prev = " << prev;
                prev -> next = temp -> next;
                delete temp;
            }
            delete temp;
        }
        prev = temp;
        temp = temp -> next;
    }
    if (!hasKey) {
        return false;
    }
    return true;
}

bool HashMap :: update(std :: string key, std :: string value) {
    int index = hashCode(key);
    if (nullptr == arr[index]) {
        return false;
    }
    Node* temp = arr[index];
    while (nullptr != temp) {
        if (temp -> key == key) {
            temp -> value = value;
            return true;
        }
        temp = temp -> next;
    }
    return false;
}

int HashMap :: hashCode(std :: string key) {
    int index = 0;
    for (int i = 0; key[i] != '\0'; ++i) {
        index += static_cast<int>(key[i]);
    }
    index = index / 31 - index % size + size / 4;
    if (index >= size) {
        index = index % size;
    }
    if (index < 0 || index > size) {
        return 0;
    }
    return index;
}
