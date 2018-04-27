#ifndef HASHMAP_HPP
#define HASHMAP_HPP
#include <string>
// hashmap.cpp

class HashMap {
    public:
        HashMap();
        HashMap(const HashMap& obj);
        ~HashMap();
        bool add(std :: string, std :: string);
        bool get(std :: string, std :: string&);
        bool remove(std :: string key);
        bool update(std :: string, std :: string);
    private:
        struct Node {
            std :: string key;
            std :: string value;
            Node* next;
            Node() : key(""), value(""), next(nullptr){}
        };
        int hashCode(std :: string);
        Node** arr;
        int size;
};

#endif
