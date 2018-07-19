#include<iostream>

int fib( int num) {  
	if( 1 >=  num ) {
		return num;

	} else {
	
		return fib( num - 1 ) + fib( num - 2);
	}

 }
int main() {

	int num = 0;
	std::cout << " Input the index of Fibonacci sequance : ";
	std::cin >> num;
	std::cout << "\n The Fibonacci number is :  " << fib( num ) << std::endl;

return 0;
}
