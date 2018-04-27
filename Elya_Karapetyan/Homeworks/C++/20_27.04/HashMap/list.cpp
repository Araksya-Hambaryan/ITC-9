#include "list.hpp"

List::List() : m_head(nullptr) {}  

List::List(const List& object) {
    Node* current = object.m_head;
    while (nullptr != current) {
        push_front(current->m_key, current->m_value);
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

bool List::push_front(const std::string key, const int value) {
    Node* newNode = new Node(value, key);
    if (update(newNode->m_key, newNode->m_value)) {
        return false;
    }
    newNode->m_next = m_head;
    m_head = newNode;
    return true;
}

bool List::getValueByKey(std::string key, int& value) {
    if (nullptr == m_head) {
        return false;
    }
    if (key == m_head->m_key) {
        value = m_head->m_value;
        return true;
    }
    Node* current = m_head;
    while (nullptr != current->m_next) {
        if (key == current->m_next->m_key) {
            value = current->m_next->m_value;
            return true;
        }   
        current = current->m_next;
    }
    return false;
}

bool List::getKeyByValue(std::string& key, int value) {
    if (nullptr == m_head) {
        return false;
    }
    if (value == m_head->m_value) {
        key = m_head->m_key;
        return true;
    }
    Node* current = m_head;
    while (nullptr != current->m_next) {
        if (value == current->m_next->m_value) {
            key = current->m_next->m_key;
            return true;
        }   
        current = current->m_next;
    }
    return false;
}

bool List::update(std::string& key, int& value) {
    if (nullptr == m_head) {
        return false;
    }
    if (key == m_head->m_key) {
        m_head->m_value = value;
        return true;
    }
    Node* current = m_head;
    while (nullptr != current->m_next) {
        if (key == current->m_next->m_key) {
            current->m_next->m_value = value;
            return true;
        }   
        current = current->m_next;
    }
    return false;
}

bool List::deleteByKey(std::string& key, int& value) {
    if (nullptr == m_head) {
        return false;
    }
    if (key == m_head->m_key) {
        value = m_head->m_value;
        Node* tmp = m_head;
        m_head = m_head->m_next;
        delete tmp;
        tmp = nullptr;
        return true;
    }
    Node* current = m_head;
    while (nullptr != current->m_next) {
        if (key == current->m_next->m_key) {
            current->m_next->m_value = value;
            Node* tmp = current->m_next;
            current->m_next = tmp->m_next;
            delete tmp;
            tmp = nullptr;
            return true;
        }
        current = current->m_next;
    }
    return false;
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

void List::clear() {
    while (nullptr != m_head) {
        pop_front();
    }    
}

void List::printList() const {
    std::cout << "\nList\n";
    Node* current = m_head;
    while (nullptr != current) {
        std::cout << "Key: " << current->m_key << "\tValue: " << current->m_value << std::endl;
        current = current->m_next;
    }
    std::cout << std::endl << std::endl;
}   
