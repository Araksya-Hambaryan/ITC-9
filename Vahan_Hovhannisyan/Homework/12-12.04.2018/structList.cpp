
#include <iostream>

struct Node {
        int value;
        Node* next;
    };

Node* addNum(int x, Node* root) {

    Node* n = new Node;
    n -> value = x;
    n -> next = nullptr;
    if (nullptr == root) {
        root = n;
    } else {
        Node* temp = root;
        while (nullptr != temp -> next) {
            temp = temp -> next;
        }
        temp -> next = n;
    }
    return root;
}

void remove(Node* root) {
    Node * tmp;
    while (nullptr != root) {
        tmp = root -> next;
        root = tmp;
        delete tmp;
        tmp = nullptr;
    }
}

int main() {
    std::cout << "Input numbers and type q to find max value: ";
    Node* root = nullptr;
    int num = 0;
    std::cin >> num;
    if (std::cin.fail()) {
        std::cout << "Sorry,wrong input! ";
    } else {
        root = addNum(num, root);
        Node* tmp = root;
        int max = 0;
        while (std::cin) {
            std::cin >> num;
            root = addNum(num, root);
            if (num > max) {
                max = num;
            }
        }
        std::cout << "The max value is " << max << std::endl;
    }
    remove(root);
    return 0;
}

