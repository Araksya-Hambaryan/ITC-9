#include <iostream>

int& prefix(int& number) {
    number -= 1;
    return number;
}

int postfix(int& number) {
    int tmp = number;
    number -= 1;
    return tmp;
}

int main() {
    int number = 5;
    std::cout << "Number: " << number << std::endl;
    std::cout << "prefix: " << prefix(number) << std::endl;
    std::cout << "postfix: " << postfix(number) << std::endl;
    std::cout << "Number: " << number << std::endl;
    
    return 0;
}
