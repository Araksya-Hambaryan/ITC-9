#include <iostream>
int main() { 
	int num1, num2;
	std::cout << "nermuceq tver@" << '\n';
	std::cin >> num1;
	std::cin >> num2;
	for(int i = 2; i <= num1; i++) {
		if(num1 % i == 0 && num2 % i !=0) {
			std::cout << i << '\n';
		}
		while(num1 % i == 0) {
			num1 = num1 / i;
		}
	}
	return 0;
}
