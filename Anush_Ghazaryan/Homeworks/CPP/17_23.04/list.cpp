#include <iostream>

    class List {
        private:
            typedef struct Node {
	        int data;
	        Node* next;
	    }* nodePtr;
	
	    nodePtr head;
	    nodePtr curr;
	    nodePtr temp;

        public:
	    List();
	    void addNode(int addData);
	    void deleteNode(int delData);
	    void printList();
	    void insertNode(int pos, int value); 
};

List::List() {
    head = NULL;
    curr = NULL;
    temp = NULL;
}

void List::addNode(int addData) {
    nodePtr n = new Node;
    n->next = NULL;
    n->data = addData;
    if(head != NULL) {
	curr = head;
	while(curr->next != NULL) {
	    curr = curr->next;
	}
	curr->next = n;
    } else {
	head = n;	
    }
}

void List::deleteNode(int delData) {
    nodePtr delPtr = NULL;
    temp = head;
    curr = head;
    while(curr != NULL && curr->data != delData) {
	temp = curr;
	curr = curr->next;
    }
    if(curr == NULL) {
	std::cout << delData << " was not in the List\n";
	delete delPtr;
    } else {
	delPtr = curr;
	curr = curr->next;
	temp->next = curr;
	if(delPtr == head) {
	    head = head->next;
	    temp = NULL;
	}
	delete delPtr;
	std::cout << "The value " << delData << " was deleted\n";
    }
}
void List::printList() {
    curr = head;
    while(curr != NULL) {
	std::cout << curr->data << std::endl;
	curr = curr->next;
    }
} 
void List::insertNode(int pos, int value) {
    nodePtr pre = new Node;
    nodePtr cur = new Node;
    nodePtr temp = new Node;
    cur = head;
    for(int i = 1; i < pos; ++i) {
	pre = cur;
	cur = cur->next;
    }
    temp->data = value;
    pre->next = temp;
    temp->next = cur;
}
int main() {
    List l;
    l.addNode(3);
    l.addNode(7);
    l.addNode(2);
    l.addNode(4);
    l.addNode(5);
    l.addNode(1);
    l.printList();
    std::cout << "------\n";
    l.deleteNode(7);
    l.printList();
    std::cout << "------\n";
    l.insertNode(4, 11);
    l.printList();

return 0;
}
