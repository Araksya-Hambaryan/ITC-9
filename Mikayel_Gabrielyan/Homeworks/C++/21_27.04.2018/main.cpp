#include <iostream>
#include "hashTable.hpp"

int main() {
    HashTable hash;
    std::string key = "";
    std::string value = "";
    int check = 0;
    while (4 != check) {
        switch (check){
            case 1:
                std::cout << "Mutqagrel Key -> ";
                std::cin >> key;
                std::cout << "Mutqagrel Value -> ";
                std::cin >> value;
                hash.add(key, value);
                break;
            case 2:
                std::cout << "Mutqagrel Key -> ";
                std::cin >> key;
                if (hash.get(key, value)) {
                    std::cout << "\nKey     Value\n";
                    std::cout << key << "   ->   " << value << std::endl;
                }
                break;
            case 3:
                std::cout << "Mutqagrel Key -> ";
                std::cin >> key;
                if (hash.remove(key, value)) {
                    std::cout << "Key\tValue\n";
                    std::cout << key << "    ->   " << value << "      deleted \n";
                } else {
                    std::cout << "Aydpisi Key-ov arjeq chka HashTable-um \n";
                }
                break;
        }
        std::cout << "\n1-Add, 2-Get, 3-Remove, 4-Exit -> ";
        std::cin >> check;
        std::cout << std::endl;
    }
    return 0;
}

