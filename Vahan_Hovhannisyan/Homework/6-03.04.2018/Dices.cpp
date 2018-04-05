#include <iostream> 
#include <random>
  using namespace std;

void printArray(char arr[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << arr[i][j];
    }

    cout << "\n";
  }
}

void getArray(char arr[][3], int n, char symbol) {
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      arr[i][j] = ' ';
    }
  }

  if (n == 1) {

    arr[1][1] = symbol;

  } else if (n == 2) {

    arr[0][0] = symbol;
    arr[2][2] = symbol;
  } else if (n == 3) {

    arr[0][0] = symbol;
    arr[1][1] = symbol;
    arr[2][2] = symbol;

  } else if (n == 4) {

    arr[0][0] = symbol;
    arr[0][2] = symbol;
    arr[2][0] = symbol;
    arr[2][2] = symbol;

  } else if (n == 5) {

    arr[0][0] = symbol;
    arr[0][2] = symbol;
    arr[2][0] = symbol;
    arr[2][2] = symbol;
    arr[1][1] = symbol;
  } else if (n == 6) {
    arr[0][0] = symbol;
    arr[0][2] = symbol;
    arr[2][0] = symbol;
    arr[2][2] = symbol;
    arr[1][0] = symbol;
    arr[1][2] = symbol;
  }
}

int getRandom(int r) {
  random_device rd; // obtain a random number from hardware
  mt19937 eng(rd()); // seed the generator
  uniform_int_distribution < > distr(1, 6); // define the range
  r = distr(eng);
  return r;
}

int main() {

  char arr[3][3];
  char symbol = '*';
  int anyKey;
  int CPU1 = getRandom(CPU1);
  int player1 = getRandom(player1);
  cout << "The computer throws dices: \n";
  getArray(arr, CPU1, symbol);
  printArray(arr);

  cout << "-------------------------------------------------------\n";
  cout << "Your turn.Write 'throw' and press 'enter' to throw: ";
  cin >> anyKey;
  getArray(arr, player1, symbol);
  printArray(arr);

  int counterCPU = 0;
  int counterPlayer = 0;

  if (CPU1 > player1) {
    cout << "The game started : \n";
    cout << "The computers throws first: \n";

    for (int i = 0; i < 2; i++) {
      int CPU2 = getRandom(CPU2);
      int player2 = getRandom(player2);
      cout << "The computer throws dices: \n";
      getArray(arr, CPU2, symbol);
      printArray(arr);
      counterCPU += CPU2;

      cout << "---------------------------------------------------------\n";
      cout << "Your turn.Write 'throw' and press 'enter' to throw: ";
      cin >> anyKey;
      getArray(arr, player2, symbol);
      printArray(arr);
      counterPlayer += player2;
    }
  } else {
    cout << "The game started : \n";
    cout << "You throw first: \n";
    for (int i = 0; i < 2; i++) {
      int CPU2 = getRandom(CPU2);
      int player2 = getRandom(player2);
      counterPlayer += player2;

      cout << "Write 'throw' and press 'enter' to throw: ";
      cin >> anyKey;
      getArray(arr, player2, symbol);
      printArray(arr);

      cout << "---------------------------------------------------------\n";
      cout << "The computer throws dices: \n";
      getArray(arr, CPU2, symbol);
      printArray(arr);
      counterCPU += CPU2;

    }
  }
  if (counterCPU > counterPlayer) {
    cout << "The computer won the game! ";
  } else {
    cout << "You won the game!";
  }

  return 0;
}