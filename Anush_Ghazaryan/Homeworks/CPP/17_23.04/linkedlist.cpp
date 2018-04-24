#include<iostream>

struct Node {
    int info;
    Node *next;
}*start;

class Single_llist {
 public:
    Node* create_node(int);
    void insert_begin();
    void insert_pos();
    void insert_last(); 
    void delete_pos();
    void display();
    Single_llist() 
        {
            start = NULL;
        }
};
int main() {
    int choice = 0;
    int  nodes = 0;
    int  element = 0;
    int  position = 0;
    int  i = 0;
    Single_llist sl;
    start = NULL;
    while (1) {
        std::cout << std::endl << "---------------------------------" << std::endl;
	std::cout << std::endl << "Menu" << std::endl;
	std::cout << std::endl << "---------------------------------" << std::endl;
	std::cout << "1.Insert node at position" << std::endl;
	std::cout << "2.Delete a Particular Node" << std::endl;
	std::cout << "3.Display Linked List" << std::endl;
	std::cout << "4.Exit " << std::endl;
	std::cout << "Enter your choice : ";
	std::cin >> choice;
	switch(choice) {
	    case 1:
		std::cout << "Inserting Node at a given position:" << std::endl;
		sl.insert_pos();
		std::cout << std::endl;
		break;
	    case 2:
		std::cout << "Delete a particular node: " << std::endl;
		sl.delete_pos();
		break;

	    case 3:
		std::cout << "Display elements of link list" << std::endl;
		sl.display();
		std::cout << std::endl;
		break;
	    case 4:
		std::cout << "Exiting..." << std::endl;
		exit(1);
		break;  
	    default:
		std::cout << "Wrong choice" << std::endl;
        }
    }
return 0;
}
Node *Single_llist::create_node(int value) {
    Node *temp;
    Node  *s;
    temp = new Node; 
    if (temp == NULL) {
        std::cout << "Memory not allocated " << std::endl;
	return 0;
    } else {
        temp->info = value;
	temp->next = NULL;     
	return temp;
    }
}
void Single_llist::insert_pos() {
    int value = 0;
    int  pos = 0;
    int  counter = 0; 
    std::cout << "Enter the value to be inserted: ";
    std::cin >> value;
    Node *temp;
    Node  *s;
    Node  *ptr;
    temp = create_node(value);
    std::cout << "Enter the postion at which node to be inserted: ";
    std::cin >> pos;
    int i = 0;
    s = start;
    while (s != NULL) {
	s = s->next;
	++counter;
    }
    if (pos == 1) {
	if (start == NULL) {
	    start = temp;
	    start->next = NULL;
	} else {
	    ptr = start;
	    start = temp;
	    start->next = ptr;
	}
    } else if (pos > 1  && pos <= counter) {
        s = start;
	for (i = 1; i < pos; ++i) {
	    ptr = s;
	    s = s->next;
	}
	ptr->next = temp;
	temp->next = s;
 	} else {
	    std::cout << "Positon out of range" << std::endl;
        }
}
void Single_llist::delete_pos() {
    int pos = 0;
    int  i = 0;
    int  counter = 0;
    if (start == NULL) {
	std::cout << "List is empty" << std::endl;
	return;
    }
    std::cout << "Enter the position of value to be deleted: ";
    std::cin >> pos;
    Node *s;
    Node  *ptr;
    s = start;
    if (pos == 1) {
    start = s->next;
    } else {
	while (s != NULL) {
	    s = s->next;
	    ++counter;  
	}
    if (pos > 0 && pos <= counter) {
	s = start;
	for (i = 1; i < pos; ++i) {
	    ptr = s;
	    s = s->next;
	 }
	ptr->next = s->next;
	} else {
	    std::cout << "Position out of range" << std::endl;
	}
	free(s);
	std::cout << "Element Deleted" << std::endl;
     }
}
void Single_llist::display() {
    Node *temp;
    if (start == NULL) {
	std::cout << "The List is Empty" << std::endl;
	return;
    }
    temp = start;
    std::cout << "Elements of list are: " << std::endl;
    while (temp != NULL) {
	std::cout << temp->info << "->";
	temp = temp->next;
    }
    std::cout << "NULL" << std::endl;
}

