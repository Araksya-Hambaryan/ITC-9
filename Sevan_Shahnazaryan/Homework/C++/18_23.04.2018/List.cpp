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
        Node *newNode = new Node;
        newNode -> value = num;
        newNode -> next = nullptr;
        if(nullptr == head) {
            head = newNode;
            tail = head;
        } else {
            tail -> next = newNode;
            tail = tail -> next;
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

    bool insert(int index, int num) {
        if(index > length) {
            return false;
        }
        ++length;
        Node *newNode = new Node;
        newNode -> value = num;
        if(0 == index) {
            newNode -> next = head;
            head = newNode;
            return true;
        }
        Node *temp = head;
        for(int i = 1; i < index; ++i) {
            temp = temp -> next;
        }
        newNode -> next = temp -> next;
        temp -> next = newNode;
        return true;
    }
 
    bool erase(int index) {
        if(empty()) {
            return false;
        }
        --length;
        Node* temp = head;
        if(0 == index) {
            head = head -> next;
            delete temp;
            return true;
        }
        Node *oldNode = nullptr;
        for(int i = 1; i < index; ++i) {
            temp = temp -> next;
        }
        oldNode = temp -> next;
        temp -> next = oldNode -> next;
        delete oldNode;
        return true;
    }

    int get(int index) {
        if(index > length) {
            return 0;
        }
        Node *temp = head;
        for(int i = 0; i < index; ++i) {
            temp = temp -> next;
        }
        return temp -> value;
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
    }
};

int main() {
    List* list = new List;
    for (int i = 0; i < 15; ++i) {
        list -> push(i);
    }
    std::cout << "This is the list" << std::endl;
    list -> print();
    std::cout << std::endl;
    list -> erase(12);
    list -> insert(5, 6);
    std::cout << "After erase(12) and insert(5,6)" << std::endl;
    list -> print();
    list -> pop();
    list -> pop();
    std::cout << std::endl << "After double pop" << std::endl;
    list -> print();
    std :: cout << std :: endl;
    list -> insert(8,151515);
    std::cout << "After insert(8,151515)" << std::endl;
    list -> print();
    std :: cout << std :: endl;
    list -> erase(1);
    std::cout << "After Erase(1)" << std::endl;
    list -> print();
    std :: cout << std :: endl;
    return 0;
}
