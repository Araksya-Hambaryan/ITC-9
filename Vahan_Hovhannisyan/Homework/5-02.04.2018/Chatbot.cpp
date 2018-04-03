#include <iostream> 
#include <string>

  int main() {
    std::string Response[] = {
      "Hi!",
      "Very well, and you ?.",
      "Yeah. It was really exhausting!",
      "Thanks, you too !.",
    };
    std::string Talk[] = {
      "Hi!",
      "How do you do?",
      "Are you done with your homework yet?",
      "Have a good day!",
    };
    std::cout << "Talk to me please: " << std::endl;
    std::string userTalk;

    do {
        std::getline (std::cin, userTalk);
      if (userTalk == Talk[0]) {
        std::cout << Response[0] << std::endl;
      }
      else if (userTalk == Talk[1]) {
      
        std::cout << Response[1] << std::endl;
      }
      else if (userTalk == Talk[2]) {
        std::cout << Response[2] << std::endl;
      }
      else if (userTalk == Talk[3]) {
        std::cout << Response[3] << std::endl;
      }
      else {
        std::cout << "Sorry I can't understand you." << std::endl;
      }

    } while (userTalk != Talk[3]);

    return 0;
  }