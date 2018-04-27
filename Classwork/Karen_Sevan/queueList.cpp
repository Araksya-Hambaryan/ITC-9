#include <iostream>

class List {
private:
    struct Node {
        int value;
        Node *next;
        Node():next(nullptr) {};
    };
    Node *head;
    Node *tail;
    int length;

public: 
    List() {
        head = nullptr;
        tail = nullptr;
        length = 0;
    }

    List(const List& obj) {
        std::cout << "COPY" << std::endl;
        this -> length = obj.length;
        Node *newNode = new Node;
        head = newNode;
        newNode -> value = obj.head -> value;
        Node *temp = obj.head;
        Node *myTemp = this -> head;
        for(int i = 1; i < length; ++i) {
            temp = temp -> next;
            Node *newNode = new Node;
            newNode -> value = temp -> value;
            myTemp -> next = newNode;
            myTemp = myTemp -> next;
        }
    }

    List(List&& obj) {
        std::cout << "MOVE" << std::endl;
        this -> head = obj.head;
        obj.head = nullptr;
    }
    
    ~List() {
        Node *temp = head;
        while(nullptr != head) {
            temp = head;
            head = head -> next;
            delete temp;
        }
        head = nullptr;
    }

    void push(int num) {
        ++length;
        Node* newNode = new Node;
        newNode -> value = num;
        newNode -> next = head;
 	head = newNode;
        if(nullptr == head) {
            head = newNode;
            tail = head;
        }






    }

    void pop() {
        --length;
        Node *temp = head;
        while(temp -> next != tail) {
            temp = temp -> next;
        }
        delete tail;
        tail = temp;
    }

 
    bool empty() {
        return length == 0;
    }


    int size(){
        return length;
    }

    void print() {
        if(empty()) {
            return;
        }
        Node *temp = head;
        for(int i = 0; i < length; ++i) {
            std::cout << temp -> value << " ";
            temp = temp -> next;
        }
        std::cout << std::endl;
    }
};

int main() {


   

    List queue;

    queue.push(1);
    queue.print();
    queue.push(2);     
    queue.print();
    queue.push(3);
    queue.print();
    queue.pop();
    queue.print();
    queue.pop();
    queue.print();

    return 0;
} 

