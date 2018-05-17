#include <iostream>
#include <string>

struct Node {
    int value;
    Node* next;
};

Node* addNumber(int x, Node* rootArg) {
    Node* n = new Node;
    n->value = x;
    n->next = nullptr;
    if(rootArg == nullptr) {
        rootArg = n;
    } else {
        Node* temp = rootArg;
        while(temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = n;
    }
    return rootArg;
}

int calcMax(Node* rootArg) {
    int max = 0;
    Node* temp = rootArg;
    while(temp->next != nullptr) {
        if(temp->value > max) {
            max = temp->value;
        }
            temp = temp->next;  
    } 
    if(temp->value > max) {
        max = temp->value;
    }
    return max;
}

Node* remove(Node* rootArg) {
    Node* t;
    while(rootArg != nullptr) {
        t = rootArg->next;
        delete rootArg;
        rootArg = t;
    }
    return rootArg;
}

int main() {

    Node* root;
    root = nullptr; 
    bool flag = true;
    while (flag) {
        int x;
        std::cout << "Enter the numbers. Enter 0, when you want to finish!\n";
        std::cin >> x;
        if(x != 0) {
            root = addNumber(x, root);
        } else {
            flag = false;
        }
    }
    
    std::cout << "max:\t" << calcMax(root) << std::endl;
    root = remove(root);
    return 0; 
}


