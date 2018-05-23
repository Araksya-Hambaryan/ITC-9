#include "hashTable.hpp"

HashTable::HashTable() { 
    size = 10;
    arr = new List*[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = new List;
    } 
}

HashTable::~HashTable() {
    for (int i = 0; i < size; ++i) {
	    arr[i] -> clear();
    }
}

void HashTable::add(const std::string key, const std::string value) {
	int index = hashMapIndex(key);
	arr[index] -> push(key, value);
}

bool HashTable::get(std::string key, std::string& value) {
	int index = hashMapIndex(key);
	return arr[index] -> getValue(key, value);
}

bool HashTable::remove( std::string key, std::string& value) {
	int index = hashMapIndex(key);
	return arr[index] -> deleteValue(key, value);
}

int HashTable::hashMapIndex(const std::string key) {
	int sum = 0;
	char symbol = key[0];
	int i = 0;
	while ('\0' != key[i]) {
		sum += (int)symbol;
		++i;
		symbol = key[i];
	}
	return (sum % size);
}

