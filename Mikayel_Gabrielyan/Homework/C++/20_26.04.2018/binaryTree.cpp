#include "binaryTree.hpp"
#include <iostream>

BinaryTree::BinaryTree()
   : root(nullptr)
{ }

BinaryTree::BinaryTree(const BinaryTree& orig)
    :root(nullptr)
{   
    root = copyTree(orig.root);
}

BinaryTree::node* BinaryTree::copyTree(node* other) {
    if (nullptr == other) {
        return nullptr;
    }
    node* newNode = new node(other->data);
    newNode -> left = copyTree(other -> left);
    newNode -> right = copyTree(other -> right);
    return newNode;
}

BinaryTree::~BinaryTree() {
    remove(root); 
}

void BinaryTree::insert(int value) {
    node* newNode = new node(value);
    root = sortedInsert(root, newNode);
}

BinaryTree::node* BinaryTree::sortedInsert(node* root, node* newNode) {
    if (nullptr == root) {
        return newNode;
    }
    if (root -> data > newNode -> data) {   
        root -> left = sortedInsert(root -> left, newNode);
    }
    else {
        root -> right = sortedInsert(root -> right, newNode);
    }
    return root;
}

bool BinaryTree::find(node* root, int value) {
    if (nullptr == root) {
        return false;
    } else if (root -> data == value) {
        return true;
    } else if (value <= root -> data) {
        return find(root -> left, value);
    } else {
        return find(root -> right, value);
    }
}

bool BinaryTree::find(int value) {
    find(root, value);
}

void BinaryTree::print(node* start) {
    if (nullptr == start) {
        return;
    }
    std::cout << start -> data << std::endl;
    print(start -> left);
    print(start -> right);
}

void BinaryTree::print() {
    print(root);
}

void BinaryTree::remove(node* start) {
    if (nullptr == start) {
        return;
    }
    remove(start -> left);
    remove(start -> right);
    delete start;
}

void BinaryTree::remove(int value) {
    remove(root);
}
