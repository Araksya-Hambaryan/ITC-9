#include <iostream>
#include <string>
int main() {
    std::string harc;
    std::string ask[4] = {"Barev", "Inch ka?", "Vonc es?", "Hajox"};
    std::string patasxan;
    for(int i = 0; i < 4; ++i) {
         std::cout << i+1 << ". " << ask[i] << std::endl;
        
    }
    std::cout << "greq text " << std::endl;
    while("Hajox" != patasxan) {
        int ind =4;
        std::getline (std::cin,harc);
        for(int i = 0; i < 4; ++i) {
            if(!ask[i].compare(harc)) {
                ind = i;
                //std::cout << "i" << i;
            }
        }
        std::cout << "ind" << ind<<  "\n";
        switch (ind) {
            case (0):
                 std::cout << "Barev" << std::endl;
                 patasxan = "Barev";
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
