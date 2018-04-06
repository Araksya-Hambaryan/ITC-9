#include <iostream> 
#include <string>

  int main() {
    std::string Response[] = {
      "Hi!",
      "Very well, and you ?",
      "Yeah. It was really exhausting!",
      "Thanks, you too !.",
    };
    std::string Talk[] = {
      "Hi!",
      "How do you do?",
      "Are you done with your homework yet?",
      "Have a good day!",
    };
    std::cout << "The list of what you can say: \n" <<
      "Hi!\n"
    "How do you do?\n"
    "Are you done with your homework yet?\n"
    "Have a good day!\n";
    std::cout << "Say 'Have a good day!' to end convesration.\n";
    std::cout << "Talk to me please: " << std::endl;
    std::string userTalk;
    do {
      std::getline(std::cin, userTalk);
      int talk = -1;
      for (int i = 0; i < 4; ++i) {
        if (userTalk == Talk[i]) {
          talk = i;
        }
      }

      switch (talk) {

      case 0:
        std::cout << Response[0] << std::endl;
        break;
      case 1:
        std::cout << Response[1] << std::endl;
        break;
      case 2:
        std::cout << Response[2] << std::endl;
        break;
      case 3:
        std::cout << Response[3] << std::endl;
        break;
      default:
        std::cout << "Sorry I can't understand you." << std::endl;
        break;
      }

    } while (userTalk != Talk[3]);

    return 0;
  }