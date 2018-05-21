#include <iostream> 
#include "vector.hpp"

void printVector(Vector& vector) {
    int length = vector.size();
    for (int i = 0; i < length; ++i) {
        std :: cout << vector.get(i) << " ";
    }
    std :: cout << std :: endl;
}

int main() {
    Vector vector1(10, 7);
    printVector(vector1);

    vector1.push(15);
    vector1.push(0);
    vector1.push(2);
    vector1.push(20);
    vector1.push(13);
    vector1.push(16);
    vector1.push(11);
    vector1.push(9);
    vector1.push(5);
    vector1.push(6);

    printVector(vector1);

    Vector vector2(vector1);
    vector2.pop();
    
    printVector(vector2);

    return 0;
}
