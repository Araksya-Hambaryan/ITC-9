#include <iostream>
#include "vector.hpp"


int main() {
    Vector myVec;
    myVec.buildArr(10, 8);
    int index = 5;
    std::cout << index << "-th element is:\t" << myVec.getElem(index) << "\n";
    index = 25;
    myVec.getElem(index);
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
    otherVec.pop();
    otherVec.pop();
    otherVec.pop();
    otherVec.pop();
    otherVec.pop();
    std::cout << "otherVec size:\t" << otherVec.getSize() << std::endl; 
    otherVec.printVec();
    return 0;
} 
