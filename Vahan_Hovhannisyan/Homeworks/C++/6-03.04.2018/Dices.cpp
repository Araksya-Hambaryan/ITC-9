#include <iostream> 
#include <time.h>
  using namespace std;

void printArray(char arr[3][18]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 18; j++) {
      cout << arr[i][j];
    }

    cout << "\n";
  }
}

void makeArray(char arr[3][18]) {
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 18; ++j) {
      arr[i][j] = ' ';
    }
  }
}

int getArray(char arrPlayer[3][18], int n, char symbol, int counter) {

  switch (n) {
  case 1:
    arrPlayer[1][1 + counter] = symbol;
    break;

  case 2:
    arrPlayer[0][0 + counter] = symbol;
    arrPlayer[2][2 + counter] = symbol;
    break;
  case 3:
    arrPlayer[0][0 + counter] = symbol;
    arrPlayer[1][1 + counter] = symbol;
    arrPlayer[2][2 + counter] = symbol;
    break;
  case 4:

    arrPlayer[0][0 + counter] = symbol;
    arrPlayer[0][2 + counter] = symbol;
    arrPlayer[2][0 + counter] = symbol;
    arrPlayer[2][2 + counter] = symbol;
    break;

  case 5:

    arrPlayer[0][0 + counter] = symbol;
    arrPlayer[0][2 + counter] = symbol;
    arrPlayer[2][0 + counter] = symbol;
    arrPlayer[2][2 + counter] = symbol;
    arrPlayer[1][1 + counter] = symbol;
    break;
  case 6:
    arrPlayer[0][0 + counter] = symbol;
    arrPlayer[0][2 + counter] = symbol;
    arrPlayer[2][0 + counter] = symbol;
    arrPlayer[2][2 + counter] = symbol;
    arrPlayer[1][0 + counter] = symbol;
    arrPlayer[1][2 + counter] = symbol;
    break;
  }
  return n;

}

int randomNumber() {
  srand(time(0));
  return rand() % 6 + 1;
}

int main() {

  char arrCPU[3][18];
  char arrPlayer[3][18];
  char symbol = 0;
  cout << "Choose a symbol please: ";
  cin >> symbol;
  int DiceCPU = 0;
  int DicePlayer = 0;
  int CPU = 0;
  int player = 0;
  makeArray(arrCPU);
  makeArray(arrPlayer);
  int counterCPU = 0;
  int counterPlayer = 0;

  do {
    cout << "Deciding who starts the game: \n";

    cout << "The computer throws dices: \n";
    DiceCPU = randomNumber();
    CPU = getArray(arrCPU, DiceCPU, symbol, counterCPU);
    printArray(arrCPU);

    cout << "Your turn.Press 'enter' to throw: ";
    cin.ignore();
    DicePlayer = randomNumber();
    player = getArray(arrPlayer, DicePlayer, symbol, counterPlayer);
    printArray(arrPlayer);
  } while (CPU == player);

  makeArray(arrCPU);
  makeArray(arrPlayer);
  counterPlayer = -5;
  counterCPU = -5;
  if (CPU > player) {
    CPU = 0;
    player = 0;
    cout << "The computer starts the game!\n";
    for (int i = 0; i < 4; i++) {
      cout << "The computer throws dices: \n";
      DiceCPU = randomNumber();
      CPU += getArray(arrCPU, DiceCPU, symbol, counterCPU += 5);
      printArray(arrCPU);

      cout << "-------------------------------------------------------\n";
      cout << "Your turn.Press 'enter' to throw: ";
      cin.ignore();
      DicePlayer = randomNumber();
      player += getArray(arrPlayer, DicePlayer, symbol, counterPlayer += 5);
      printArray(arrPlayer);

    }
  } else {
    CPU = 0;
    player = 0;
    cout << "You start the game!\n";
    for (int i = 0; i < 4; i++) {
      cout << "Your turn.Press 'enter' to throw: ";
      cin.ignore();
      DicePlayer = randomNumber();
      player += getArray(arrPlayer, DicePlayer, symbol, counterPlayer += 5);
      printArray(arrPlayer);

      cout << "-------------------------------------------------------\n";
      cout << "The computer throws dices: \n";
      DiceCPU = randomNumber();
      CPU += getArray(arrCPU, DiceCPU, symbol, counterCPU += 5);
      printArray(arrCPU);

    }

  }

  if (CPU > player) {
    cout << "The computer won!";
  } else if (player > CPU) {
    cout << "You won!";
  } else {
    cout << "No one won!";
  }
  return 0;
}