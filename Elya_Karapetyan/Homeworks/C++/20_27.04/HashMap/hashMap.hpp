#ifndef HASH_MAP_HPP
#define HASH_MAP_HPP

#include "vector.hpp"

class HashMap {
public:
    HashMap();
    //Hashmap(const HashMap& object);
    ~HashMap();
    int getSize() const;
    bool isEmpty() const;
    bool add(const std::string key, const int value);
    bool remove(const std::string key, int& value);
    bool getValueByKey(std::string key, int& value);
    bool getKeyByValue(std::string& key, int value);
    void clear();
    void print() const;
private:
    Vector m_table;
    int hash(const std::string key) const;
};

#endif
