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

int findMax(Node* root) {
    Node* tmp = root;
    int max = root->m_value;
    while ( nullptr != tmp->m_next) {
	    tmp = tmp->m_next;
        if (max < tmp->m_value) {
            max = tmp->m_value;
	    }   
    }
    return max;
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

void validNumber(int& number) {
    while (std::cin.fail() || 1 > number) {    
        std::cout << "Invalid Value: Try again!" << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << "Please enter the intager number: ";
        std::cin>> number;
    }
}

int main() {
    int number = 0;
	Node* root = nullptr;
    std::cout << "Enter the number: ";
	std::cin >> number;
	validNumber(number);
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
    std::cout << "Maximum value of list: " << findMax(root) << std::endl;
    remove(root);	
    return 0;
}
