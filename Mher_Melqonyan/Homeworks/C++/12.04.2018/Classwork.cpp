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
    int value = 0;
    Node* root = nullptr;
    do {
        std::cin >> value;
        root = addNumber(root, value);
    } while(0 != value);
int maxVal = root->m_value;
//std::cout << "mval " << root->m_value << std::endl;
    while(root->m_next != nullptr){
    remRoot = root;
    root = root->m_next;  
    if(maxVal < root->m_value) {
        maxVal = root->m_value;
    }
    delete remRoot;
    }
     std::cout << "Maximum value is " << maxVal;
return 0;
}
