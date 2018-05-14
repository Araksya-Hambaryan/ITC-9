#include <iostream>
#include "list.hpp"

List::List() {
    this->size = 0;
    head = nullptr;
    std::cout << "Default constructor works!" << std::endl;
}

List::List(List& li) {
    std::cout << "Copy constructor works!" << std::endl;
}

List::List(List&& li) {
    std::cout << "Move constructor works!" << std::endl;
}

List::~List() {
    std::cout << "Delete constructor works!" << std::endl;
    Node* temp;
    while(head != nullptr) {
        temp = head->next;
        delete head;
        head = temp;
    }
    delete head;
}

void List::insert(int index, int value) {
    if(index > this->size || 0 > index) {
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
    }
}

void List::erase(int index) {
    if(index > this->size || 0 > index) {
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


int List::getSize() {
    return size;
}

int List::getElem(int index) {
    if(index < this->size && size > 1) {
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
    }
}

void List::push(int value) {
    ++this->size;
    Node* last = new Node;
    last->value = value;
    last->next = nullptr;
    if(head == nullptr) {
        head = last;
    } else {
        Node* temp = head;
        while(temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = last;
    }
}

void List::pop() {
    if(this->size < 1) {
        std::cout << "Empty list!" << std::endl;
    } else {
        Node* temp = head;
        int count = 0;
        while(count < size-2) {
            temp = temp->next;
            ++count;
        }
        temp->next = nullptr;
        --this->size;
    }
}

void List::printList() {
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
}



