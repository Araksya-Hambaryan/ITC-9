#include <iostream>


void foo(int a, float b ,char c) {
    std::cout << "function 1" << std::endl;
}

void foo(float a, int b, char c) {
    std::cout << "function 2" << std::endl;
}

void foo(char a, int b, float c) {
    std::cout << "function 3" << std::cout;
}

void foo1(float a) {
    std::cout << "function2 1" << std::endl; 
}

void foo1(int a) {
    std::cout << "function2 2" << std::endl;
}


int main() {
    std::cout << "cin int, float, char" << std::endl;
    foo(3, 3.5, 'n');
    std::cout << "cin float, int, char" << std::endl;
    foo(3.5, 3, 'n');
    std::cout << "cin char, int, float" << std::endl;
    foo('a', 3, 3.5);
    std::cout << "cin int, char, float" << std::endl;
//    foo(3, 'n', 3.5);
    std::cout << "cin float" << std::endl;
//    foo1(3.5);
    std::cout << "cin int" << std::endl;
    foo1(3);
    return 0;
}
