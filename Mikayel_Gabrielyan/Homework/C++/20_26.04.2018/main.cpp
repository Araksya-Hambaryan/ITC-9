#include <iostream>
#include "binaryTree.hpp"

int main() {
    BinaryTree tree;
    int chack = 0;
    int value = 0;
    while (chack != 5) {
        switch (chack) {
            case 1:
                std::cout << "Mutqagrel arjeq@ -> ";
                std::cin >> value;
                tree.insert(value);
                break;
            case 2:
                std::cout << "Mutqagrel arjeq@ -> ";
                std::cin >> value;
                if (tree.find(value)) {
                    std::cout << "\nMutqagrvac arjeq@ KA !!!\n";
                } else {
                    std::cout << "\nMutqagrvac arjeq@ CHKA !\n";
                }
                break;
            case 3:
                tree.print();
                break;
            case 4:
                tree.remove();
                break;
        }
        std::cout << "\n1-Insert, 2-Find, 3-Print, 4-Remove, 5-EXIT -> ";
        std::cin >> chack;
    }
    delete tree;
    return 0;
}

