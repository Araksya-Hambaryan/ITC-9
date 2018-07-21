#include <iostream>

int& prefix( int& num) {
    num = num -  1;
    return num;
}

int postfix( int& num ) {
    int temp = num;
    num = num - 1;
    return temp;
}

int main() {
    int num = 0;
    std::cout << "Enter an  intager : ";
    std::cin >> num;
    std::cout << "prefix is  " << prefix(num) << std::endl;
    std::cout << "postfix  is  " << postfix(num) << std::endl;
    std::cout << "Number already is : " << num << std::endl;
    
    return 0;
}
