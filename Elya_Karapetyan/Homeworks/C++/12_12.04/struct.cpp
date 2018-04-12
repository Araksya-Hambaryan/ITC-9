#include <iostream>

struct Node {
	int m_value;
	Node* m_next;
};

Node* addNumber(Node* root, int value) {
	Node* newNode = new Node;
	newNode->m_value = value;	
	newNode->m_next = nullptr;
	if (nullptr == root ) {
		root  = newNode;
	} else {
		Node* temp = root;
		while (temp->m_next != nullptr) {
			temp = temp -> m_next;	
		}
		temp->m_next = newNode;
	}
   	return root;
}

void remove(Node* root) {
	Node* tmp;
	while (nullptr != root) {
		tmp = root->m_next;
		root = tmp;
		delete tmp;
        tmp = nullptr;
	}
}

int main() {
    int number = 0;
	Node* root = nullptr;
    std::cout << "Enter the number: ";
	std::cin >> number;
	root = addNumber(root, number);
	Node* tmp = root;
	
    do {
		std::cout << "Enter the number:  for exit enter any character: ";
		std::cin >> number;
        if (std::cin) {
		    root = addNumber(root, number);
        }
	} while (std::cin); 
    std::cout << "List:  ";
    while ( nullptr != tmp) {
    	std::cout << tmp->m_value << " ";     	
	    tmp = tmp->m_next;
	}
	std::cout << std::endl;
    remove(root);	
    return 0;
}
