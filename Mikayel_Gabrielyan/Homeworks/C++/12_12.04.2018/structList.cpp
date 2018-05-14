#include <iostream>

struct Node {
    int m_value;
    Node* m_next;
};

Node* addNumber(Node* root, int value) {
    Node* newNode = new Node;
    newNode->m_value = value ;
    newNode->m_next = nullptr;
    if(root == nullptr) {
        root = newNode;
        return root;
    } else {
        Node* tmp;
        tmp = root;
        while(tmp->m_next!= nullptr) {
            tmp = tmp -> m_next;
        }
        tmp->m_next = newNode;
        return root;

    }
}

int main() {
    Node* remRoot;
    int value = -1;
    Node* root = nullptr;
    std::cout << "Mutqagrel arjeqner@ \n"; 
    while(0 != value) {
        std::cin >> value;
        root = addNumber(root, value);
    }
    int maxVal = root->m_value;
    while(root->m_next != nullptr){
        remRoot = root;
        root = root->m_next;  
        if(maxVal < root->m_value) {
            maxVal = root->m_value;
        }
        delete remRoot;
    }
    std::cout << "Max is -> " << maxVal << std::endl;
    return 0;
}
