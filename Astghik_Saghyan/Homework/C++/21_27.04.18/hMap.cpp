#include <iostream>
#include "hMap.hpp"

int HMap::hash(int key) {
    return key/10;
}

bool HMap::isEmpty() {
    return 0 == size;
}

HMap::HMap() {
    this -> size = 0;
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
    for(int i = 0; 10 > i; ++i) {
        Node* head = array[i];
        Node* temp = array[i];
        while(head != nullptr) {
            temp = head -> next;
            delete head;
            head = temp;
        }
        delete head;
        temp = nullptr;
    }
    delete array;
    array = nullptr;
}

void HMap::add(int key, std::string value) {
    int index = hash(key);
    if(9 < index) {
        std::cout << "The key have to be from 0 to 100!" << std::endl;
    } else {
        Node* temp = array[index]; 
        Node* newNode = new Node;
        newNode -> key = key;
        newNode -> value = value;
        newNode -> next = nullptr;  
        if(nullptr == array[index]) {
            array[index] = newNode;
        } else {
            while(nullptr != temp -> next) {
                temp = temp -> next;
            }
            temp -> next = newNode;
        }
        ++this -> size;
    }
}

void HMap::update(int key, std::string value) {
    int index = hash(key);
    Node* temp = array[index]; 
    while(key != temp -> key) {
        temp = temp -> next;
        if(nullptr == temp) {
            std::cout << "Missing key!" << std::endl;
            return;
        }
    }
    temp -> value = value;
    temp = nullptr;
}


int HMap::getSize() {
    return size;
}

void HMap::remove(int key) {
    int index = hash(key);
    Node* prevNode = nullptr;
    Node* temp = array[index];
    while( nullptr != temp) {
        while(key != temp -> key) {
            prevNode = temp;
            temp = temp -> next;
            if(nullptr == temp) {
                std::cout << "Missing key!" << std::endl;
                return;
            }
        }
        prevNode -> next = temp -> next;
        delete temp;
        temp = nullptr;
        prevNode = nullptr;
    }

/*    if(key =  -> key) {
        delete temp;
        temp = nullptr;
    } else {
        while(key != temp -> key) {
            prevNode = temp;
            temp = temp -> next;
            if(nullptr == temp) {
                std::cout << "Missing key!" << std::endl;
                return;
            }
        }
        prevNode -> next = temp -> next;
        delete temp;
        temp = nullptr;
        prevNode = nullptr;
    }*/
}

std::string HMap::get(int key) {
    int index = hash(key);
    Node* temp = array[index]; 
    while(key != temp -> key) {
        temp = temp -> next;
        if(nullptr == temp) {
            return "Missing key!";
        }
    }
    std::string geted = temp -> value;
    temp = nullptr;
    return geted;
}

void HMap::printHMap() {
    if(!isEmpty()) {
        for(int i = 0; 10 > i; ++i) {
            Node* temp = array[i];
            while(nullptr != temp) {
                std::cout << temp -> value << " ";
                temp = temp -> next;
            }
        }
        std::cout << std::endl;
    }
}



