#include <iostream>

struct Node {
    int value;
    Node* next;
};

void deleteNodes(Node* root) {
    Node* temp = root;
    while(root != nullptr) {
        temp = root;
        root = root -> next;
        delete temp;
        temp = nullptr;
    }
}

int max(Node* root) {
    int max = 0;
    Node* tempNode = root;
    max = root -> value;
    while(tempNode -> next != nullptr) {
        tempNode = tempNode -> next;
        if (max < (tempNode -> value)) {
            max = tempNode -> value;
        }
    }
    return max;
}

void print(Node* root) {
    Node* temp = root;
    while(temp != nullptr) {
        std :: cout << temp -> value << "  ";
        temp = temp -> next;
    }
    std :: cout << std :: endl;
}

Node* addNumber(Node* root, int num) {
    Node* newNode = new Node;
    Node* temp = root;
    newNode -> value = num;
    newNode -> next = nullptr;
    if(root == nullptr) {
        root = newNode;
    } else {
        while (temp -> next != nullptr) {
            temp = temp -> next;
        }
        temp -> next = newNode;
    }
    return root;
}

Node* inputArray(Node* root) {
    int num = 0;
    std :: cout << "Input numbers with space and end with char (like this 9 5 31 L <enter>)  \n ";
    do {
        std :: cin >> num;
        if(std :: cin) {
            root = addNumber(root, num);
        }
    } while (std :: cin);
    return root;
}

int main() {
    Node* root = nullptr;
    root = inputArray(root);
    print(root);
    std :: cout <<  "Max value = " << max(root) << std :: endl;
    deleteNodes(root);
    return 0;
}
