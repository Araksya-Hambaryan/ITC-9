#include <iostream>

struct Node {
    int value;
    Node* next;
};

void deleteNodes(Node* root) {
    Node* temp = root;
    while (root -> next != NULL) {
        temp = root;
        root = root -> next;
        delete temp;
        temp = NULL;
    }
}

int max(Node* root) {
    int max = 0;
    int num = 0;
    Node* tempNode = root;
    max = root -> value;
    while (tempNode -> next != NULL) {
        tempNode = tempNode -> next;
        if (max < (tempNode -> value)) {
            max = tempNode -> value;
        }
    }
    return max;
}

void print(Node* root) {
    Node* temp = root;
    while(temp != NULL) {
        std :: cout << temp -> value << "  ";
        temp = temp -> next;
    }
    std :: cout << std :: endl;
}

Node* addNumber(Node* root, int num) {
    Node* newNode = new Node;
    Node* temp = root;
    newNode -> value = num;
    newNode -> next = NULL;
    if (root == NULL) {
        root = newNode;
    } else {
        while (temp -> next != NULL) {
            temp = temp -> next;
        }
        temp -> next = newNode;
    }
    return root;
}

Node* inputArray(Node* root) {
    int num = 0;
    std :: cout << "nermuceq tar kangnecnelu hamar" << '\n';
    do {
        std :: cin >> num;
        if (std :: cin) {
            root = addNumber(root, num);
        }
    } while (std :: cin);
    return root;
}

int main() {
    Node* root = NULL;
    root = inputArray(root);
    print(root);
    std :: cout <<  "max =  " << max(root) << std :: endl;
    deleteNodes(root);
    return 0;
}

