#include "queue.hpp"

Queue::Queue() : m_head(nullptr) {}  

Queue::Queue(const Queue& object) {
    Node* current = object.m_head;
    while (nullptr != current) {
        push_back(current->m_value);
        current = current->m_next;
    }
}         

Queue::~Queue() {
   clear(); 
}
       
int  Queue::getSize() const {
    int size = 0;
    Node* current = m_head;
    while (nullptr != current) {
        ++size;
        current = current->m_next;
    }
    return size;
} 

bool Queue::isEmpty() const {
    return (getSize() == 0);
}             

void Queue::push_back(const int value) {
    Node* newNode = new Node(value);
    if (nullptr == m_head) {
        m_head = newNode;
        return;
    }
    Node* current = m_head;
    while (nullptr != current->m_next) {
        current = current->m_next;
    }
    current->m_next = newNode;
}

void Queue::pop_front() {
    if (nullptr == m_head) {
        std::cout << "Queue is empty";
        return; 
    }
    Node* tmp = m_head; 
    m_head = m_head->m_next;
    delete tmp;
    tmp = nullptr;
}           


void Queue::clear() {
    while (nullptr != m_head) {
        pop_front();
    }    
}

void Queue::printQueue() const {
    std::cout << "\nQueue ---> ";
    Node* current = m_head;
    while (nullptr != current) {
        std::cout << current->m_value << " ";
        current = current->m_next;
    }
    std::cout << std::endl << std::endl;
}   
