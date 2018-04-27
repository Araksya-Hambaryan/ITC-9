#include <iostream>
#include "hMap.hpp"

int HMap::hash(int key) {
    return key/10;



}

HMap::HMap() {
    this->size = 0;
    array = new Node*[10];
    std::cout << "Default constructor works!" << std::endl;
}

HMap::HMap(HMap& hM) {
    std::cout << "Copy constructor works!" << std::endl;
}

HMap::HMap(HMap&& hM) {
    std::cout << "Move constructor works!" << std::endl;
}

HMap::~HMap() {
    std::cout << "Delete constructor works!" << std::endl;
/*    Node* temp;
    while(head != nullptr) {
        temp = head->next;
        delete head;
        head = temp;
    }
    delete head;*/
}

void HMap::add(int key, std::string value) {
    int index = hash(key);
    array[index] = new Node*

/*    if(index > this->size || 0 > index) {
        std::cout << "Wrong index!" << std::endl;
    } else {
        Node* newNode = new Node;
        newNode->value = value;
        newNode->next = nullptr;
        Node* temp = head;
        int count = 0;
        while(count < index - 1) {
            temp = temp->next;
            ++count;
        }
        newNode->next = temp->next; 
        temp->next = newNode;
        ++this->size;
    }*/
}

void HMap::update(int key, std::string value) {
 /*  if(index > this->size || 0 > index) {
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
    }
}


int HMap::getSize() {
    return size;*/
}

void HMap::remove(int key) {



}

std::string HMap::get(int key) {
/*    if(index < this->size && size > 1) {
        Node* temp = head;
        int count = 0;
        while(count != index) {
            temp = temp->next;
            ++count;
        }
        return temp->value;
    } else {
        std::cout << "The list hasn't " << index << "-th element" << std::endl;
        return 0;
    }*/
}

/*void HMap::printHMap() {
    if(head == nullptr) {
        std::cout << "Empty list!" << std::endl;
    } else {
        Node* temp = head;
        while(temp->next != nullptr) {
            std::cout << temp->value << " ";
            temp = temp->next;
        }
        std::cout << temp->value;
        std::cout << std::endl;
    }
}*/



