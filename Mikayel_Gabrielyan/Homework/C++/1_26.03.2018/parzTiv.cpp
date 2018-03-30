#include <iostream>

bool checkNumber(int number) {
	if(1 == number || 2 == number || 3 == number) {
		return true;
	} else {
		for(int i = 2; i <= number/2; ++i ) {
			if(0 == number % i) {
				return false;
			}
		}
	}
}

int main() {
	int number;
	bool truefalse = true;
	std::cout<<"Mutqagrel tiv@ ->";
	std::cin>>number;
	truefalse = checkNumber(number);
	if(truefalse) {
		std::cout<<number<<" parz tiv e \n";
	} else {
		std::cout<<number<<" parz tiv che \n";
	}
return 0;
}
