#include <iostream>

int preDecr(int* arg) {
    return *arg - 1;
}

int posDecr(int* arg) {
    int num = *arg;
    *arg -= 1;
    return num;
}

int main() {
    int par;
    std::cout << "i = ";
    std::cin >> par;
    int* arg = &par;
    std::cout << "--i = " << preDecr(arg) << std::endl;
    std::cout << "i-- = " << posDecr(arg) << std::endl; 
    return 0;
}

