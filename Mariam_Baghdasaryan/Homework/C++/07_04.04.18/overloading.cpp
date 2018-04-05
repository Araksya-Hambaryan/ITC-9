#include <iostream>

void foo(int first = 9, float second = 4., char third = 'A') {
    std :: cout << "Arguments are int, double, char." << std :: endl;
    std :: cout << first << "\t" << second << "\t" << third << std :: endl << std :: endl;
}

void foo(int first, double second = 8.) {
    std :: cout << "Arguments are int, double." << std :: endl;
    std :: cout << first << "\t" << second << std :: endl << std :: endl;
}

int main() {
    foo(10, 11.4, 'B');
    foo();
    
    foo(16, 16.5);
    
    double d = 77.777;
    foo(7, d, 'C');
    foo(7, d);
    
    float f = 6.6;
    foo(20, f);

    bool b1 = true;
    foo(b1, 3.2, 'D');

    bool b2 = false;
    foo(b2, 20, 'Z');

    foo(b1, d, 'E');
    foo(b2, d);
    foo(b1, f);

    return 0;
}
