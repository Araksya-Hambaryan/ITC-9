#include <iostream>
#include <string>

int main() {
	std::string xosq[3] = {"barev inchpes es","lav,tnayinert grel es","de c"};
	std::cout<<"es zavzakn em tyr harct \n";
	for(int i = 0; i < 3; ++i) {
		std::cout<<xosq[i]<<std::endl;
	}
	std::string question;
	while("Sxal" != question) {
		int arjeq = -1;
		std::cout<<"uxxir harc@ -> ";
		std::getline(std::cin, question);
		for(int i = 0; i < 3; ++i) {
			if(xosq[i] == question) {
				arjeq = i;
			}
		}
		switch(arjeq) {
			case (0): std::cout<<"sun -> barev lav du \n";
				  break;
			case (1): std::cout<<"sun -> ayo iharke \n";
				  break;
			default: std::cout<<"sun -> what \n";
				 question = "Sxal";
			case (2): std::cout<<"sun -> ctesutyun \n";
				  question = "Sxal";
				  break;
                }
        }
        return 0;
}


