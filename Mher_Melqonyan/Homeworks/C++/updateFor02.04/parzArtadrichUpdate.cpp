#include <iostream>
int main() {
    int tiv;
    int mem = 0;
    std::cout << "nermuceq tiv@" << std::endl;
    std::cin >> tiv;
    std::cout << "parz atradrichner@ klinen" << std::endl;
    for(int i = 2; i <=  tiv ; ++i ) {
        if(0 == tiv % i) {
            if(mem != i){
            std::cout << i <<std::endl;
            }
            mem = i;
            tiv /= i;
           --i;  
        }
    }
    return 0;
}
