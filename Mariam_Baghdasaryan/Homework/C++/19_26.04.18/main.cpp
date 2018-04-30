#include "binaryTree.hpp"
#include <iostream>

int main() {
    BinaryTree* binaryTree = new BinaryTree;

    binaryTree -> insert(1);
    binaryTree -> insert(2);
    binaryTree -> insert(3);
    binaryTree -> insert(4);
    binaryTree -> insert(5);
    binaryTree -> insert(6);

    binaryTree -> print();

    delete binaryTree;
    binaryTree = nullptr;

    return 0;
}
