#include <iostream>

void foo(int a, float b, char simb = 'T') {
	std::cout<<"Arajin foo "<<'\t'<<a<<'\t'<<b<<'\t'<<simb<<'\n';
}

void foo(int a, double b) {
	std::cout<<"Erkrord foo "<<'\t'<<a<<'\t'<<b<<'\n';
}

int main() {
	double d = 8.5;
	float f = 17.2;
	int i = 7;
	char simbol = 'S';
	foo(i, 10.6, simbol);
	foo(25, 15.5);
	foo(18, d);
	foo(i, f);
	return 0;
}
