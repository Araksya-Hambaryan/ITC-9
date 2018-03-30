#include <iostream>
int main() {
	int tiv, shrjac = 0, popoxakan;
	std::cout << "mutqagret tiv stugelu hamar simetrikutjun@ " << '\n';
	std::cin >> tiv;
	if(tiv < 0) {
 		return 0;
	}
	popoxakan = tiv;
	while(popoxakan != 0) {
		shrjac = shrjac * 10 + popoxakan % 10;
		popoxakan = popoxakan / 10;
	}
	if(tiv == shrjac) {
		std::cout << "simetrik" <<std::endl;
	} else {
		std::cout << "voch simetrik" <<std::endl;	
	}
	return 0;
}
