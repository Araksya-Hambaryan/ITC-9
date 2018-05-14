#include <iostream>
int main() {
    float num1;
    char sim;
    float num2;
    float k = 0;
    std::cout << "mutqagrel gumareliner" << std::endl;
    std::cin >> num1 >> sim >> num2;
    if('+' == sim) {
        k = num1 + num2;
    } else {
        if('-' == sim) {
            k = num1 - num2;
        } else {
            if('*' == sim) {
                k = num1 * num2;
            } else {
                if('/' == sim) {
                    if(0 == num2) {
                        std::cout << "error";
                    } else {
                        k = num1 / num2;
                    }
                }
            }
        }
    }
    std::cout << num1 << sim << num2 << "=" << k;
    return 0;
}
   
