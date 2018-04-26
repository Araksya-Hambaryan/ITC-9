#include <iostream>
#include "queue.hpp"

Queue::Queue() {
    std::cout << "Queue default constructor works!" << std::endl;
}

Queue::Queue(Queue& obj) : List(obj) {
    std::cout << "Queue copy constructor works!" << std::endl;
}

Queue::Queue(Queue&& obj) : List(obj) {
    std::cout << "Queue move constructor works!" << std::endl;
}

Queue::~Queue() {
    std::cout << "Queue destructor works!" << std::endl;
}

/*Queue::Queue(int n, int fill) : List(n, fill) {
    std::cout << "Queue built list!" << std::endl;
}*/

/*void Queue::insertInQueue(int index, int value) {
    List::insert(int index, int value);
}*/

/*void Queue::pushBack(int newElem) {
    push(newElem);
}*/

void Queue::unshift(int newElem){
    ++this->size;
    Node* first = new Node;
    first->value = newElem;
    if(nullptr == head) {
        head = first;
	head->next = nullptr;
    } else { 
        first->next = head;
        head = first;
    }
}

void Queue::popBack() {
    pop();
}

void Queue::printQueue() {
    printList();
}



