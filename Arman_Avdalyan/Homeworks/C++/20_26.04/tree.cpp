#include "tree.hpp"
#include <iostream>

Tree :: Tree() : root(nullptr) {}

Tree :: Tree(const Tree& obj) {
    if(nullptr == obj.root) {
        root = nullptr;
    } else {
        copy(root, obj.root);
    }
}

Tree :: ~Tree() {
    clear(root);
}

void Tree :: add(int value) {
    Node* newNode = new Node;
    newNode -> value = value;
    root = sortAdd(root, newNode);
}

void Tree :: remove(int value) {
    remove(root, value);
}

bool Tree :: find(int value) {
    return find(root, value);
}

int Tree :: height(){
    return height(root);
}

bool Tree :: isEmpty() {
    return root == nullptr;
}

void Tree :: printTree() {
    printTree(root);
}

Tree :: Node* Tree :: sortAdd(Node* root, Node* newNode) {
    if (root == nullptr) {
        return newNode;
    }
    Node* temp = nullptr;
    if (root -> value > newNode -> value) {
        root -> left = sortAdd(root -> left, newNode);
        if(2 == height(root -> left) - height(root -> right)) {
            if (newNode -> value < root -> left -> value) {
                return rightRotate(root);
            }
            if (newNode -> value > root -> left -> value) {
                root->left =  leftRotate(root -> left);
                return rightRotate(root);
            }
        }
    } else {
        root -> right = sortAdd(root -> right, newNode);
        if(2 == height(root -> right) - height(root -> left)) {
            if (newNode -> value > root -> right -> value) {
                return leftRotate(root);
            }
            if (newNode -> value < root -> right -> value) {
                root -> right = rightRotate(root -> right);
                return leftRotate(root);
            }
        }
    }
    return root;
}


Tree :: Node* Tree :: remove(Node* root, int value) {
    if (nullptr == root) {
        return nullptr;
    }
    if (value < root -> value) {
        root -> left = remove(root -> left, value);
    } else if (value > root -> value) {
        root -> right = remove(root -> right, value);
    } else {
        if (nullptr == root -> left && nullptr == root -> right) {
            delete root;
            root = nullptr;
        } else if (nullptr == root -> left) {
            Node* temp = root -> right;
            delete root;
            root = temp;
        } else if (nullptr == root -> right) {
            Node* temp = root -> left;
            delete root;
            root = temp;
        } else {
            Node* temp;
            temp -> value = findMin(root -> right);
            root -> value = temp -> value;
            root -> right = remove(root -> right, temp -> value);
        }
    }
    return root;
}

bool Tree :: find(Node* root, int value) {
    if (nullptr == root) {
        return false;
    }
    if (root -> value = value) {
        return true;
    }
    find(root -> right, value);
    find(root -> left, value);
}

int Tree :: height(Node* root) {
    if (nullptr == root) {
        return 0;
    }
    int lHeight = height(root -> left);
    int rHeight = height(root -> right);

    return lHeight > rHeight ? ++lHeight: ++rHeight;
} 

void Tree :: clear(Node* root) {
    if (root == nullptr) {
        return;
    }
    clear(root -> left);
    clear(root -> right);
    delete root;
}

void Tree :: copy(Node* root, Node* objRoot) {
    if(nullptr == objRoot) {
        root = nullptr;
        return;
    }
    root = new Node;
    root -> value = objRoot -> value;
    copy(root -> left, objRoot -> left);
    copy(root -> right, objRoot -> right);
}
void Tree :: printTree(Node* root) {
    if (root == nullptr) {
        return;
    }
    std :: cout << root -> value << "\n";
    printTree(root->left);
    printTree(root->right);
}

int Tree :: findMin(Node* root) {
    if (nullptr == root) {
        return 0;
    }
    if (nullptr != root->left) {
        return findMin(root->left);
    }
    return root -> value;
}

Tree :: Node* Tree :: rightRotate(Node *root) {
    Node* temp = root -> left;
    Node* temp2 = temp -> right;
    temp -> right = root;
    root -> left = temp2;
    return temp;
}

Tree :: Node* Tree :: leftRotate(Node *root) {
    Node* temp = root -> right;
    Node* temp2 = temp -> left;
    temp -> left = root;
    root -> right = temp2;
    return temp;
}
