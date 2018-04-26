#include <iostream>

class Queue{
private:
    struct Node{
        int value;
        Node* next;
        Node() {
            next = nullptr;
        }
    };
    Node* head;
    int mLength;
public:
    Queue();
    Queue(const Queue&);
    ~Queue();
    void push(int value);
    void pop();
    void size();
    void print();
};

Queue :: Queue() {
    std :: cout << "Default constructor" << std :: endl;
    head = nullptr;
    mLength = 0;
}

Queue :: Queue(const Queue& object) {
    std :: cout << "Copy constructor" << std :: endl;
    this -> mLength = object.mLength;
    this -> head = new Node;
    *this -> head = *object.head; 
}

Queue :: ~Queue() {
    std :: cout << "Destructor" << std :: endl;
    while (head != nullptr) {
        pop();
    }
}

void Queue :: push(int value){
    if (nullptr == head) {
        Node* newNode = new Node;
        head = newNode;
        head -> value = value;
        head -> next = nullptr;
        ++mLength;
    } else {
        Node* newNode = new Node;
        newNode -> value = value;
        newNode -> next = nullptr;
        Node* temp = head;
        while(temp -> next != nullptr) {
            temp = temp ->next;
        }
        temp -> next = newNode;
        ++mLength;
    }
}

void Queue :: pop(){
    Node* temp = head;
    head = head -> next;
    delete temp;
    --mLength;
}

void Queue :: size() {
    std :: cout << "Size is " << mLength << std :: endl;
}

void Queue :: print() {
    Node* temp = head;
    while (temp != nullptr) {
        std :: cout << temp -> value << " ";
	temp = temp -> next;
    }    
    std :: cout << std :: endl;
}

int main() {
    Queue* queue = new Queue;
    queue -> push(1);
    queue -> push(2);
    queue -> push(3);
    queue -> print();
    queue -> pop();
    queue -> print();
    queue -> push(6);
    queue -> size();
    queue -> print();

    delete queue;

    return 0;
}

