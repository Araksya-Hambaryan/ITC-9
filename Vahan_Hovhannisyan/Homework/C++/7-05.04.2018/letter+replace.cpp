
#include <iostream>

using namespace std;

void drawV(char * * & ary, char & symbol, int n, int m) {

  // fill

  ary = new char * [n];

  for (int i = 0; i < n; ++i) {
    ary[i] = new char[n];
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {

      if ((i == j) || (j == m - i - 1)) {
        ary[i][j] = symbol;
      } else {
        ary[i][j] = ' ';
      }
    }
  }
  cout << "The dimensions of the array are " << n << "x" << m << "\n";
}

void print(char * * & ary, int n, int m) {
  for (int i = 0; i < n; ++i) {

    for (int j = 0; j < m; ++j) {

      std::cout << ary[i][j];
    }
    cout << "\n";
  }
}

void replace(char * * & ary, char symbol, char symbol2, int n, int m) {
  cout << "Input the other symbol: ";
  cin >> symbol2;
  cout << "The array with replaced symbols: \n";

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (ary[i][j] == symbol) {
        ary[i][j] = symbol2;
      }

    }
  }
}

void count(char * * & ary, int n, int m) {
  int counter = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
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
  int n = 0;
  cout << "Input the number rows please (no smaller than 3): ";
  cin >> n;
  if (n < 3) {
    cout << "Sorry,wrong input! ";
  } else {
    int m = 2 * n - 1;
    cout << "Input the symbol please: ";
    cin >> symbol;
    char * * ary;
    drawV(ary, symbol, n, m);
    print(ary, n, m);
    count(ary, n, m);
    replace(ary, symbol, symbol2, n, m);
    print(ary, n, m);

    for (int i = 0; i < n; ++i) {
      delete ary[i];
    }
    delete[] ary;
  }
  return 0;
}

