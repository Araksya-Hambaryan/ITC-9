#include <iostream>

void tiv(unsigned num, unsigned ham) {
	if(num < ham) {
		std::cout << num;
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
	std::cout << "nermuceq tiv ev hamakarg::  ";
	std::cin >> num >> ham;
	tiv(num, ham);
	return 0;
}
	
