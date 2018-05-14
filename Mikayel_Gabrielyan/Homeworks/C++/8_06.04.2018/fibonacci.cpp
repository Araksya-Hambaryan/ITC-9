#include<iostream>

int fib(int num, unsigned int &count) {
	count++;
	if(1 == num || 2 == num) {
		return 1;
	} 
	return fib(num - 1, count) + fib(num - 2, count);
}
int main() {
	int number = 0;
	unsigned int count = 0;
	std::cout<<"Mutqagrel Fibonaccii sharqi elementi hamar@ ->";
	std::cin>>number;
	if(1 > number) {
		std::cout<<"Sxal mutqagrum \n";
	} else if(46 < number) {
		std::cout<<"Tiv@ mec e int-i chapic -> \n";
	} else {
		std::cout<<"Fibonaccii sharqi "<<number<<"-rd elementn e -> " << fib(number, count)<<'\n';
		std::cout<<"Funkcian kanchvel e "<<count<<" angam \n";
	}
return 0;
}
