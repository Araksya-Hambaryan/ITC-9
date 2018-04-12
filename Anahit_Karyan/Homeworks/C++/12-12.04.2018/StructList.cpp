#include <iostream>

struct Node {
	int value;
	Node* next;
};
Node* addNumber(int x, Node* root) {
	Node* newNode = new Node;
	newNode -> value = x;
	newNode -> next = nullptr;
	if (root == nullptr) {
		root = newNode;
	} else {
		Node* temp = root;
		while (temp -> next != nullptr) {
			temp = temp -> next;
		}
		temp -> next = newNode;
	}
	return root;
}
int maxValue(Node* root) {
	int max = 0;
	Node* temp = root;
	while (temp != nullptr) {
		if (temp -> value >= max) {
			max = temp -> value;
		}
		temp = temp -> next;
	}
	return max;
}
void remove(Node* root) {
	Node* t;
	while (root != nullptr) {
		t = root -> next;
		delete root;
		root = t;
	}
}
int main() {
	Node* root = nullptr;
	while (true) {
		int num;
		std :: cout << "Enter number : ";
		std :: cin >> num;
		if (5 == num) {
			break;
		} else {
			root = addNumber(num, root);
		}
	}
	std :: cout << maxValue(root) << std :: endl;
	remove(root);
	return 0;
}
