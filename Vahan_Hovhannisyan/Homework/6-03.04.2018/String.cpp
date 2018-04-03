#include <iostream> 
#include <string>

  using namespace std;

int main() {
  char c;
  char c2;
  int counter = 0;
  int n = 0;
  string str;
  string str2;
  cout << "Input a string \n";
  cin >> str;
  cout << "Press 1 and input a character to find the number of occurences of the character (1 a) : \n";
  cout << "Press 2 and input 2 characters to alter the character by another one (2 a b): \n";
  cout << "Press 3 and input a character to remove the character from string (3 a): \n";
  cout << "Press 4 to exit the program: \n";
  while (n != 4) {
    cin >> n;
    switch (n) {

    case 1:
      cin >> c;
      for (int i = 0; i < str.length(); i++) {
        if (c == str[i]) {
          counter++;
        }
      }
      cout << "Number of occurences of " << c << " is " << counter;
      cout << "\n";
      break;

    case 2:
      cin >> c >> c2;
      for (int i = 0; i < str.length(); i++) {
        if (c == str[i]) {
          cout << c2;
        } else {
          cout << str[i];
        }

      }
      cout << "\n";
      break;

    case 3:
      cin >> c;
      for (int i = 0; i < str.length(); i++) {
        if (c != str[i]) {
          str2[i] = str[i];
          cout << str2[i];
        }
      }
      cout << "\n";
      break;
    case 4:
      cout << "Good LucK! ";
      cout << "\n";
      break;
    default:
      cout << "Sorry, unkwnown command. ";
      cout << "\n";
      break;
    }

  }
  return 0;
}