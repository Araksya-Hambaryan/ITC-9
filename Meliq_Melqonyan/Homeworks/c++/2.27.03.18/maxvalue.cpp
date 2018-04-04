#include <iostream>

int main () {
    int i = 2;
    while (i + 1 > 0) {
        i *= 2;
    };
    std:: cout << "Maximum value of int:  " << i-1 << "     " << std::endl;
    std:: cout << "Minimum value of int:  " << i    << "     " << std::endl;
    std:: cout << "Maximum value of float:  " << i-1 << "     " << std::endl;
    std:: cout << "Minimum value of float:  " << i    << "     " << std::endl;
    return 0;
}

