#include "hashMap.hpp"

HashMap::HashMap() {}       

/*
HashMap::Hashmap(const HashMap& object) {
    
}   
  */
        
HashMap::~HashMap() {
    clear();
}     

int HashMap::getSize() const {
    return m_table.size();
}                       
bool HashMap::isEmpty() const {
    return (0 == getSize());
}

int HashMap::hash(const std::string key) const {
    int sumOfSymbols = 0;
    char symbol = key[0];
    for (int i = 0; i < key.size(); ++i) {
        symbol = key[i];
        sumOfSymbols += (int)symbol;
    }
    return (sumOfSymbols % m_table.size());
}
                        
bool HashMap::add(const std::string key, const int value) {
    int index = hash(key);
    return m_table.insert(index, key, value);
}    

bool HashMap::remove(const std::string key, int& value) {
    int index = hash(key);
    return m_table.deleteByKey(index, key, value);
}      

bool HashMap::getValueByKey(std::string key, int& value) {
    int index = hash(key);
    return m_table.getValueByKey(index, key, value);
}

bool HashMap::getKeyByValue(std::string& key, int value) {
    int size = m_table.size();
    for (int i = 0; i < size; ++i) {
        if (m_table.getKeyByValue(key, value)) {
            return true;
        }
    }
    return false;
}

void HashMap::clear() {
    m_table.clear();
}

void HashMap::print() const {
    m_table.printVector();
}

