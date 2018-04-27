#include <iostream>

class Node{
    public:
        int value;
        Node* next;
    public:
        void SetValue(int aValue) {
            value = aValue;
        };
        void SetNext(Node* aNext) {
            next = aNext; 
        };
        int Value() {
            return value;
        };
        Node* Next() { return next; };
};

class List{
    Node *head; 
    public:
    List() { 
        head = NULL; 
    }
    ~List() {
        Node* tmp = head;
        while(tmp->Next() != nullptr) {
            tmp = tmp->Next();
            delete tmp;
        }
        delete head;
    }
    int len = 0;    
    void push(int value) {
        ++len;
        Node* newNode = new Node();
        newNode->SetValue(value);
        newNode->SetNext(NULL);
        Node *tmp = head;
        if ( tmp != NULL ) {
            while ( tmp->Next() != NULL ) {
                tmp = tmp->Next();
            }
            tmp->SetNext(newNode);
        }
        else {
            head = newNode;
        }
    }
    void get() {
        std::cout << len;
    }
    void pop() {
        --len;
        Node *tmp = head;
        Node * mem; 
        if ( tmp != NULL ) {
            while ( tmp->Next() != NULL ) {
                mem = tmp;
                tmp = tmp->Next();
            }
            delete tmp;
            mem->SetNext(NULL);
        }
        else {
            delete head ;
        }

    }
    void add(int index, int value) {
        Node *tmp = head;
        if(len > index && index > 0) {
            ++len;
            Node * newNode = new Node;
            newNode->SetValue(value);
            Node *prev;
            for (int i = 0; i < index; ++i) {
                prev = tmp;
                tmp = tmp->Next();  
            }
            newNode->SetNext(prev->Next());
            prev->SetNext(newNode);
        } else if(index == len) {
            push(value);
        } else {
            std::cout << "Bad index";
            return;
        }

    }
    void Print() {
        Node *tmp = head;
        do {
            std::cout << tmp->Value() << " -> ";
            tmp = tmp->Next();
        } while ( tmp != NULL );
    }
};

int main() {
    List list;
    list.push(7);
    list.push(4);
    list.push(74);
    list.push(89);
    list.push(9);
    list.add(5, -96);
    std::cout << "\nOur list is_";
    list.Print();
    std::cout << "\nList length is_";
    list.get();

    return 0;
}
