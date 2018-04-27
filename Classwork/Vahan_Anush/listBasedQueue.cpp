#include <iostream>
class Queue {
    private:
        struct Node {
            int data;
            Node* next;
            Node () {
            data = 0;
            next = nullptr;
            }
        };
        Node* head;
        Node* tail;
    public:
        void pushFront(int value) {
            Node* newNode = new Node();
            newNode -> data = value;
            if (nullptr == head) {
                head = newNode;
                tail = head;
            } else {
                newNode -> next = head;
                head = newNode;
            }
        }

        void popBack() {
            Node* temp = head;
            while (temp -> next != tail) {
                temp = temp -> next;
            }
            tail = nullptr;
            delete tail;
            tail = temp;
        }

        void print() {
            Node* temp = head;
            std::cout << "Your list: ";
            while (temp -> next != nullptr) {
                std::cout << temp -> data << " ";
                temp = temp -> next;
            }
            std::cout << "\n";
        }
        Queue() {
        head = nullptr;
        tail = nullptr;
        }
    /*    Queue(Queue& q) {
        Node* newNode = q.head;
        while (nullptr != newNode -> next) {
        pushFront(newNode -> data);
        newNode = newNode -> next;
    } 
        } */
        ~Queue() {
            std::cout << "Destructor is called \n";
            Node* temp = head;
            while (temp -> next != nullptr) {
                temp = head -> next;
                delete head;
                head = temp;
                }
            head = nullptr;
            tail = nullptr;
            temp = nullptr;  
        }
};
int main() {
    Queue q;
    q.pushFront(1);
    q.pushFront(2);
    q.pushFront(3);
    q.popBack();
    q.print();
//    Queue q1(q);
//    q1.print();
    return 0;
}