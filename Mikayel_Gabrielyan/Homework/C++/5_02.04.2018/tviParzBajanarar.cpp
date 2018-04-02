#include <iostream>

bool checkNumber(int number) {
	if(2 == number || 3 == number) {
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
	int number = 0;
	bool trueOrFalse = true;
	std::cout<<"Mutqagrel tiv@ -> ";
	std::cin>>number;
	if (1 < number) {
		trueOrFalse = checkNumber(number);
		if(true == trueOrFalse) {
			std::cout<<"Miak parz bajanarar@ -> "<<number<<std::endl;
		} else {
			for(int i = 2; i <= number/2; ++i) {
				if(0 == (number % i) && checkNumber(i)) {
					std::cout<<i<<"\t";
				}
			}
		}
	} else {
		std::cout<<"Sxal mmutqagrum \n";
	}
	return 0;
}
