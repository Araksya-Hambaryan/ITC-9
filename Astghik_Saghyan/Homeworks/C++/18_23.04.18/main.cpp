#include <iostream>
#include "list.hpp"


int main() {
    List myList;
    std::cout << "List size:\t" << myList.getSize() << std::endl;
    std::cout << "Pushing 6 elements" << std::endl;
    for(int i = 0; i < 6; i++) {
        myList.push(i);
    }
    myList.printList();
    std::cout << "List size:\t" << myList.getSize() << std::endl;
    std::cout << "Pop once" << std::endl;
    myList.pop();
    std::cout << "List size after pop:\t" << myList.getSize() << std::endl;
    myList.printList();
    int index = 3;
    std::cout << index << "-th element is:\t" << myList.getElem(index) << "\n";
    std::cout << "Insert a number at 25-th index" << std::endl;
    myList.insert(25, 33);
    std::cout << "Insert 33 at 3-th index"<< std::endl;
    myList.insert(3, 33);
    myList.printList();
    std::cout << "Erase the elemenet at 2-th index"<< std::endl;
    myList.erase(2);
    std::cout << "List size after erase:\t" << myList.getSize() << std::endl;
    myList.printList();




    return 0;
} 
