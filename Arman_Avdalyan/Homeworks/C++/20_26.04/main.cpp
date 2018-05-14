#include <iostream>
#include "tree.hpp"

int main() {
    Tree* t = new Tree;
    t -> add(60);
    t -> add(9);
    t -> add(68);
    t -> add(8);
    t -> add(10);
    t -> add(7);
  t -> add(70);
//  t -> add(2);
//  t -> add(3);
//  t -> add(4);
//  t -> add(5);
//  t -> add(6);
//  t -> add(7);
//  t -> add(40);
//  t -> add(32);
//  t -> add(21);
//  t -> add(22);
//  t -> add(14);
//  t -> add(25);
//  t -> remove(7);
    t->printTree();

    std :: cout << "\nHeight = " << t -> height();
    std :: cout << "\nFind 15 = " << t -> find(15) << std :: endl;
    return 0;
}
