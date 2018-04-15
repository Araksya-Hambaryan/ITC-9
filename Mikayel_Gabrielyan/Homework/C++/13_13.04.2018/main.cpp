#include "stringVector.hpp"

int main() {
    std::vector<std::string> strVec;
    creatVector(strVec);
    removeSimbol(strVec);
    std::cout << "\t\t\t<- Verjnakan Vector@ klini -> \n\n";
    printVector(strVec);
    return 0;
}

