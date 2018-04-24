#include <iostream>
#include "list.hpp"


int main() {
    List myList;
    std::cout << "List size:\t" << myList.getSize() << std::endl;
    std::cout << "List head:\t" << myList.head << std::endl;
    for(int i = 0; i < 6; i++) {
        myList.push(i);
    }
    myList.printList();
    std::cout << "List size:\t" << myList.getSize() << std::endl;
    std::cout << "List head:\t" << myList.head << std::endl;
    myList.pop();
    std::cout << "List size after pop:\t" << myList.getSize() << std::endl;
    myList.printList();
    int index = 3;
    std::cout << index << "-th element is:\t" << myList.getElem(index) << "\n";
    return 0;
} 
