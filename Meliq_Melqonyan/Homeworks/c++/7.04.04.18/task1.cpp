#include <iostream>

int foo(int a, float b) {
	return 1;
}

int foo(int d, double k) {
	return 2;
}

int main() {
	double a = 5;
	std::cout << foo(5, 6.0) << '\n';
	std::cout << foo(5, a) << '\n';
	return 0;
}
