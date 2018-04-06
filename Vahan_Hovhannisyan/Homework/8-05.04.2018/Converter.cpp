#include <iostream>

using namespace std;

int intput(int & num) {
  cin >> num;
  return num;
}

int converter(int number, int numSystem) {
  if (number < numSystem) {

    switch (number) {
    case 10:
      cout << 'A';
      break;

    case 11:
      cout << 'B';
      break;

    case 12:
      cout << 'C';
      break;

    case 13:
      cout << 'D';
      break;

    case 14:
      cout << 'E';
      break;

    case 15:
      cout << 'F';
      break;

    default:
      cout << number;
      return number;
    }
  } else {
    converter(number / numSystem, numSystem);
    switch (number % numSystem) {
    case 10:
      cout << 'A';
      break;

    case 11:
      cout << 'B';
      break;

    case 12:
      cout << 'C';
      break;

    case 13:
      cout << 'D';
      break;

    case 14:
      cout << 'E';
      break;

    case 15:
      cout << 'F';
      break;

    default:
      cout << number % numSystem;
    }
  }
}
int main() {
  int numSystem = 0;
  int number = 0;
  cout << "Input a number please: ";
  intput(number);
  cout << "Input a numeral system no bigger than hexadecimal please: ";
  intput(numSystem);
  if ((number >= 0) && (numSystem > 0) && (numSystem < 17)) {
    cout << number << " in " << numSystem << " numeral system is: ";
    converter(number, numSystem);
  } else {
    cout << "Sorry,wrong input.";
  }

  return 0;
}

