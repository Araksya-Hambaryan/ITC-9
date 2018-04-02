#include <iostream> 
#include <cmath>

int inputNumber(int Number) {
  std::cout << "Input your number please: ";
  std::cin >> Number;
  return Number;
}

int main() {
    int Number=0;
  bool isPrime = true;
  inputNumber(Number);
  int Root = (int)(sqrt(Number));
  for (int i = 2; i <= Root; i++) {
    if (0 == Number % i ) {
      std::cout << "Number is not prime";
      isPrime = false;
      break;
    }
  }
  if (isPrime) {
    std::cout << "Number is prime";
  }

  return 0;
}