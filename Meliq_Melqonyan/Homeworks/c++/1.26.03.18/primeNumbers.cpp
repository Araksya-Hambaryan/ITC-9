#include <iostream>
#include <cmath>
int main() {
	int tiv, i;
	std::cout << "nermuceq tiv vor@ petq e stugvi parz e te che" << '\n';
	std::cin >> tiv;
	if(tiv == 2) {
		std::cout << "parz" <<std::endl;
		return 0;
	}
	if(tiv % 2 == 0) {
		std::cout << "parz che" <<std::endl;
		return 0;
	}
	for(i = 3; i < sqrt(tiv); i + 2 ) {
		if(tiv % i == 0) {
			std::cout << "parz che" <<std::endl;
			return 0;
		}
	}
	std::cout << "parz " <<std::endl;
	return 0;
}
