#include <iostream>
#include "tree.hpp"

int main() {
    Tree* t = new Tree;
    t -> add(20);
    t -> add(10);
    t -> add(15);
    t -> add(17);
    t -> add(30);
    t -> add(12);
    t -> add(1);
    t -> add(2);
    t -> add(3);
    t -> add(4);
    t -> add(5);
    t -> add(6);
    t -> add(7);
    t -> add(40);
    t -> add(32);
    t -> add(21);
    t -> add(22);
    t -> add(14);
    t -> add(25);
    t -> remove(7);
    t->printTree();

    std :: cout << "\nHeight = " << t -> height();
    std :: cout << "\nFind 15 = " << t -> find(15) << std :: endl;
    return 0;
}
