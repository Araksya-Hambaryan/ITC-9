#include "binaryTree.hpp"
#include <iostream>

BinaryTree :: BinaryTree() {
    std :: cout << "Default constructor" << std :: endl;
    root = nullptr;
}

BinaryTree :: BinaryTree(const BinaryTree& object) {
    std :: cout << "Copy constructor" << std :: endl;
    copyNode(root, object.root);
}

BinaryTree :: ~BinaryTree() {
    std :: cout << "Destructor" << std :: endl;
    clearNode(root);
}

void BinaryTree :: insert(int value) {
    root = insertNode(value, root);
}

bool BinaryTree :: find(int value) {
    return findNode(value, root);
}

void BinaryTree :: print() {
    printTree(root);
}
void BinaryTree :: copyNode(Node* root, Node* object) {
    if (nullptr == object) {
        root = nullptr;
        return;
    }
    Node* newNode = new Node(object -> mValue);
    newNode -> mValue = object -> mValue;
    copyNode(newNode -> left, object -> left);
    copyNode(newNode -> right, object -> right);
}

void BinaryTree :: clearNode(Node* root) {
    if (isEmpty()) {
        return;
    }
    clearNode(root -> left);
    clearNode(root -> right);
    delete root;
}

bool BinaryTree :: isEmpty() {
    return nullptr == root;
}

int BinaryTree :: maxDepth(Node* root) {
    if (isEmpty() || (nullptr == root -> left && nullptr == root -> right)) {
        return 0;
    }
    int leftDepth = maxDepth(root -> left);
    int rightDepth = maxDepth(root -> right);

    return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
}

int BinaryTree :: minDepth(Node* root) {
    if (isEmpty() || (nullptr == root -> left && nullptr == root -> right)) {
        return 0;
    }
    int leftDepth = minDepth(root -> left);
    int rightDepth = minDepth(root -> right);

    return leftDepth < rightDepth ? leftDepth + 1 : rightDepth + 1;
}

bool BinaryTree :: isBalanced(Node* root) {
    if (maxDepth(root) - minDepth(root) <= 1) {
        return true;
    }
    return false;
}

BinaryTree :: Node* BinaryTree :: insertNode(int value, Node* root) {
    if (isEmpty()) {
        root = new Node(value);
    }
    else if (value < root -> mValue) {
        root -> left = insertNode(value, root -> left);
        if (!isBalanced(root)) {
            if (value < root -> left -> mValue) {
                root = leftRotate(root);
            } else root = doubleLeftRotate(root);
        }
    } else if (value > root -> mValue) {
        root -> right = insertNode(value, root -> right);
        if (!isBalanced(root)) {
            if (value > root -> right -> mValue) {
                root = rightRotate(root);
            } else root = doubleRightRotate(root);
        }
    }
    return root;
}

BinaryTree :: Node* BinaryTree :: leftRotate(Node* root) {
    Node* temp = root -> left;
    Node* newTemp = temp -> right;
    temp -> right = root;
    root -> left = newTemp;
    return temp;
}

BinaryTree :: Node* BinaryTree :: doubleLeftRotate(Node* root) {
    root -> left = rightRotate(root -> left);
    return leftRotate(root);
}

BinaryTree :: Node* BinaryTree :: rightRotate(Node* root) {
    Node* temp = root -> right;
    Node* newTemp = temp -> left;
    temp -> left = root;
    root -> right = newTemp;
    return temp;
}

BinaryTree :: Node* BinaryTree :: doubleLeftRotate(Node* root) {
    root -> right = leftRotate(root -> left);
    return rightRotate(root);
}

bool BinaryTree :: findNode(int value, Node* root) {
    bool found = false;
    while(!isEmpty() && !found) {
        int newValue = root -> mValue;
        if (value < newValue) {
            root = root -> left;
        } else if (value > newValue) {
            root = root -> right;
        } else {
            found = true;
            break;
        }
        found = findNode(value, root);
    }
    return found;
}

void BinaryTree :: printTree(Node* root) {
    if (isEmpty()) {
        return;
    }
    std :: cout << root -> mValue << " ";
    printTree(root -> left);
    printTree(root -> right);
    std :: cout << std :: endl;
}
