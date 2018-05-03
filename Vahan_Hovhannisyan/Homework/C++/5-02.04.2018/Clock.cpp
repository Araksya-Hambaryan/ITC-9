#include <iostream>

  int main() {
    int rings = 0;
    int startingHours = 0;
    int startingMinutes = 0;
    char opStarting = 0;
    std::cout << "Please input the starting point as shown - 3:45 - and press 'Enter' : ";
    std::cin >> startingHours >> opStarting >> startingMinutes;

    int endingHours = 0;
    int endingMinutes = 0;
    char opEnding = 0;
    std::cout << "Please input the ending point as shown - 3:45 - and press 'Enter' : ";
    std::cin >> endingHours >> opEnding >> endingMinutes;
    if ((endingHours < 0 ||
        endingHours > 11 ||
        opEnding != ':' ||
        endingMinutes < 0 ||
        endingMinutes > 59 ||
        startingHours < 0 ||
        startingHours > 11 ||
        opStarting != ':' ||
        startingMinutes < 0 ||
        startingMinutes > 59 ||
        startingHours > endingHours)) {

      std::cout << "\nSorry,wrong input! \n";

    } else {
      int beginning = startingHours * 60 + startingMinutes;
      int ending = endingHours * 60 + endingMinutes;
      for (int i = beginning; i <= ending; i++) {
        if (0 == i % 60 || 0 == (i - 7) % 60) {
          rings++;
        }

      }
      std::cout << "The number of rings is: " << rings;
    }
    return 0;
  }