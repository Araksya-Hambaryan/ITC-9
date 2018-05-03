#include "list.hpp"

List::List():
	head(nullptr)
{}

List::List(const List& other) 
   : head(nullptr)
{
	node* newNode = other.head;
	while (nullptr != newNode -> next) {
		push(newNode -> key, newNode -> value);
        newNode = newNode -> next;
	}
	push(newNode -> key, newNode -> value);
}

List::~List() {
    clear();
}

bool List::push(const std::string key, const std::string value) {
    node *newNode = new node(key, value);
    if (searchKey(newNode -> key, newNode -> value)) {
        return false;
    }
    newNode -> next = head;
    head = newNode;
	return true;
}

bool List::getValue(std::string key, std::string& value) {
    if (nullptr == head) {
		std::cout << "\nMutqagrac Key-ov arjeq chka HashTable-um\n";
        return false;
    }
    if (head -> key == key) {
        value = head -> value;
		return true;
    }
    node* tmp = head;
    while (nullptr != tmp -> next) {
        if (tmp -> next -> key == key) {
            value = tmp -> next -> value;
			return true;
        }
        tmp = tmp -> next;
    }
    std::cout << "\nMutqagrac Key-ov arjeq chka HashTable-um\n";
    return false;
}

bool List::deleteValue(std::string& delKey, std::string& value) {
    if (nullptr == head) {
        return false;
    }
    if (head -> key == delKey) {
		value = head -> value;
        node* tmp = head;
        head = head->next;
        delete tmp;
        return true;
    }
    node* tmp = head;
    while (nullptr != tmp -> next) {
        if (tmp -> next -> key == delKey) {
			tmp -> next -> value = value;
            node* n = tmp -> next;
            tmp -> next = n -> next;
            delete n;
            return true;
        } 
        tmp = tmp -> next;
    }
	value = "";
	return false;
}

void List::clear() {
    if(nullptr == head) {
        return;
    }
    while(nullptr != head -> next) {
        node* tmp = head;
        head = head->next;
        delete tmp;
    }
    node* tmp = head;
    head = nullptr;
    delete tmp;
}

bool List::searchKey(std::string& key, std::string& value) {
    if (nullptr == head) {
        return false;
    }
    if (head -> key == key) {
        head -> value = value;
        return true;
    }
    node* tmp = head;
    while (nullptr != tmp -> next) {
        if (tmp -> next -> key == key) {
            tmp -> next -> value = value;
            return true;
        }
        tmp = tmp -> next;
    }
    return false;
}
