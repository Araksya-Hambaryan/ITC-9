#include <iostream>

int preDecrease(int &i) {
    std::cout << "Enter a number:\t";
    std::cin >> i;
	i -= 1;
	return i;
}

int postDecrease(int &i) {
    std::cout << "Enter a number:\t";
    std::cin >> i;
	i -= 1;
	return i + 1;
}

int main() {
	int k;
	std::cout << "Call of PreDec:\t" << preDecrease(k) << std::endl;
    std::cout << "Number:\t" << k << std::endl;
	std::cout << "Call of postDec:\t" << postDecrease(k) << std::endl;
	std::cout << "Number:\t" << k << std::endl;
	return 0;
}
