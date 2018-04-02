#include <iostream>
#include <string>

int main() {
        std::string xosq[4] = {"barev","vonc_es","dasern_inchpes_en","hajox"};
        std::cout<<"Barev sireli ogtater. Es Chat_bot em ev karox em patasxanel ays harcerin \n";
        for(int i = 0; i < 4; ++i) {
                std::cout<<xosq[i]<<std::endl;
        }
        std::string question;
        while("Sxal" != question) {
                int arjeq = 0;
                std::cout<<"Tveq dzer harc@ -> ";
                std::cin>>question;
                for(int i = 0; i < 4; ++i) {
                        if(xosq[i] == question) {
                                arjeq = i;
                        }
                }
                switch(arjeq) {
                        case 0: std::cout<<"Bot -> barev \n";
                        break;
                        case 1: std::cout<<"Bot -> shat lav em \n";
                        break;
                        case 2: std::cout<<"Bot -> uxxaki artakarg \n";
                        break;
                        default: std::cout<<"Bot -> chem haskanum harcd \n";
			question = "Sxal";
                        case 3: std::cout<<"Bot -> bye \n";
                        break;
                }
        }
        return 0;
}
