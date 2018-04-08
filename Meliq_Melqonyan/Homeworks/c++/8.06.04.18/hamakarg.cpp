#include <iostream>

void tiv(unsigned num, unsigned ham) {
	if(num < ham) {
		if(num < 10) {
			std::cout << num;
		} else {
			std::cout << char('A' + num - 10);
		}
			return;
	}	
	int k = num % ham - 10;
	tiv(num / ham, ham);
	if(num % ham < 10) {
		std::cout << num % ham;
	} else {
		std::cout << char('A' + k);
	}
}


int main() {
	unsigned num;
	unsigned ham;
	do {
		std::cout << "nermuceq tiv ev hamakarg, hamakarg@ petqe lini mec 1-ic::  ";
		std::cin >> num >> ham;
	} while(ham < 2);
	tiv(num, ham);
	std::cout << '\n';
	return 0;
}
	
