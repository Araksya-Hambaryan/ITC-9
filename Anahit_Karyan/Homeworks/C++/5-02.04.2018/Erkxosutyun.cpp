#include <iostream>
#include <string>

int main() {
	std::string HarciTarberak[4] = {"barev","inchpes es?","daserd arel es?","hajoxutyun"};
	std::string Harc;
	while(true) {
		int index = 4;
		std::cout<<"Greq  harc ";
		std::getline(std::cin,Harc);
		for(int i = 0; i < 4; ++i) {
			if(HarciTarberak[i] == Harc) {
				index = i;
			}
		}
		switch(index) {
			case (0): std::cout<<" barev \n";
		        break;
			case (1): std::cout<<" lav em,shnorhakalutyun \n";
		        break;
			case (2): std::cout<<" iharke arel em \n";
		        break;	
			case (4): std::cout<<"anhaskaali harc \n";
                        break;
			case (3): std::cout<<"ctesutyun \n";
                        return 0;
		}
        }
	return 0; 
}
