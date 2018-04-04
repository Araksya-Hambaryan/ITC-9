#include <iostream>

int &preDecrement(int &num) {
    return num -= 1;
}

int postDecrement(int* num) {
    int psevdoNum = *num;
    *num -= 1;
    return psevdoNum;
}
int main() {
    int num;
    std::cout << "num = ";
    std::cin >> num;
    int *pNum = &num;
    std::cout << "++i = " << preDecrement(num) << std::endl;
    std::cout << "&num = " << &num << std::endl;
    std::cout << "i++ = " << postDecrement(pNum) << std::endl;
    std::cout << "i =  " << num << std::endl;
    std::cout << "&num = " << &num << std::endl;
}
