#include "list.hpp"

void validNumber(int& number) {
    while (std::cin.fail()) {    
        std::cout << "Invalid Value: Try again!" << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << "Please enter the intager number: ";
        std::cin >> number;
    }
}

void chooseFunction(List& myList) {
    int check = -1;
    int index = 0;
    int value = 0;
    std::cout << "\n\t=====Choose Function=====\n" << std::endl;
    while (0 != check) {
        switch (check) {    
            case 0: 
                return;
            case 1:
                std::cout << "Enter value: ";
                std::cin >> value;
                validNumber(value);
                myList.push_front(value);
                myList.printList();
               break;
            case 2:
                std::cout << "Enter value: ";
                std::cin >> value;
                validNumber(value);
                myList.push_back(value);
                myList.printList();
                break;
            case 3:
                std::cout << "Enter index: ";
                std::cin >> index;
                validNumber(index);
                std::cout << "Enter value: ";
                std::cin >> value;
                validNumber(value);
                myList.insert(index, value);
                myList.printList();
                break;
            case 4:
                myList.pop_front();
                myList.printList();
                break;
            case 5:
                myList.pop_back();
                myList.printList();
                break;
            case 6:
                std::cout << "Enter index: ";
                std::cin >> index;
                myList.erase(index);
                validNumber(index);
                myList.printList();
                break;
            case 7:
                if (myList.isEmpty()) {
                    std::cout << "\nList is empty!\n" << std::endl;
                } else {
                    std::cout << "\nList isn't empty!\n" << std::endl;
                }
                break;
            case 8:
                std::cout << "\nSize of list: " << myList.getSize() << std::endl << std::endl;
                break;
        }
        std::cout << "1. push_front\t2. push_back\t3. insert\n4. pop_front\t5. pop_back\t6. erase\n7. isEmpty\t8. getSize\n0 for Exit: "; 
        std::cin >> check; 
        validNumber(check);
    }
}

int main() {
    List myList;
    chooseFunction(myList);
    return 0;
}
