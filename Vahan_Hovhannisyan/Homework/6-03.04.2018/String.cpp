#include <iostream> 
#include <string>

using namespace std;

int main() {
  char c;
  char c2;
  int i = 0;
  int j = 0;
  bool flag = false;
  int n = 0;
  string str;
  cout << "Input a string \n";
  cin >> str;
  cout << "Press 1 and input a character to find the number of occurences of the character (1 a) : \n";
  cout << "Press 2 and input 2 characters to alter the character by another one (2 a b): \n";
  cout << "Press 3 and input a character to remove the character from string (3 a): \n";
  cout << "Press 4 to exit the program: \n";
  do {
    cin >> n;
    int counter = 0;
    switch (n) {

    case 1:
      cin >> c;
      for (int k = 0; k < str.length(); k++) {
        if (c == str[k]) {
          counter++;
        }
      }
      cout << "Number of occurences of " << c << " is " << counter;
      cout << "\n";
      break;

    case 2:
      cin >> c >> c2;
      for (int n = 0; n < str.length(); n++) {
        if (c == str[n]) {
          str[n] = c2;
        }

      }
      cout << str;
      cout << "\n";
      break;

    case 3:
      j = 0;
      i = 0;
      cin >> c;
      while (str[i] != '\0') {
        if (str[i] == c) {
          j = i;
          while (str[j + 1] != '\0') {
            str[j] = str[j + 1];
            ++j;
          }
          str[j] = ' ';
          flag = true;
        }
        if (flag == false) {

          ++i;
        }
        flag = false;
      }

      cout << "The string with removed symbol is: " << str << "\n";
      break;
      
    case 4:
      cout << "Good bye! \n";
      break;
    default:
      cout << "Sorry, unkwnown command. ";
      cout << "\n";
      break;
    }

  } while (n != 4);
  return 0;
}