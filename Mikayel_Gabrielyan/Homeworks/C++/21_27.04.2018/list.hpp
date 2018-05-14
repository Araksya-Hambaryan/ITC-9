#ifndef LIST_HPP
#define LIST_HPP

#include <iostream>
#include <string>

class List {
public:
    struct node {
        node* next;
        std::string key;
        std::string value;    
        node():
            key(""),
            value(""),
            next(nullptr)
        { }
        node(std::string key, std::string value):
            key(key),
            value(value),
            next(nullptr)
        { }
    };
    
    List();
    List(const List& other);
    ~List();
    bool push(std::string key, std::string value);
    bool getValue(std::string key, std::string& value);
    bool deleteValue(std::string& delKey, std::string& value);
    void clear();
private:
    bool searchKey(std::string& key, std::string& value);
    node* head;
};

#endif
