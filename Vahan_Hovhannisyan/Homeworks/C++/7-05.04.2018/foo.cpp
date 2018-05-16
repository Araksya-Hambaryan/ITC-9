#include <iostream>

  using namespace std;

void foo(int i, float f, double d, int length, char cArr[]) {
  cout << "Inside foo1 " << "\n";
  cout << "f = " << ++f << "\n";
  cout << "d = " << ++d << "\n";

  for (int i = 0; i < length; i++) {
    cout << "Array of chars: " << cArr[i] << "\n";
  }
  cout << "\n";
}

void foo(int i, double d, float f, int length, char cArr[] = "Tux") {
  cout << "Inside foo2 " << "\n";
  cout << "f = " << ++f << "\n";
  cout << "d = " << ++d << "\n";
  for (int i = 0; i < length; i++) {
    cout << "Array of chars: " << cArr[i] << "\n";
  }
  cout << "\n";
}

void func(float f) {
  cout << "Inside float  \n";
  cout << "f = " << ++f << "\n";
}
void func(double d) {
  cout << "Inside double  \n";
  cout << "d = " << ++d << "\n";
}
int main() {
  int i = 0;
  float f = 0;
  double d = 0;
  char cArr[] = {
    'a',
    'b',
    'c'
  };

  foo(0, 0.0, 0.0, 3); //This one goes into foo2 because we call function with 4 parameters.

  foo(0, f, 0.0, 3, cArr); //This one goes into foo1 because the second argument is f.
                            //When I replace f with say 0.0 the program crushes,
                             //as it can't decide if the number is float or double.

  foo(0, f, 0.0, 3, cArr + 1); //The result of this seems random to me.

  // foo(0,f,0.0,3,{'a','b','c'});   //The program crushes.

  foo(0, f, 0.0, 3, "abc"); //The program works. 

  func(0.0); //This one goes int func(double d).It seems that my compiler chooses double by default.

  return 0;
}
