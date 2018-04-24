#include "list.hpp"

List::List() : m_head(nullptr) {}  

List::List(const List& object) {
    Node* current = object.m_head;
    while (nullptr != current) {
        push_back(current->m_value);
        current = current->m_next;
    }
}         

List::~List() {
   clear(); 
}
       
int  List::getSize() const {
    int size = 0;
    Node* current = m_head;
    while (nullptr != current) {
        ++size;
        current = current->m_next;
    }
    return size;
} 

bool List::isEmpty() const {
    return (getSize() == 0);
}             

void List::push_front(const int value) {
    Node* newNode = new Node(value);
    newNode->m_next = m_head;
    m_head = newNode;
}

void List::push_back(const int value) {
    Node* newNode = new Node(value);
    Node* current = m_head;
    while (nullptr != current->m_next) {
        current = current->m_next;
    }
    current->m_next = newNode;
}

void List::insert(const int index, const int value) {
    Node* newNode = new Node(value);
    int size = getSize();
    if (index > size) {
        std::cout << "Size of list: " << size << "\tInvalid Index!\n" << std::endl;
        return;
    }
    if (0 == index) {
        push_front(value);
        return;
    }
    if (nullptr == m_head) {
        m_head = newNode;
        return;
    }
    if (nullptr == m_head->m_next) {
        m_head->m_next = newNode;
        return;
    }
    Node* current = m_head;
    int i = 0;
    while (i < index - 1) {
        current = current->m_next;
        ++i;
    }
    newNode->m_next = current->m_next;
    current->m_next = newNode;
}

void List::pop_front() {
    if (nullptr == m_head) {
        std::cout << "List is empty";
        return; 
    }
    Node* tmp = m_head; 
    m_head = m_head->m_next;
    delete tmp;
    tmp = nullptr;
}           

void List::pop_back() {
    if (nullptr == m_head) {
        std::cout << "\nList is empty!!!\n" << std::endl;
        return; 
    }
    if (nullptr == m_head->m_next) {
        Node* current = m_head;
        delete current;
        current = nullptr;
        m_head = nullptr;
        return;
    }
    Node* current = m_head->m_next;
    Node* tmp = m_head;
    while (nullptr != current->m_next) {
        current = current->m_next;
        tmp = tmp->m_next;
    }
    delete current;
    current = nullptr;
    tmp->m_next = nullptr;
    
}             

void List::erase(const int index) {
    int size = getSize();
    if (index > size) {
        std::cout << "Size of list: " << size << "\tInvalid Index!\n" << std::endl;
        return;
    } 
    if (0 == index) {
        pop_front();
        return;
    }
    if (nullptr == m_head) {
        std::cout << "\nList is empty!!!\n" << std::endl;
        return;
    }    
    if (nullptr == m_head->m_next) {
        delete m_head;
        m_head = nullptr;
        return;
    }
    Node* current = m_head;
    int i = 0;
    while (i < index - 1) {
        current = current->m_next;
        ++i;
    }
    Node* tmp = current->m_next;
    current->m_next = tmp->m_next;
    delete tmp;
    tmp = nullptr;
}       

void List::clear() {
    while (nullptr != m_head) {
        pop_front();
    }    
}

void List::printList() const {
    std::cout << "\nList ---> ";
    Node* current = m_head;
    while (nullptr != current) {
        std::cout << current->m_value << " ";
        current = current->m_next;
    }
    std::cout << std::endl << std::endl;
}   
