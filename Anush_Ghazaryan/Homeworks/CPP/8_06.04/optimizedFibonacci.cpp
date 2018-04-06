#include<iostream>

int fib( unsigned  int num, int& count, int fibFirst = 0, int fibSecond = 1) {
	
	++ count;
	if( 0 == num ) {
		return fibFirst;
	}
	if( 1 == num ) {
		return fibSecond;
	}
	
	return fib ( num - 1, count , fibSecond, fibFirst + fibSecond ) ;
	

}

int main() {
        unsigned int index = 0;
	int count = 0;
	std::cout << "Input an index of Fibonacci number : ";
	std::cin >> index;
	std::cout << "The Fibonacci number is : " << fib( index, count ) << std::endl;
	std::cout << "The Count is : " << count << std::endl;



return 0;
}
