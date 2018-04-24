#ifndef LIST_HPP
#define LIST_HPP

#include <iostream>

class List {
public:
    List();
    List(const List& object);
    ~List();
    int getSize() const;
    bool isEmpty() const;
    void push_front(const int value);
    void push_back(const int value);
    void insert(const int index, const int value);
    void pop_front();
    void pop_back();
    void erase(const int index);
    void clear();
    void printList() const;
    
private:
    struct Node {
        int m_value;
        Node* m_next;
        Node(int value, Node* next = nullptr) : m_value(value)
                                              , m_next(next) {}
    };   
    Node* m_head;
};

#endif
