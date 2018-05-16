#include <iostream>

struct Node {
    int m_value;
    Node* m_next;
};

Node* addNumber(Node*, int);
int max(Node*);
void jnjel (Node*);

int main() {
   
    Node* root = nullptr;  
    int a = 0;
    std::cout<<"\nMutqagreq tver.avarti hamar greq - end ";
    std::cin >> a;
    addNumber(root,a);
    root = addNumber(root, a);
    Node* tmp = root;
    while (std::cin){
  std::cin >> a;
        if (std::cin) {
      root = addNumber(root, a);
        }
 }
    while ( nullptr != tmp) {
     std::cout << tmp->m_value << " ";    
     tmp = tmp->m_next;
 }
    std::cout<<"\nMaksimumy klini  "<<max(root)<<"\n";
    jnjel(root);
    return 0;
}

Node* addNumber(Node* root, int value) {
    Node* newNode = new Node;
    newNode->m_value = value;
    newNode->m_next = nullptr;
    if (nullptr == root ) {
        root  = newNode;
    } else {
    Node* temp = root;
    while (temp->m_next != nullptr) {
        temp = temp -> m_next;
    }
    temp->m_next = newNode;
    }
    return root;
}

int max(Node* root) {
    Node* tmp = root;
    int max = root-> m_value;
    while ( nullptr != tmp->m_next) {
        tmp = tmp-> m_next;
        if (max < tmp->m_value) {
            max = tmp->m_value;
        }  
    }
    return max;
}

void jnjel (Node* root) {
    Node* tmp;
    while (nullptr != root) {
    tmp = root->m_next;
    root = tmp;
    delete tmp;
    tmp = nullptr;
    }
}
