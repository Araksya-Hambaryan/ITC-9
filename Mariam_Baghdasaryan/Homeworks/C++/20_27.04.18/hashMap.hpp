#ifndef HASHMAP_HPP
#define HASHMAP_HPP

#include <string>

class HashMap {
private:
    struct Node {
        std :: string key;
        std :: string value;
        Node* next;
        Node() {
            this -> key = "";
            this -> value = "";
            this -> next = nullptr;
        }
        Node(std :: string key, std :: string value) {
            this -> key = key;
            this -> value = value;
            this -> next = nullptr;
        }
    };
    Node** mArray;
    int mSize;
    int hashCode(std :: string);
public:
    HashMap();
    HashMap(const HashMap&);
    ~HashMap();
    void addNode(std :: string, std :: string);
    void updateNode(std :: string, std :: string);
    void deleteNode(std :: string);
    std :: string getNode(std :: string);
    void printNode(std :: string);
};

#endif
