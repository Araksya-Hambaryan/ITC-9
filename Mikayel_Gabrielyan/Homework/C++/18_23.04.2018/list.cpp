#include <iostream>

struct Node {
    int value;
    Node* next;
    Node(int val, Node* ptr = nullptr) : value(val),
                                         next(ptr) {}
};

class List {
private:
	Node* head;

public:
	List() : head(nullptr) {}

    void pushBack(const int val) {
        Node* newNode = new Node(val);
        Node* tmp = head;
        if (nullptr == head) {
            head = newNode;
        } else {
            while (nullptr != tmp -> next) {
                tmp = tmp -> next;
            }
            tmp -> next = newNode;
        }
    }

    void popBack() {
		if (nullptr == head) {
            std::cout << "List@ datark e";
			return;
		}
		if (nullptr == head -> next) {
			Node *tmp = head;
			head = nullptr;
			delete tmp;
			return;
		} else {
			Node *tmp = head -> next;
			Node* newNode = head;
			while (nullptr != tmp -> next) {
				tmp = tmp -> next;
				newNode = newNode -> next;
			}
			delete tmp;
			newNode -> next = nullptr;
		}
	}

	void pushFront(const int val) {
		Node* newNode = new Node(val);
		newNode -> next = head;
		head = newNode;
	}

	void popFront() {
		if (nullptr == head) {
            std::cout << "List@ datark e";
			return;
		} else {
			Node *tmp = head;
			head = head -> next;
			delete tmp;
		}
	}

	void insert(const int dirq,const int val) {
		Node* newNode = new Node(val);
		if (nullptr == head) {
			if (1 == dirq) {
				head = newNode;
			} else {
                std::cout<<" Sxal dirqi mutqagrum \n";
			}
		} else if (nullptr == head -> next) {
			Node *tmp = head;
			tmp = newNode;
			if(1 == dirq) {		
				tmp -> next = head;
				head = newNode;
			} else if (2 == dirq) {	
				head -> next = newNode;
			} else {		
                std::cout<<"Sxal dirqi mutqagrum \n";
			}
		} else {
			if (1 == dirq) {
				Node* tmp = head;
				head = newNode;
				newNode -> next = tmp;
			} else {
				Node* tmp = head;
				for (int i=0; i < dirq - 2; i++) {
					if (tmp -> next == NULL) {	
                        std::cout << "Sxal dirqi mutqagrum, kavelacvi verjic \n";
						break;
					}
					tmp = tmp -> next;
				}
			Node* n = tmp ->next;
			tmp -> next = newNode;
			newNode -> next = n;
			}
		}
	}

    int getValue(const int index) {
        Node* tmp = head;
        if (1 <= index) {
            int count = 1;
            while (index != count) {
                if (nullptr == tmp -> next) {
                    std::cout << "Aydpisi index chka Listum \n";
                    return 0;
                } else {
                    tmp = tmp -> next;
                    ++count;
                }
            }
            return tmp -> value;
        } else {
            std::cout << "Sxal index-i mutqagrum \n";
            return 0;
        }
    }

	void PrintList() {
		int i = 1;
		Node* tmp = head;
        std::cout << "\n ***** List ***** \n";
		while (nullptr != tmp) {
            std::cout << i << " -> " << tmp -> value << std::endl;
			tmp = tmp -> next;
			++i;
		}
        std::cout << std::endl;
	}

    ~List() {
        while (nullptr != head) {
            popFront();
        }
    }
};

int main() {
	List myList;
	int val = 0;
    int index = 0;
    int chack = 0;
	while (8 != chack) {
		switch (chack) {
		case 1:
            std::cout << "Mutqagrel arjeq@ -> ";
            std::cin >> val;
			myList.pushFront(val);
			break;
		case 2:
            std::cout << "Mutqagrel arjeq@ -> ";
            std::cin >> val;
			myList.pushBack(val);
			break;
		case 3:
			myList.popFront();
			break;
		case 4:
			myList.popBack();
			break;
		case 5:
            std::cout << "Mutqagrel index@ -> ";
            std::cin >> index;
            std::cout << "Mutqagrel arjeq@ -> ";
            std::cin >> val;
			myList.insert(index, val);
			break;
		case 6:
			myList.PrintList();
			break;
        case 7:
            std::cout << "Mutqagrel index@ -> ";
            std::cin >> index;
            std::cout << index << "-rd dirqi arjeqn e -> " << myList.getValue(index) << std::endl;
            break;
        default:
            std::cout << "Sxal mutqagrum !!! \n";
            break;
		}
        std::cout << " 1 - PushFront \n 2 - PushBack \n 3 - PopFront \n 4 - PopBack \n 5 - Insert \n 6 - printList \n 7 - getValue \n 8 - Exit \n";
        std::cout << "@ntrel gorcoxutyun@ -> ";
        std::cin >> chack;
        std::cout << std::endl;
	}
	return 0;
}
