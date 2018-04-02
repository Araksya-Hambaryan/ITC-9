#include <iostream>
int main() {
    int tiv;
    std::cout << "nermuceq tiv@" << std::endl;
    std::cin >> tiv;
    std::cout << "parz atradrichner@ klinen" << std::endl;
    for(int i = 1; i <=  tiv ; ++i) {
        if(0 == tiv % i) {
            tiv /= i;
            std::cout << i <<std::endl;
            return 0;
        }
     }
}
