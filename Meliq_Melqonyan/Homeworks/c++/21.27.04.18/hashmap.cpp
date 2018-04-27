#include <iostream>
#include <string>
#include "hashmap.hpp"

HashMap :: HashMap() {
    length = 180;
    arr = new Node[length];
}

HashMap :: ~HashMap() {
    Node* temp1;
    Node* temp2; 
    for(int i = 0; i < length; ++i) {
        temp1 = arr[i].next;
        while(temp1 != NULL) {
            temp2 = temp1;
            delete temp1;
            temp1 = temp2 -> next; 
        }
    }
    delete[] arr;
}

int HashMap :: hashCode(std :: string key) {
    return key[0] - 'A' + 1;
}

void HashMap :: add(std :: string key, std :: string value) {
    Node* newNode = new Node;
    newNode -> next = NULL;
    newNode -> value = value;
    newNode -> key = key;
    if(arr[hashCode(key)].next == NULL) {
        arr[hashCode(key)].next = newNode;
        return; 
    } 
    Node* temp = arr[hashCode(key)].next; 
    while(temp -> next != NULL) {
        if(temp -> key == key) {
            update(key, value);
                return;
        }
        temp = temp -> next;
    }
    temp -> next = newNode;
}

void HashMap :: update(std :: string key, std :: string value) {
    if(NULL == arr[hashCode(key)].next) {
        add(key, value); 
        return;
    }
    if(NULL != arr[hashCode(key)].next) {
        Node* temp = arr[hashCode(key)].next;
        while(temp -> next != NULL) {
            if (temp -> key == key) {
                temp -> value = value;
                return;
            }
            temp = temp -> next;
        }
    }
}

void HashMap :: remove(std :: string key) {
    if(NULL == arr[hashCode(key)].next) {
        return;
    }
    Node* temp = arr[hashCode(key)].next;
    Node* temp1 = temp;
    if(temp -> key == key) {
        arr[hashCode(key)].next = temp -> next;
        return;
    }
    while(((temp -> next) -> key != key) || (temp -> next != NULL)) {
        temp = temp -> next;
    }
    if((temp -> next) -> key == key ) {
    temp1 = temp -> next;
    temp -> next = temp1 -> next;
    delete temp1;
    }
}

std :: string  HashMap :: get(std :: string key) {
    if(NULL == arr[hashCode(key)].next) {
        return "Chka";
    }
    Node* temp = arr[hashCode(key)].next;
    while(temp -> next != NULL || temp -> key != key) {
        temp = temp -> next;
    }
    if(NULL == temp) {
        return "chka";
    }
    return temp -> value;
}







