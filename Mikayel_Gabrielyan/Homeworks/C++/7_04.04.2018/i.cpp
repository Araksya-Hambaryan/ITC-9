#include <iostream>

int iMinusMinus(int& i) {
	int tmp = i;
	i -= 1;
	return tmp;
}

int minusMinusI(int& i) {
	i -= 1;
	return i;
}

int main() {
	int x = 0;
	std::cout<<"Mutqagrel tiv ->";
	std::cin>>x;
	std::cout<<iMinusMinus(x)<<std::endl;
	std::cout<<x<<std::endl;
	std::cout<<minusMinusI(x)<<std::endl;
	std::cout<<x<<std::endl;
	return 0;
}
