#include <iostream>

void foo(int a, int b, int c) {
    std::cout << "Call foo with args (int, int, int)" << std::endl;
}

void foo(int x, int* y) {
    std::cout << "Call foo with args (int, int*)" << std::endl;
}

void foo1(int a, int b, int c = 3) {
    std::cout << "Call foo1 with args (int, int, int default)" << std::endl;
}

void foo1(int a, int b, char c = 'l') {
    std::cout << "Call foo1 with args (int, int, char default)" << std::endl;
}

void foo2(int a, int b, int c) {
    std::cout << "Call foo2 with args (int, int, int)" << std::endl;
}

void foo2(int a, int b) {
    std::cout << "Call foo2 with args (int, int)" << std::endl;
}

void foo3(int a) {
    std::cout << "Call foo3 with arg (int)" << std::endl;
}

void foo3(float a) {
    std::cout << "Call foo3 with arg (double)" << std::endl;
}
void foo4(int a) {
    std::cout << "Call foo3 with arg (int)" << std::endl;
}

void foo4(double a) {
    std::cout << "Call foo3 with arg (double)" << std::endl;
}

int main() {
    
    int k = 10;
    int *m = &k;
    foo(2, 5, 5);
    foo(2, m);
    foo1(2, 5, 5);
    foo1(2, 5, 'a');
//    foo1(2, 5); //Do not let to compile;
    foo2(5, 4, 6);
    foo2(1, 2);
    foo3(5);
//    foo3(1.0);  //Do not let to compile;
    foo4(5);
    foo4(1.0);
    return 0;
} 
