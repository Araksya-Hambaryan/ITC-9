#include <iostream>
#include "tree.hpp"

BBTree::BBTree() {
    this->size = 0;
    root = nullptr;
    std::cout << "Default constructor works!" << std::endl;
}

BBTree::BBTree(BBTree& tr) {
    std::cout << "Copy constructor works!" << std::endl;
}

BBTree::BBTree(BBTree&& tr) {
    std::cout << "Move constructor works!" << std::endl;
}

BBTree::~BBTree() {
    std::cout << "Delete constructor works!" << std::endl;
/*    Node* temp;
    while(head != nullptr) {
        temp = head->next;
        delete head;
        head = temp;
    }
    delete head;*/
}

void BBTree::insert(int value, Node* head) {
    Node* temp = new Node;
    temp->value = value;
    if(nullptr == head) {
        head = temp;
        temp = nullptr;
        return;  
    }
    if(head->value > value) {
        temp = head->left;
        insert(value, temp);
    } else if(head->value < value) {
        temp = head->right;
        insert(value, temp);
    } else {
        return;
    }
}

void BBTree::remove(int value) {
/*    if(index > this->size || 0 > index) {
        std::cout << "Wrong index!" << std::endl;
    } else {
        Node* temp = head;
        int count = 0;
        while(count < index - 1) {
            temp = temp->next;
            ++count;
        }
        Node* tempAddress = temp->next->next;
        temp->next = nullptr;
        temp->next = tempAddress;
        --this->size;       
    }*/
}


int BBTree::getSize() {
    return this->size;
}

void BBTree::printBBTree(Node* head) {
    Node* temp = head;
    if(nullptr == head) {
        std::cout << "End" << std::endl;
        delete temp;
        temp = nullptr;
        return;  
    }
    if(head->value > value) {
        temp = head->left;
        insert(value, temp);
    } else if(head->value < value) {
        temp = head->right;
        insert(value, temp);
    } else {
        return;
    }
}



