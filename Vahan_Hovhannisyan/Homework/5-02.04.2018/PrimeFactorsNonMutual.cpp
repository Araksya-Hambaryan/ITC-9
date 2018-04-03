// Program to print all prime factors
// Program to print all prime factors
#include <iostream> 
#include <cmath> 

// A function to print all prime factors of a given number n
void primeFactors(int n, int n2) {
  int number = n;
  // Print the number of 2s that divide n
  bool typed = false;
  while (n % 2 == 0) {

    if (n2 % 2 != 0 && !typed) {
      std::cout << "2 ";
      typed = true;
    } else if (n2 % 2 == 0) {
      n2 = n2 / 2;
    }
    n = n / 2;
  }

  // n must be odd at this point.  So we can skip 
  // one element (Note i = i +2)
  for (int i = 3; i <= sqrt(number); i = i + 2) {
    // While i divides n, print i and divide n
    int previous = 0;
    while (n % i == 0) {

      if ((n2 % i != 0) && (n != previous / i)) {
        std::cout << i << " ";
      }

      previous = n;
      n = n / i;
      if (n2 % i == 0) {
        n2 = n2 / i;
      }
    }

  }

  // This condition is to handle the case when n 
  // is a prime number greater than 2
  if (n > 2) {
    std::cout << n << " ";

  }
}

//A function to input number
int inputNumber(int & n) {
  std::cin >> n;
  return n;
}

int main() {
  std::cout << "Enter the first number please: ";
  int n = 0;
  inputNumber(n);
  std::cout << "Enter the second number please: ";
  int n2 = 0;
  inputNumber(n2);

  std::cout << "The non mutual prime factors the given numbers are: ";
  primeFactors(n, n2);

  return 0;
}