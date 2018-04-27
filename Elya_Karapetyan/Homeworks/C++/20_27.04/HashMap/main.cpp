#include "hashMap.hpp"

void validNumber(int& number) {
    while (std::cin.fail()) {    
        std::cout << "Invalid Value: Try again!" << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << "Please enter the intager number: ";
        std::cin >> number;
    }
}

void chooseFunction(HashMap& hMap) {
    int check = -1;
    std::string key = "";
    int value = 0;
    while (0 != check) {
        switch (check){
            case 1:
                std::cout << "Key: ";
                std::cin >> key;
                std::cout << "Value: ";
                std::cin >> value;
                validNumber(value);
                hMap.add(key, value);
                break;
            case 2:
                value = 0;
                std::cout << "Key: ";
                std::cin >> key;
                if (hMap.getValueByKey(key, value)) {
                    std::cout << "\nkey: " << key << "\tvalue: " << value << std::endl;
                }
                break;
            case 3:
                key = "";
                std::cout << "Value: ";
                std::cin >> value;
                validNumber(value);
                if (hMap.getKeyByValue(key, value)) {
                    std::cout << "\nValue:" << value << "key: " << key << std::endl;
                } else {
                    std::cout << "\nKey does not exist!\n" << std::endl;
                }
                break;
            case 4:
                if(hMap.isEmpty()) {
                    std::cout << "\nHashMap is Empty!\n" << std::endl;
                } else {
                    std::cout << "\nHashMap isn't empty!\n" << std::endl;
                }
                break;
            case 5:
                hMap.print();
                break;
            case 6:
                std::cout << "Key: ";
                std::cin >> key;
                if (hMap.remove(key, value)) {
                } else {
                    std::cout << "inputed key does not exist!\n" << std::endl;
                }
                break;
            case 8:
                hMap.clear();
        }
        std::cout << std::endl << "1 - insert()\n2 - findValue()\n3 - findKey()\n4 - isEmpty()\n5 - Print()\n7 - remove()\n8 - clean()\n0 - Exit: ";
        std::cin >> check;
        validNumber(check);
        std::cout << std::endl;
    }
}

int main() {
    HashMap hMap;
    chooseFunction(hMap);
    return 0;
}

