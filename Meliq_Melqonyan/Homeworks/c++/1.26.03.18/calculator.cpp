#include <iostream>
int main() {
	float num1, num2, ardjunq;
	char gorc;
	std::cout << "nermuceq tiv |gorcoxutjan nshan(+ - * /)| tiv ev |enter|" << '\n';
	std::cin >> num1 >> gorc >> num2;
	if(gorc == '+'){
		ardjunq = num1 + num2;
	} else if(gorc == '-'){
		ardjunq = num1 - num2;
	} else if(gorc == '*'){
		ardjunq = num1 * num2;
	} else if(gorc == '/'){
		if(num2 != 0) {
			ardjunq = num1 / num2;
		} else {
			std::cout << "sxal";
			return 0;
		}
	}
	std::cout << ardjunq << std::endl;
	return 0;
}
