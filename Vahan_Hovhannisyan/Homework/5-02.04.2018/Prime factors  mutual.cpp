// Program to print all prime factors
#include <iostream> 
#include <cmath> 
#include <stack>

  std::stack < int > primeFactorsInStack;
// A function to print all prime factors of a given number n
void primeFactors(int n) {
  // Print the number of 2s that divide n
  while (n % 2 == 0) {
    n = n / 2;

    primeFactorsInStack.push(2);

  }

  // n must be odd at this point.  So we can skip 
  // one element (Note i = i +2)
  for (int i = 3; i <= sqrt(n); i = i + 2) {
    // While i divides n, print i and divide n

    while (n % i == 0) {

      primeFactorsInStack.push(i);

      n = n / i;

    }

  }

  // This condition is to handle the case when n 
  // is a prime number greater than 2
  if (n > 2) {
    primeFactorsInStack.push(n);

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
  primeFactors(n);
  int previous = 0;
  while (!primeFactorsInStack.empty()) {
    if ((n2 % primeFactorsInStack.top() != 0) && (previous != primeFactorsInStack.top())) {
      std::cout << primeFactorsInStack.top();
    }
    previous = primeFactorsInStack.top();
    primeFactorsInStack.pop();

  }
  std::cout << "\n";

  return 0;

}