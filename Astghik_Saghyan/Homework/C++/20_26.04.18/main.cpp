#include <iostream>
#include "tree.hpp"


int main() {
    BBTree myBBTree;
    std::cout << "BBTree size:\t" << myBBTree.getSize() << std::endl;
    std::cout << "Inserting from 0 to 5" << std::endl;
    /*for(int i = 0; i < 6; i++) {
        myBBTree.insert(i);
    }
    myBBTree.printBBTree();
    std::cout << "BBTree size:\t" << myBBTree.getSize() << std::endl;
    std::cout << "Pop once" << std::endl;
    myBBTree.pop();
    std::cout << "BBTree size after pop:\t" << myBBTree.getSize() << std::endl;
    myBBTree.printBBTree();
    int index = 3;
    std::cout << index << "-th element is:\t" << myBBTree.getElem(index) << "\n";
    std::cout << "Insert a number at 25-th index" << std::endl;
    myBBTree.insert(25, 33);
    std::cout << "Insert 33 at 3-th index"<< std::endl;
    myBBTree.insert(3, 33);
    myBBTree.printBBTree();
    std::cout << "Erase the elemenet at 2-th index"<< std::endl;
    myBBTree.erase(2);
    std::cout << "BBTree size after erase:\t" << myBBTree.getSize() << std::endl;
    myBBTree.printBBTree();



*/
    return 0;
} 
