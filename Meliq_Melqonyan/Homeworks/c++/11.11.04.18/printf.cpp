#include <iostream>
#include <cstdarg>

int printf(const char* fmt...) {
	va_list args;
	va_start(args, fmt);
	double num1 = 0;
	int num = 0;
	int count = 1;
	while (*fmt != '\0') {
		if (*fmt == '%') {
			switch(*(++fmt)) {
				case 'd':
					++count;
					num = va_arg(args, int);
					std::cout << num;
					break;
				case 'f':
					++count;
					num1 = va_arg(args, double);
					std::cout << num1;
					break;
			}
		} else {
			std::cout << *fmt;
		}
		++fmt;
	}
	va_end(args);
	return count;
}

int main() {
	printf("Int a = %d, %d, double f = %f", 1, 4, 5.4) + 7; 
	return 0;
}
