#include <iostream>

using namespace std;

int Fibo(int N, int & F0, int & F1, int & counter) {
  if (N == 1) {
    F1 = F0 = 1;
  } else {
    counter++;
    Fibo(N - 1, F0, F1, counter);
    F1 = F1 + F0;
    return F0 = F1 - F0;
  }
}

int intput(int & number) {
  cin >> number;
  return number;
}

int main() {
  int F0 = 0;
  int F1 = 0;
  int number = 0;
  int counter = 0;
  cout << "Input the element please: ";
  intput(number);
  if (number < 1) {
    cout << "Sorry,worng intput!";
  } else {

    cout << "The element of fibonacci series is " << Fibo(--number, F0, F1, counter) << ".\n";
    cout << "The functon called itself " << counter << " times.";
  }
  return 0;
}