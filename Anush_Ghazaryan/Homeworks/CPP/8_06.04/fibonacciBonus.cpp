#include <iostream>

int fib(int num) {
  if( num  == 1 || num  == 2 ) {
	 return 1;
  }
  return fib(num - 1) + fib(num - 2);
}

int  main() {
	int index = 0;
	std::cout << " Input the index of Fibonacci sequance : ";
	std::cin >> index;
	std::cout << " fib =  " << fib( index ) <<  std::endl;
return 0;
}
