#include <iostream>

using namespace std;

int intput(int & num) {
  cin >> num;
  return num;
}

int converter(int number, int numSystem) {
  if (number < numSystem) {

    if (number > 9) {
        
        cout << char('A' + number % numSystem - 10);
    } else {
    cout << number;
    }
      return 0;
  } else {
    converter(number / numSystem, numSystem);
    
    if (number % numSystem < 10) {
        cout << number%numSystem;
    } else {
        cout << char('A' + number % numSystem - 10);
        
    }
    
  }
}
int main() {
  int numSystem = 0;
  int number = 0;
  cout << "Input a number please: ";
  intput(number);
  cout << "Input a numeral system please: ";
  intput(numSystem);
  if ((number >= 0) && (numSystem > 0)) {
    cout << number << " in " << numSystem << " numeral system is: ";
    converter(number, numSystem);
  } else {
    cout << "Sorry,wrong input.";
  }

  return 0;
}

