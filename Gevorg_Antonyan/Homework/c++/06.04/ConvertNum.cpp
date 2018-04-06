#include <iostream>

void convert(int num, int system) {
    int n = num;
    int s = system;
    int size = 0;
    bool k = 1;
    while(k) {
        n = n / s;
        ++size;
        if(0 == n) {
            k = 0;
        }
    }
    int arr[size];
    for(int i = size - 1; i >= 0; --i) {
       arr[i] = num % system;
       num = num / system;
    }
    for(int i = 0; i < size; ++i) {
        if(10 == arr[i]) {
            std::cout << 'A' ;
        } else if(11 == arr[i]) {
            std::cout << 'B' ;
        } else if(12 == arr[1]) {
            std::cout << 'C' ;
        } else if(13 == arr[i]) {
            std::cout << 'D' ;
        } else if(14 == arr[i]) {
            std::cout << 'E' ;
        } else if(15 == arr[i]) {
            std::cout << 'F' ;
        } else { 
            std::cout << arr[i] ;
        }
    }
    std::cout << std::endl;
}    



int main () {
    int num = 0;
    int system = 0;
    std::cout << "enter number" << std::endl;
    std::cin >> num ;
    std::cout << "enter convert system" << std::endl;
    std::cin >> system ;
    while(1 >= system) {
        std::cout << "enter correct system" << std::endl;
        std::cin >> system;
    }
    if (num < 0) {
        std::cout << '-' ;
        num = num * -1;
        convert(num, system);
    } else {
        convert(num, system);
    }
    return 0;
}
