#include <iostream>
#include <cmath>
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
        switch(arr[i]) {
            case(10):
                std::cout << 'A' ;
                break;
            case(11):
                std::cout << 'B' ;
                break;
            case(12):
                std::cout << 'C' ;
                break;
            case(13):
                std::cout << 'D' ;
                break;
            case(14):
                std::cout << 'E' ;
                break;
            case(15):
                std::cout << 'F' ;
                break;
            default: 
                std::cout << arr[i] ;
        }
    }
    std::cout << std::endl;
}    

bool numb(std::string num) {
    for(int i = 0; i < num.size(); ++i) {
        if( '0' > num[i] || '9' <num[i]) {
            return false;
        }
    }
    return true;
}

int number(std::string num) {
    int a = 0;
    for(int i = 0; i < num.size(); ++i) {
        a = a + ((int)num[i] - 48) * pow(10, num.size() - 1 - i);
    }
    return a;
}



int main () {
    int num = 0;
    int system = 0;
    std::string num0;
    std::string system0;
    std::cout << "enter number" << std::endl;
    std::cin >> num0;
    std::cout << "enter convert system" << std::endl;
    std::cin >> system0;
    while(!numb(num0)) {        
        std::cout << "enter corret number" << std::endl;
        std::cin >> num0;
    }
    num = number(num0);    
    do {
        while(!numb(system0)) {
            std::cout << "enter correct convert system" << std::endl;
            std::cin >> system0 ; 
        } 
        system = number(system0);
    } while (1 >= system);
    if (num < 0) {
        std::cout << '-' ;
        num = num * -1;
        convert(num, system);
    } else {
        convert(num, system);
    }
    return 0;
}
