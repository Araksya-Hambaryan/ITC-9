#include <iostream>
int foo(int a, float b, std::string st = "Tux") {
    std::cout <<"int-float\n";
}

int foo(int b, double a = 3.0) {
    std::cout <<"int-double\n";
}

int foo(int b, int a, char n) {
    std::cout << "int-int\n";
}
int foo(float a, float b, float c = 70.5){
    std::cout << "float- float\n";
}
int foo(char a, int b, double c = 30.3) {
    std::cout << "char-int\n";
}
int foo(double a, double b, double c) {
    std::cout << "double-double\n";
}

int main() {
    foo(7, 7.0);
    foo(8.1, 2, "ab");
    foo(7, 1, "p");
    foo(1, 2, 'a');
    foo(1.3, 2.0, 5.4);
    //foo(1.4, 4, 5.0);eror vorovhetev 4 int e haskanum
    foo('a', 3);
    return 0;
}
