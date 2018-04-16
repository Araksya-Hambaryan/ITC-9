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
void remove(Node* root) {
	Node* temp;
	while (nullptr != root) {
		temp = root->next;
		root = temp;
		delete temp;
        temp = nullptr;
	}
}



int main() {
	std::cout << "Input numbers  and type 0  to find max value" << std::endl;
	Node* root = nullptr;
	int  num = 0;
	std::cin >> num;
	root = addNum(num, root);
	Node* temp = root;
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
	while (nullptr != temp) {
		std::cout << temp->value << " "; 
		temp = temp->next;
	}

	std::cout << "\nMax value is : " << max <<  std::endl;
        remove( root );
return 0;
}



