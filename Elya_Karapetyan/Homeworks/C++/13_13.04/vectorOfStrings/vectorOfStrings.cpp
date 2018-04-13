#include "vectorOfStrings.hpp"

void initVector(std::vector<std::string>& strings) {
    std::cout << "Enter 5 string for vector: ";
    for (auto i = 0; i < strings.size(); ++i) {
        std::cin >> strings[i];
    }
}

void printVector(const std::vector<std::string>& strings) {
    std::cout << "\n=====Vector of strings=====\n" << std::endl;
    for (auto item : strings) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}

void removeElementFromVector(std::vector<std::string>& strings) {
    for (auto i = 0; i < strings.size(); ++i) {
        for (auto j = 0; j < strings[i].size(); ++j) {
            if (!((('A' <= strings[i][j] && 'Z' >= strings[i][j])) || ('a' <= strings[i][j] && 'z' >= strings[i][j]))) {
                strings[i][j] = '\0';
            }
        }
    }
}

