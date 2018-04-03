#include <iostream>

  int main() {
    int Rings = 0;
    int num1Starting = 0;
    int num2Starting = 0;
    char opStarting = 0;
    std::cout << "Please input the starting point as shown - 3:45 - and press 'Enter' : ";
    std::cin >> num1Starting >> opStarting >> num2Starting;

    int num1Ending = 0;
    int num2Ending = 0;
    char opEnding = 0;
    std::cout << "Please input the ending point as shown - 3:45 - and press 'Enter' : ";
    std::cin >> num1Ending >> opEnding >> num2Ending;
    if ((num1Ending < 0 ||
        num1Ending > 11 ||
        opEnding != ':' ||
        num2Ending < 0 ||
        num2Ending > 59 ||
        num1Starting < 0 ||
        num1Starting > 11 ||
        opStarting != ':' ||
        num2Starting < 0 ||
        num2Starting > 59 ||
        num1Starting > num1Ending)) {

      std::cout << "Wrong input! \n";

    } else {
      if (num1Ending - num1Starting > 1) {
        for (int i = 0; i < num1Ending - num1Starting; i++) {
          if (num2Starting <= 7 && num2Ending >= 7) {
            Rings++;
          }
          Rings++;
        }
      }
      Rings = Rings + num1Ending - num1Starting;

      std::cout << Rings;
    }
    return 0;
  }
