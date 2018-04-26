#include <iostream>
class Node {
    private:
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
        Node* Next() {
            return next;
        };
};
class List {
    Node *head; 
    public:
    int len = 0;
    List() { 
        head = NULL; 
    }
    List(const List& obj) {
        Node* newNode = obj.head;
        while (nullptr != newNode) {
            push(newNode -> Value());
            newNode = newNode -> Next();
        }
    }
    ~List() {
        while(nullptr != head) {
            shift();
        }
    };
    void shift() {
        if (head == nullptr) {
            std::cout << "Queue is empty!!!!!!!!!";
            return;
        }
        --len;
        Node* tmp = head;
        head = head -> Next();
        delete tmp;
    }    
    void push(int value) {
        ++len;
        Node* newNode = new Node();
        newNode -> SetValue(value);
        newNode -> SetNext(NULL);
        Node *tmp = head;
        if (tmp != NULL) {
            while (tmp->Next() != NULL) {
                tmp = tmp -> Next();
            }
            tmp -> SetNext(newNode);
        }
        else {
            head = newNode;
        }
    }
    void get() {
        std::cout << len;
    }
    void Print() {
        Node *tmp = head;
        do {
            std::cout << tmp -> Value();
            std::cout << " --> ";
            tmp = tmp -> Next();
        } while(tmp != NULL);
    }
};
int main() {
    List list;
    list.push(7);
    list.push(4);
    list.push(74);
    list.push(89);
    list.push(9);
    std::cout << "\nOur list is_";
    list.Print();
    list.shift();
    std::cout << "\nOur list is_";
    list.Print();
    std::cout << "\nList length is_";
    list.get();
    std::cout << "\n";
    return 0;
}
