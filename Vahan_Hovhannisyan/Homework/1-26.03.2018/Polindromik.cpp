#include <iostream> 
#include <cmath>

  bool checkSymetry(int number) {
    int number2 = number;
    int number3 = 0;
    int counter = 0;
    int counter1 = 0;
    while (0 != number) {
      counter++;
      number /= 10;
    }
    if (1 == counter % 2) {
      counter = counter / 2;
      counter1 = counter + 1;
    } else {
      counter = counter / 2;
      counter1 = counter;
    }
    number3 = static_cast < int > (number2 / std::pow(10, counter1));
    while (0 != counter) {
      counter--;
      int x = number3 / static_cast < int > (std::pow(10, counter));
      int y = number2 % 10;
      number3 = number3 % static_cast < int > (std::pow(10, counter));
      number2 /= 10;
      if (x != y) {
        return false;
        break;
      }
    }
    return true;
  }

int inputMethod(int & number) {
  std::cout << "Enter the number please: ";
  std::cin >> number;
  return number;
}

int main() {
  int number = 0;
  inputMethod(number);
  if (checkSymetry(number)) {
    std::cout << "Symetric! \n";
  } else {
    std::cout << "Not symetric! \n";
  }
  return 0;
}