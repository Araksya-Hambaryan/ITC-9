#include <iostream>
#include "vector.h"

void printVector(Vector& v) {
    int size = v.size();
    for (int i = 0; i < size; ++i) {
        std :: cout << v.get(i) << "  ";
    }
    std :: cout << std :: endl;
}

int main() {
    Vector vector(4);
    vector.push(10);
    vector.push(18);
    vector.push(30);
    vector.push(17);
    vector.push(14);
    vector.push(13);
    vector.push(11);
    vector.push(11);

    printVector(vector);
    Vector newVector(vector);
    newVector.pop();
    printVector(newVector);
    printVector(vector);
    return 0;
}
