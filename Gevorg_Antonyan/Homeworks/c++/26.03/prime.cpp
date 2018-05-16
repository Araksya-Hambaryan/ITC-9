
#include <iostream>
int main() {
    int num;
    bool k = 0;    
    std::cout << "mutqagrel tiv" << std::endl;
    std::cin >> num;
    if(4 == num){
        k=1;
        }
    for( int i = 2; i <= (num/i); i++) {
        if(0 == num % i) {
            num = 0;
            k = 1;
        }
    }
    if(1 == k){
        std::cout << "baxadryal";
    }else{
        std::cout << "parz";
    }
    return 0;
}
