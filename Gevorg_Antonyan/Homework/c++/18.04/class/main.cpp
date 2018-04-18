#include "Vector.hpp"
#include "Stack.hpp"

int main() {
    Vector a();
    Vector a1(5,5);
    a1.push(5);
    a1.printVector();
    std::cout << std::endl;
    a1.push(6);
    a1.printVector();
    std::cout << std::endl;
    a1.Size();
    a1.element(2);
    a1.pop(); 
    Vector a2(a1);
    Vector a3 = std::move(a1);
    return 0;
}

