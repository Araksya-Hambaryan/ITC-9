#include <iostream>
int main() {
  int i;
  int counter;
  int number;
  std::cin >> number;
  if(number > 2) {

    for(i = 2; i == number / 2; ++i) {
	  if(number % i != 0) {

	      ++ counter;
	   }

	}
      if(counter == i - 2) {
	  std::cout << "parz e" << std::endl;
      } else {
	  std::cout << "baxadryal e" << std::endl;
	  }
  } else {
      std::cout << "tiv@ poqr e" << std::endl;
  }
	return 0;
}
