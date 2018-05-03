#include <iostream>

  using namespace std;

int preDecrease(int & a) {
  a -= 1;
  return a;
}

int postDecrease(int & a) {
  a -= 1;
  int temp=a+1;
  return temp;
}

int main() {
  int a = 0;
  cout << "a=0" << "\n";
  a = preDecrease(a);
  cout << "a after preDecrease: " << a << "\n";
  a = 0;
  cout << "a=0" << "\n";
  cout << "a after postDecrease: " << postDecrease(a) << "\n";
  cout << "a in the next line: " << a;

  return 0;
}