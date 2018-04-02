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
    int size1 = 0;
    int size2 = 0;
    int num1 = 0;
    int num2 = 0;
    std::cout << "enter natural number1" << ": " ;
    std::cin >> num1 ;
    std::cout << "enter natural number2" << ": " ;
    std::cin >> num2;
    for (int i = 2; i <= num1 / 2 ; ++i) {
        if (0 == num1 % i) {
            if (true == prime(i)) {
                ++size1;
            }
        } 
    }
    if (0 == size1) {
       size1 = 1;   
    }
    int primenumbers1[size1];
    if(1 == size1) {
        primenumbers1[0] = num1;
    } else {
        for (int j = 2; j <= num1 / 2; ++j) {
            int i = 0;
            if (0 == num1 % j) {
                if (true == prime(j)) {
                    primenumbers1[i] = j;
                    ++i;
                }
            }                    
        }
    }
    for (int i = 2; i <= num2 / 2 ; ++i) {
        if (0 == num2 % i) {
            if (true == prime(i)) {
                 ++size2;
            }
        }
    }
    if (0 == size2) {
       size2 = 1;   
    }
    int primenumbers2[size2];
    if(1 == size2) {
        primenumbers2[0] = num2;  
    } else {
            for (int j = 2; j <= num2 / 2; ++j) {
                int i = 0;
                if (0 == num2 % j) {
                    if (true == prime(j)) {
                        primenumbers2[i] = j;
                        ++i;
                    }
                }    
            }
        }
    std::cout << " prime numbers - " ;
    for (int i = 0; i < size1; ++i) {
        bool x = 1;
        for (int j = 0; j < size2; ++j) {
            if (primenumbers1[i] == primenumbers2[j]) {
               x = 0;
               break;
            }
        
        if (true == x) {
            std::cout << primenumbers1[i] << ", " ;
            }
        }
    }
    std::cout<< std::endl;    
    return 0;
}   
