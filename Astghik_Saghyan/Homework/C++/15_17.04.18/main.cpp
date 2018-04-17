#include <iostream>
#include "vector.hpp"

void printVec(int* arr, int size) {
    for(int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


int main() {
    Vector myVec;
    myVec.buildArr(10, 8);
    int size = myVec.getSize();
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
    return 0;
} 
