#include <iostream>

int preDecrease(int &i) {
	i = i - 1;
	return i;
}

int postDecrease(int &i) {
	int j = i;
	i = i - 1;
	return j;
}

int main() {
	int k = 10;
	std::cout << preDecrease(k) << std::endl;
    std::cout << k << std::endl;
	std::cout << postDecrease(k) << std::endl;
	std::cout << k << std::endl;
	return 0;
}
