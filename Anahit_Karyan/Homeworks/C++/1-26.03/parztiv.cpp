#include <iostream>

int main(){
	 int tiv;
	 int bajanararneriqanak = 1; 
	 std::cout << "nermucel tiv" << std::endl;
       	 std::cin >> tiv;
         for (int i = 2; i <= tiv / 2; i++){
         if (tiv % i == 0) { bajanararneriqanak++; }
         } 
         if (bajanararneriqanak == 1) { std::cout << "nermucvac tiv@ parz e"; } else  {
         std::cout << "nermucvac tiv@ baxadryal e"; }
         return 0;
}
