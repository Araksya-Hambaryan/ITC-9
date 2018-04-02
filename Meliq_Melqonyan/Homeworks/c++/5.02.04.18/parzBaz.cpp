#include <iostream>

int main() { 
	int num;
	std::cout << "nermuceq tiv@" << '\n';
	std::cin >> num;
	for(int i = 2; i <= num; i++) {
		if(num % i == 0) {
			std::cout << i << ",";
		}
		while(num % i == 0) {
			num = num / i;
		}
	}
	return 0;
}
