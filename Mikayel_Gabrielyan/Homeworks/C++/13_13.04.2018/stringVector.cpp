#include "stringVector.hpp"

void creatVector(std::vector<std::string>& strVec) {
    std::string buffer = "";
    std::cout << "Mutqagrel Vectori stringner@. Avarti hamar mutqagrel 0\n\n";
    do{
        std::getline(std::cin, buffer);
        strVec.push_back(buffer);
    } while(buffer != "0");
}

void removeSimbol(std::vector<std::string>& strVec) {
    for(auto i = 0; i < strVec.size(); ++i) {
        for(auto j = 0; j < strVec[i].size(); ++j) {
            if( ('A' > strVec[i][j]) || ('z' < strVec[i][j]) || (('a' > strVec[i][j]) && ('Z' < strVec[i][j])) ) {
                strVec[i][j] = '\0';
            }
        }
    }
}

void printVector(std::vector<std::string> &strVec) {
    for(auto i : strVec) {
        std::cout << i << "  ";
    }
    std::cout << "\n";
}
