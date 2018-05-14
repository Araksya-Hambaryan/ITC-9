#include <iostream>

bool prime(int number) {
    bool k = 1;
    for( int i = 2; i <= (number / i); i++) {
        if(0 == number % i) {
            k = 0;
            break;
        }
    }
    return k;
}

int main() {
    int num = 0;
    int size = 0;
    int num2 = 0;
    std::cout << "enter natural number" << "-";
    std::cin >> num ;
    std::cout << "enter natural number2" << ": " ;
    std::cin >> num2;
    std::cout << "prime numbers is :" ;
    for (int i = 2; i <= num / 2 ; ++i) {          // num / 2  ????
        if (0 == num % i) {
            if (true == prime(i)) {
                if(0 != num2 % i) {
                    std::cout << i << " ," ;
                    ++size;
                }
            }
        }
    }
    if (0 == size) {
        if (0 != num2 % num) {
            std::cout << num << std::endl;
        }
    }
    std::cout<<std::endl;
    return 0;
}
