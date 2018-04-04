#include <iostream>

int minusminusi(int& pop) {
	pop = pop -1;
	return pop;
}

int iminusminus(int& pop) {
	int pop1 = pop;
	pop = pop - 1;
	return pop1;
}

int main() {
	int k = 6;
	std::cout << minusminusi(k) << "   ";
	std::cout << iminusminus(k) << '\n';
	std::cout << k << '\n';
	return 0;
}
