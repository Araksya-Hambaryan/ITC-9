#include <iostream>

int preDecr(int &arg) {
    return arg -= 1;
}

int posDecr(int &arg) {
    int &num = arg;
    num -= 1;
    return arg;
}

int main() {
    int par;
    std::cout << "i = ";
    std::cin >> par;
    std::cout << "--i = " << preDecr(par) << std::endl;
    std::cout << "i-- = " << posDecr(par) << std::endl; 
    return 0;
}
