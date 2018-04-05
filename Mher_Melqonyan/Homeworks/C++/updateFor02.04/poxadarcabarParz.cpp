#include <iostream>
int main() {
    int tiv1;
    int tiv2;
    int mem = 0;
    std::cout << "nermuceq arajin tiv@" << std::endl;
    std::cin >> tiv1;
    std::cout << "nermuceq erkrord tiv@" << std::endl;
    std::cin >> tiv2;
    std::cout << "parz atradrichner@ klinen" << std::endl;
    for(int i = 2; i <=  tiv1 ; ++i ) {
        if(0 == tiv1 % i) {
            if(mem != i && tiv2 % i != 0){
            std::cout << i <<std::endl;
            }
            mem = i;
            tiv1 /= i;
           --i;  
        }
    }
    return 0;
}
