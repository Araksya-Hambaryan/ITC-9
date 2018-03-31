#include <iostream>

int main(){
    int tiv1;
    int tiv2 = 0;
    std::cout << "nermucel tiv" << std::endl;
    std::cin >> tiv1;
    int tiv = tiv1;
    while (tiv1){
        tiv2 = tiv2 * 10 + tiv1 % 10; tiv1 = tiv1 / 10; 
    }
    if ( tiv2 == tiv) {
    std::cout << "nermucvac tiv@ simetrik e";
    } else {
    std::cout << "nermucvac tiv@ simetrik che";
    }

    return 0;
}

