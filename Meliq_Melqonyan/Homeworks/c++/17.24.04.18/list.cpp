#include <iostream>

int count = 0;

struct Node {
    Node* last;
    int value;
    Node* next;
};

class List {
    private:
        int count = 0;
    public:
        Node*  push(int num, Node* root){
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
            }
            ++count;
            return root;
        }
        void print(Node* root) {
            Node* temp = root;
            while(temp != NULL) {
                std :: cout << temp -> value << "  ";
                temp = temp -> next;
            }
            std :: cout << std :: endl;

        }
        void pop(Node* root) {
            Node* temp = root;
            while(temp -> next != NULL) {
                temp = temp -> next;
                std::cout << temp -> value << "    "; 
            }
            root = temp -> last;
            root -> next = NULL;
            delete temp;
        }
};
void print(Node* root) {
    Node* temp = root;
    while(temp  != NULL) {
        std :: cout << temp -> value << "  ";
        temp = temp -> next;
    }
    std :: cout << std :: endl;

}

int main() {
    Node* root = NULL;
    std::cout<<" fadfsaf " ;
    List n;
    int a = 10;
    int b = 20;
    std::cout <<"     fsdf" ;
    root = n.push(a,root);
    root = n.push(100,root);
    root =n.push(b,root);
    root =n.push(b,root);
    root =n.push(b,root);
    print(root);
    n.pop(root);
    n.pop(root);
    print(root);
    return 0;
}

