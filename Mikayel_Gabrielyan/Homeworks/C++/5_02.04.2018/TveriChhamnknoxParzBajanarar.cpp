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
	int num1 = 0;
	int num2 = 0;
	bool trueOrFalse = true;
	std::cout<<"Mutqagrel arajin tiv@ -> ";
	std::cin>>num1;
	std::cout<<"Mutqagrel erkrord tiv@ -> ";
	std::cin>>num2;
	if(1 < num1 && 1 < num2) {
		trueOrFalse = checkNumber(num1);
		if( (true == trueOrFalse && num1 > num2) || (num1 < num2 && true == trueOrFalse && 0 != (num2 % num1)) )  {
			std::cout<<"Miak parz bajanarar@ -> "<<num1<<std::endl;
		} else if(num2 >= num1 && 0 == (num2 % num1)) {
			std::cout<<"Bolor bajanararner@ hamnknum en "<<std::endl;
		} else {
			for(int i = 2; i <= num1/2; ++i) {
				if(0 == (num1 % i) && checkNumber(i) && 0 != (num2 % i) ) {
					std::cout<<i<<"\t";
				}
			}
		}
	}
	return 0;
}
