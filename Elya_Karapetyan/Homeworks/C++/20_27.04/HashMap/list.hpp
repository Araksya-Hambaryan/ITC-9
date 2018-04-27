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
    bool push_front(const std::string key, const int value);
    bool getValueByKey(std::string key, int& value);
    bool getKeyByValue(std::string& key, int value);
    bool update(std::string& key, int& value);
    bool deleteByKey(std::string& key, int& value);
    void pop_front();
    void clear();
    void printList() const;
    
private:
    struct Node {
        int m_value;
        std::string m_key;
        Node* m_next;
        Node(const int value, const std::string key, Node* next = nullptr) : m_value(value)
                                                                           , m_key(key)
                                                                           , m_next(next) {}
    };   
    Node* m_head;
};

#endif
