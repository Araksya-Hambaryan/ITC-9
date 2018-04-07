#include <iostream>

using namespace std;

void drawV(char ary[4][7], char symbol) {
  
  // fill
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 7; ++j) {
      if ((i == 0) && ((j == 0) || (j == 6)) ||
        (i == 1) && ((j == 1) || (j == 5)) ||
        (i == 2) && ((j == 2) || (j == 4)) ||
        (i == 3) && (j == 3)) {
        ary[i][j] = symbol;
      } else {
        ary[i][j] = ' ';
      }
    }
  }

}
void print (char ary[4][7]) {
  for (int i = 0; i < 4; ++i) {

    for (int j = 0; j < 7; ++j) {

      std::cout << ary[i][j];
    }
    cout << "\n";
  }
  cout << "The dimensions of the array are 4x7. \n";
}

void replace(char ary[4][7], char symbol, char symbol2) {
  cout << "Input the other symbol: ";
  cin >> symbol2;
  cout << "The array with replaced symbols: \n";
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 7; ++j) {
      if ((i == 0) && ((j == 0) || (j == 6)) ||
        (i == 1) && ((j == 1) || (j == 5)) ||
        (i == 2) && ((j == 2) || (j == 4)) ||
        (i == 3) && (j == 3)) {
        ary[i][j] = symbol;
      }
  }
}
}
void count(char ary[4][7]) {
  int counter = 0;
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 7; ++j) {
      if (ary[i][j] != ' ') {
        counter++;
      }
    }
  }
  cout << "Number of symbols is: " << counter << "\n";
}
int main() {
  char symbol = 0;
  char symbol2 = 0;
  cout << "Input the symbol please: ";
  cin >> symbol;
  char ary[4][7];
  drawV(ary, symbol);
  print(ary);
  count(ary);
  replace(ary, symbol, symbol2);
  print(ary);
  return 0;
}