#include <iostream>
int main (){
  int number;
  int  numberReverse;
  int res;
  int mem;
  std::cin >> number;
  mem = number;
  while (number > 0) {
      res = number % 10;
      numberReverse = numberReverse * 10 + res;
      number /= 10;
  }
  if(mem == numberReverse) {
      std::cout << "ayo simetrik e" << std::endl;
  } else {
      std::cout << "voch simetrik che" << std::endl;
  }
	return 0;

}
