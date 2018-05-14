#include <iostream>

int preDecr(int &arg) {
    arg = arg - 1;
    return arg;
}

int posDecr(int &num) {
    int arg = num ;
    num -= 1;
    return arg;
}

int main() {
    int par;
    std::cout << "i = ";
    std::cin >> par;
    int num = par;
    std::cout << "--i = " << preDecr(par) << std::endl;
    std::cout << "i-- = " << posDecr(num) << std::endl; 
    return 0;
}
