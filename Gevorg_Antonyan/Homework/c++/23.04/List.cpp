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

void validNumber(int& number) {
    while (std::cin.fail() || 1 > number) {
        std::cout << "Invalid Value: Try again!" << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << "Please enter the intager number: ";
        std::cin>> number;
    }
}

int maximum(Node* root) {
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

    

class List : public Node {
public:
    Node Element; 
    int get(int, Node*);
    void del(int, Node*);
    void insert(int, int, Node*);
};

int List::get (int num, Node* element) {
    Node* tmp = element;              
    int value = 0;
    do {
        value = tmp->m_value;
        tmp = tmp->m_next;
        --num;
    } while (0 < num);
    return value;
}

void List::del(int num, Node* element) {
    num = num + 1;
    Node* tmp = nullptr;
    if (1 == num) {
        tmp = element->m_next;
        element->m_next = nullptr;
        element = tmp;
    }
    do {
        element = element->m_next;
        --num;
    } while (0 < num);
    tmp = element;
    num = num - 2;
    do {
        element = element->m_next;
        --num;
    } while (num > 0);
    element->m_next = nullptr;
    element = tmp;
}

void List::insert(int num, int value, Node* element) {
    Node* tmp1 = nullptr;
    num = num - 1;
    do {
        element = element->m_next;
        --num;
    } while (0 < num);
    Node* tmp = element->m_next; 
    tmp1->m_next = tmp;
    tmp1->m_value = value;
    element->m_next = tmp1;
}


int main() {
    int k = 0;
    Node* root = nullptr;
    std::cout << "enter the number; enter symbol for stop" << std::endl;;
    std::cin >> k;
    validNumber(k);
    root = addNumber(root, k);
    Node* tmp = root;
    do {
	std::cout << "enter the number; ";
	std::cin >> k;
        if(std::cin) {
            root = addNumber(root, k);
        }
    } while (std::cin);
    while ( nullptr != tmp) {
    	std::cout << tmp->m_value << " ";     	
        tmp = tmp->m_next;
    }
    std::cout << std::endl;
    std::cout << "maximum is: " << maximum(root) << std::endl;
    remove(tmp);	
    return 0;
}
