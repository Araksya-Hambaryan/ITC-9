#include <iostream>
#include "vector.hpp"


int main() {
    Vector myVec;
    myVec.buildArr(10, 8);
    int index = 5;
    std::cout << index << "-th element is:\t" << myVec.getElem(index) << "\n";
    myVec.push(10);
    myVec.push(10);
    myVec.push(10);
    myVec.push(10);
    myVec.push(10);
    myVec.push(10);
    myVec.push(10);
    myVec.push(10);
    myVec.push(10);
    myVec.push(10);
    int size = myVec.getSize();
    int* myVector = myVec.getVector();
    myVec.printVec();
    Vector otherVec = myVec;
    otherVec.printVec();
    return 0;
} 
