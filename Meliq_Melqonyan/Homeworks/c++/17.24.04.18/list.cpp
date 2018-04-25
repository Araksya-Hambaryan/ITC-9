#include <iostream>

int count = 0;

struct Node {
    Node* last;
    int value;
    Node* next;
    Node() {
        next = NULL;
    }
};

class List {
    private:
        int count = 0;
        Node* root = NULL;
    public:
        void  push(int num){
            Node* newNode = new Node;
            Node* temp = root;
            newNode -> value = num;
            newNode -> next = NULL;
            newNode -> last = temp;
            if (root == NULL) {
                root = newNode;
            } 
            else{ 
                while (temp -> next != NULL) {
                    temp = temp -> next;
                }
                temp -> next = newNode;
                newNode -> last = temp;
            }
            ++count;
        }
        void print() {
            Node* temp = root;
            while(temp  != NULL) {
                std :: cout << temp -> value << "  ";
                temp = temp -> next;
            }
            std :: cout << std :: endl;

        }
        void pop() {
            Node* temp = root;
            while(temp -> next != NULL) {
                temp = temp -> next;
            }
            Node* tem = temp -> last;
            tem -> next = NULL;
            delete temp;
            temp = NULL;
            --count;
        }
        void insert(int index, int num) {

            std::cout<<"aaa";
            if(index < 0 || index > count) {
                return;
            }
            std::cout<<"aaa";
            Node* temp = root;
            while(index > 1) {
                temp = temp -> next;
                --index;
            }
            Node* newNode = new Node;
            std::cout<<"aaa";
            newNode -> value = num;
            newNode -> next = temp -> next;
            newNode -> last = temp;
            temp -> next = newNode;
            temp = temp -> next;
            temp -> last = newNode;
            ++count;
        }
        void del(int index) {
            if(index < 0 || index > count) {
                return;
            }
            Node* temp = root;
            while(index > 1) {
                temp = temp -> next;
                --index;
            }
            (temp ->last) -> next = temp -> next;
            (temp -> next) -> last = temp -> last;
            delete temp;
            temp = NULL; 
            --count;
        }
        ~List() {
            Node* temp = root;
            while (root -> next != NULL) {
                temp = root;
                root = root -> next;
                delete temp;
                temp = NULL;
            }
        }
};
int main() {
    List n;
    int b = 20;
    n.push(50);
    n.push(100);
    n.push(b);
    n.push(b);
    n.print();
    n.insert(2,5);
    n.print();
    n.del(2);
    n.print();
    n.pop();
    n.print();
    return 0;
}

