#include <iostream>

using namespace std;

int fibonacci(int number, int & counter) {
  if (number < 2) {
    return number;
  }
  counter++;
  return fibonacci(number - 1, counter) + fibonacci(number - 2, counter);
}

int intput(int & num) {
  cin >> num;
  return num;
}

int main() {
  int number = 0;
  int counter = 0;
  cout << "Input the element please: ";
  intput(number);
  if (number < 1) {
    cout << "Sorry,worng intput!";
  } else {
    cout << "The element of fibonacci series is " << fibonacci(--number,
        counter) <<
      ".\n";
    cout << "The functon called itself " << counter << " times.";
  }
  return 0;
}
