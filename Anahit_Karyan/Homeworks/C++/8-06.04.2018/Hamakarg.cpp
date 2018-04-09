#include <iostream>
#include <string>

std::string 10icMecHamakarg(int tiv, int hamakarg) {
    std::string ardyunq;
	int i = 0;
	while( tiv) {
		int mnacord = tiv % hamakarg;
        	switch(mnacord) {
			case (10):
				ardyunq[i] = 'A';
				break;
			case (11):
				ardyunq[i] = 'B';
				break;
			case (12):
				ardyunq[i] = 'C';
				break;
			case (13):
				ardyunq[i] = 'D';
				break;
			case (14):
				ardyunq[i] = 'E';
				break;
			case (15):
				ardyunq[i] = 'F';
				break;
		
			default:
				ardyunq[i] = mnacord;
            break;
		}
		i++;
		tiv = tiv / hamakarg;
	}
      
      std::cout<<ardyunq;
	

}
int 10icPoqrHamakarg(int tiv, int hamakarg) {
	int ardyunq1 = 0;
	int i = 1;
	while (tiv) {
		ardyunq1 = ardyunq1 + (tiv % hamakarg) * i;
		tiv = tiv / hamakarg;
		i = i * 10;
	}
	return ardyunq1;
}

int main() {
	int tiv = 0;
	int hamakarg = 0;
	std::cout << "Mutqagrel tiv";
	std::cin >> tiv;
	std::cout << "Mutqagrel hamakarg";
	std::cin >> hamakarg;
	if(10 >= hamakarg){
		std::cout<<"nshvac hamakargum tiv@ klini" << 10icPoqrHamakarg(tiv, hamakarg) <<'\n';
	} else if(16 >= hamakarg || 10 < hamakarg) {
		std::cout<<"nshvac hamakargum tiv@ klini " << 10icMecHamakarg(tiv, hamakarg) << '\n' ;
	} else {
		std::cout<<"aydpisi hamakarg chka \n";
	}
	return 0;
}
