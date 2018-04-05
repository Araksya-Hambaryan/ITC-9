﻿#include <iostream>

  using namespace std;

void drawV(char ary[4][7], char symbol) {
  for (int i = 0; i < 4; ++i) {

  }

  // fill
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 7; ++j) {
      ary[i][j] = ' ';
    }
  }
  ary[0][0] = symbol;
  ary[0][6] = symbol;
  ary[1][1] = symbol;
  ary[1][5] = symbol;
  ary[2][2] = symbol;
  ary[2][4] = symbol;
  ary[3][3] = symbol;

  // print
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
      if (ary[i][j] == symbol) {
        ary[i][j] = symbol2;
      }
      std::cout << ary[i][j];
    }
    cout << "\n";
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
  count(ary);
  replace(ary, symbol, symbol2);

  return 0;
}