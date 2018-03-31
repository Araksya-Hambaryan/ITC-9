#include <iostream>
int main(){
         int tiv1;
         int tiv2;
         char gorcoxutyun;
         std::cout << "nermucel tiv1 gorcoxutyuv tiv2" << std::endl;
         std::cin >> tiv1 >>gorcoxutyun >> tiv2 ;
         if (gorcoxutyun == '+') {
         std::cout << "=" << tiv1 + tiv2;
         }
         if (gorcoxutyun == '-') {
         std::cout << "=" << tiv1 - tiv2;
         }
         if (gorcoxutyun == '*') {
         std::cout << "=" << tiv1 * tiv2;
         }
         if (gorcoxutyun == '/') {
         if (tiv2 == 0){
         std::cout << "0-i bajanel chi tuylatrvum"; } else {
         std::cout << "=" << tiv1 / tiv2;
         }
         }
        return 0;
         }
