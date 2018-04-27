#include "binaryTree.hpp"

int main() {
	BinaryTree tree;
    tree.balInsert(1);
    tree.balInsert(2);
    tree.balInsert(3);
    tree.balInsert(4);
    tree.balInsert(5);
    tree.balInsert(6);
	tree.travers();
     
    return 0;
}

