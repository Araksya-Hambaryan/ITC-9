#include <iostream>

int fib(int num) {
	static int qanak = 0;
	++qanak;
	int t = 0;
	static int nax = 0;
	static int haj = 1;
	if(num == 0) {
		std::cout << qanak << '\n';
		return haj;
	}
		t = haj;
		haj = nax + haj;
		nax = t;
		fib(--num);
}

int main() {
	unsigned int num = 0;
	std::cout << "nermuceq tiv :: ";
	std::cin >> num;
	std::cout << fib(num) << '\n';
	return 0;
}
