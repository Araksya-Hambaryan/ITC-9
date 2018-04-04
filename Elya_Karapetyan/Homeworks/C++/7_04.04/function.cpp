#include <iostream>

void foo(int firstArg, float secondArg, char thirdArgi = 'T') {
    std::cout << "Arguments are int, double, char" << std::endl;
}

void foo(int firstArg, double secondArg) {
    std::cout << "Arguments are int, double" << std::endl;
}

int main() {

    foo(5, 5.0); // called second foo function 
    foo('5', 5.2356); // called second foo function, '5' convert to int
    foo(5, 5.3, 'h'); // called first foo function

    foo(5.8, 5.12, 'a'); // called first foo functioni, 5.8 convert to int - 5
    foo(8.1, 2, 'a'); // called first foo functioni, 8.1 convert to int - 8
                      // and 2 convert to float 2.0
    bool a = true;
    foo(a, 5.2); // called second fpp function, bool a convert to int - 1
    double d = 5.55;
    foo(5, d, 's'); // double convert to float and called first function
    float f = 55.555;
    foo(5, f); // called first function  

    return 0;
}
