#include<iostream>

struct Node {
	int value;
	Node* next;
};

Node* addNum( int x, Node* root) {

	Node *n = new Node;
	n->value = x;
	n->next = nullptr;
	if( root == nullptr) {
		root = n;
	} else {
		Node* temp = root;
		while( temp->next != nullptr ) {
			temp = temp->next;
		}
		temp->next = n;
	}
	return root; 
}




int main() {
	std::cout << "Input numbers  and type 0  to find max value" << std::endl;
	Node* root = nullptr;
	int  num = 0;
	std::cin >> num;
	root = addNum(num, root);
	Node* tmp = root;
	int max = 0;
	bool flag = true;
	while( flag != false) {
		std::cin >> num;
		if( num == 0 ) {
			 flag = false; 
		}
		root = addNum( num, root);
		if( num > max ) {
			max = num;	
		}
	}
	while (nullptr != tmp) {
		std::cout << tmp->value << " "; 
		tmp = tmp->next;
	}

	std::cout << "Max value is : " << max <<  std::endl;
return 0;
}



