#include <iostream>
#include <string>
#include <string.h>
int main() {
    char harc[20];
    std::string ask[4] = {"Barev", "Inch ka?", "Vonc es?", "Hajox"};
    std::string patasxan;
    std::string haj = "Hajox";
    std::cout << "ChatBoti het shpvelu hamar karox eq nermucel hetevyal harcer@\n";
    for(int i = 0; i < 4; ++i) {
        std::cout << i + 1 << ". " << ask[i] << "\n";
    }
    std::cout << "Greq text " << std::endl;
    while(haj.compare(patasxan) != 0) {
        int ind =4;
        std::cin.getline(harc, 20);
        for(int i = 0; i < 4; ++i) {
            std::string st = ask[i];
            if(harc == st) {
                ind = i;

            }
        }
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
