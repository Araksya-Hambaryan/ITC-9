#include <iostream> 
#include <cmath>

bool Is_Prime = true;
int Number;
int Input_Number() {
  std::cout << "Input your number please: ";
  std::cin >> Number;
  return Number;
}

int main() {

  Input_Number();
  int Root = (int)(sqrt(Number));
  for (int i = 2; i <= Root; i++) {
    if (0 == Number % i ) {
      std::cout << "Number is not prime";
      Is_Prime = false;
      break;
    }
  }
  if (Is_Prime) {
    std::cout << "Number is prime";
  }

  return 0;
}