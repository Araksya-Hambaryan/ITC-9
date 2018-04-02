#include <iostream>
#include <string>
int main() {
    std::string harc;
    std::string ask[4] = {"Barev", "Inch_ka?", "Vonc_es?", "Hajox"};
    std::string patasxan;
    std::cout << "greq text " << std::endl;
    while("Hajox" != patasxan) {
        int ind =4;
        std::cin >> harc;
        for(int i = 0; i < 4; ++i) {
            if(ask[i] == harc) {
                ind = i;
            }
        }
        switch (ind) {
            case (0):
                 std::cout << "Barev" << std::endl;
                 patasxan = "Baev";
                break;
            case (1):
                  std::cout << "Sax lava" << std::endl;
                  patasxan = "Sax lava";
                break;
            case (2):
                  std::cout << "Orva het" << std::endl;
                  patasxan = "Orva het";
                break;
            case (3):
                  std::cout << "Hajox" << std::endl;
                  patasxan = "Hajox";
                break;
            default:
                  std::cout << "Chem haskanum" <<std::endl;
                  patasxan = "Chem haskanum";
                break;
        }
    }    
    return 0;
}
