#include <iostream> 
#include <cmath>

  int Number; //I took your advice about reducing gloabal variables
  int Number2;
  bool Is_Symetric = true;

void Check_Symetry() {
  int Number3 = 0;
  int counter = 0;
  int counter1 = 0;
  while (0 != Number) {
    counter++;
    Number /= 10;
  }
  if (1 == counter % 2) {
    counter = counter / 2;
    counter1 = counter + 1;
  } else {
    counter = counter / 2;
    counter1 = counter;
  }
  Number3 = static_cast < int > (Number2 / std::pow(10, counter1));
  while (0 != counter) {
    counter--;
    int x = Number3 / static_cast < int > (std::pow(10, counter));
    int y = Number2 % 10;
    Number3 = Number3 % static_cast < int > (std::pow(10, counter));
    Number2 /= 10;
    if (x != y) {
      Is_Symetric = false;
      std::cout << "Not symetric!";
      break;
    }
  }
  if (Is_Symetric) {
    std::cout << "Symetric!";
  }
}

int Input_Method() {
  std::cout << "Enter the number please: ";
  std::cin >> Number;
  Number2 = Number;
  return Number;
}

int main() {
  Input_Method();
  Check_Symetry();
  return 0;
}