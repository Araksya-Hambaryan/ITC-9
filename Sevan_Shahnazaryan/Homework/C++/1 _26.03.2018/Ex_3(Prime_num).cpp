#include <iostream>

int main() {
    unsigned int num;
    while(std::cout << "num = ", std::cin >> num) {
    int val = 0;
    for (int i = 2; i <= num / 2; i++) {
        if(num % i == 0) {
            std::cout << "This number is NOT prime" << std::endl;
            val = 1;
            break;
            }
        
    }
    if (1 != val) {
    std::cout << "This is a prime number" << std::endl;}
    }
    std::cout << "Incorrect input, bye :-( \n";
return 0;
}
