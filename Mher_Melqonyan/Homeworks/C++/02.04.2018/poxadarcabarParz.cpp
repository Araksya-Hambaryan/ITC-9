#include <iostream>
int main() {
    int tiv1;
    int tiv2;
    std::cout << "nermuceq arajin tiv@" << std::endl;
    std::cin >> tiv1 ;
    std::cout << "nermuceq erkrord tiv@" << std::endl;
    std::cin >> tiv2;
    std::cout << "parz atradrichner@ klinen" << std::endl;
    std::cout << 1 << std::endl;
    for(int i = 1; i <=  tiv1 ; ++i) {
        if(0 == tiv1 % i && 0 != tiv2 % i) {
            tiv1 /= i;
            std::cout << i <<std::endl;
            return 0;
        }
     }
}
