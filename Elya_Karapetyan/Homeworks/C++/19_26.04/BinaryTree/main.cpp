#include "binaryTree.hpp"

void validNumber(int& number) {
    while (std::cin.fail()) {    
        std::cout << "Invalid Value: Try again!" << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << "Please enter the intager number: ";
        std::cin >> number;
    }
}

void chooseFunction(BinaryTree& tree) {
    int check = -1;
    int value = 0;
    while (0 != check) {
        switch (check){
            case 1:
                std::cout << "Value: ";
                std::cin >> value;
                validNumber(value);
                tree.sortedInsert(value);
                break;
            case 2:
                std::cout << "Value: ";
                std::cin >> value;
                validNumber(value);
                tree.balansedInsert(value);
                break;
            case 3:
                std::cout << "Searched value: ";
                std::cin >> value;
                validNumber(value);
                if (tree.find(value)) {
                    std::cout << "\nValue does exist!\n"<< std::endl;
                } else {
                    std::cout << "\nValue does not exist!\n" << std::endl;
                }
                break;
            case 4:
                if(tree.isEmpty()) {
                    std::cout << "\nBinary tree is Empty!\n" << std::endl;
                } else {
                    std::cout << "\nBinary tree isn't empty!\n" << std::endl;
                }
                break;
            case 5:
                tree.travers();
                break;
            case 6:
                std::cout << "Value: ";
                std::cin >> value;
                /*if (*/tree.remove(value);/*) {
                } else {
                    std::cout << "Inputed value does not exist!\n" << std::endl;
                }*/
                break;
        }
        std::cout << std::endl << "1 - Sorted insert()\n2 - Balansed insrt()\n3 - find value()\n4 - isEmpty()\n5 - Print()\n6 - remove()\n0 - Exit: ";
        std::cin >> check;
        validNumber(check);
        std::cout << std::endl;
    }
}

int main() {
	BinaryTree tree;
    chooseFunction(tree); 
    return 0;
}

