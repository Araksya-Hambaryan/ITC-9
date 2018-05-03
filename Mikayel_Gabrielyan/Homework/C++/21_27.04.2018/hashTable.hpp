#ifndef HASHTABLE_HPP
#define HASHTABLE_HPP

#include "list.hpp"

class HashTable
{
public:
	HashTable();
	~HashTable();
	void add(const std::string key, const std::string value);
	bool get(std::string key, std::string& value);
	bool remove(std::string key, std::string& value);
private:
    int size;
    List** arr;
	int hashMapIndex(const std::string key);
};

#endif
