#include <iostream>
#include <cmath>

int main() {
    unsigned long long  num = 0;
    std::cout << "To finish the program, input 'OK'" << std::endl;
    while(std::cout << "\ninput an integer number: ", std::cin >> num) {
        unsigned long long saved = 0;
        for (unsigned long long i = 1; i < sqrt(num) + 0.0001;) {
            if (0 == num % i && i != saved) {
                std::cout << i << " ";
                saved = i;
                num /= i;
            } else {
                i++;
            }
        }
        if (num > 1) {
            std::cout << num;
        }
    }
    return 0;      
}

