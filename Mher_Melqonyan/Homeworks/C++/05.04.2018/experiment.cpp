#include <iostream>
int foo(int a, float b, char[] = "Tux") {
    std::cout <<"int-float";
}

int foo(int b, double a = 3.0) {
    std::cout <<"int-double";
}

int foo(int b, int a, char n) {
    std::cout << "int-int";
}

int main() {
    foo(7, 7.0);
    foo(8.1, 2, "ab");
    foo(7, 1, "p");
    foo(1, 2, 'a');
    return 0;
}
