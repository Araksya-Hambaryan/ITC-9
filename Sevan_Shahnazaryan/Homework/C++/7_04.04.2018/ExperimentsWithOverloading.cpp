#include <iostream>

void foo (int a, int b = 5) {
    std::cout << "INT!!" << std::endl;
}

void foo (float a, int b = 5) {
    std::cout << "FLOAT!!" << std::endl;
}

void foo (double a, int b = 5.0) {
    std::cout << "DOUBLE!" << std::endl;
}

void foo (char a) {
    std::cout << "CHAR!!" << std::endl;
}

int main() {
    foo(10);
    foo(15);
    //foo(5555555555555);
    foo(5.5);
    foo('I');
  //foo("Hello");
}
