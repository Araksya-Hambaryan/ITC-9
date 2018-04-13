#include "vectorOfStrings.hpp" 

int main() {
    const int size = 5;
    std::vector<std::string> strVect(size);
    initVector(strVect);
    printVector(strVect);
    removeElementFromVector(strVect);
    printVector(strVect);

    return 0;
}                                                               

