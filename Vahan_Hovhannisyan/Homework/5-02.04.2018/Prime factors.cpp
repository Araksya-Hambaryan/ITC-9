// Program to print all prime factors
#include <iostream> 
#include <cmath>

  // A function to print all prime factors of a given number n
  void primeFactors(int n) {
    bool typed = false;
    // Print the number of 2s that divide n
    while (n % 2 == 0) {
      if (typed == false) {
        printf("%d ", 2);
        typed = true;
      }
      n = n / 2;
    }

    // n must be odd at this point.  So we can skip 
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2) {
      // While i divides n, print i and divide n
      int previous = 0;
      while (n % i == 0) {
        if (n != previous / i) { //check if we are typeing the same factor several times
          printf("%d ", i);

        }
        previous = n;
        n = n / i;
      }
    }

    // This condition is to handle the case when n 
    // is a prime number greater than 2
    if (n > 2)
      printf("%d ", n);
  }

//A function to input number
int inputNumber(int & n) {
  std::cin >> n;
  return n;
}

int main() {
  std::cout << "Enter a number please: ";
  int n = 0;
  inputNumber(n);
  std::cout << "The prime factors of a given number are: ";
  primeFactors(n);
  return 0;
}