#include <iostream>
#include <string.h>

int main() {
    char question[256];
    std::cout << "Bot: Hey! I'm Bot. I've created recently so I can answer only few questions, question list is as follows:" << std::endl;
    std::cout << "Hey! How are you?" << std::endl;
    std::cout << "Have you done your homework?" << std::endl;
    std::cout << "How old are you?" << std::endl;
    std::cout << "You're amazing!" << std::endl;
    std::cout << "Bye" << std::endl;
    std::cout << "\n So let's see what answer I've prepared for this qestions :-)\n";
    std:: cout << "***********************************************************\n\n";
    while (std::cout << "You: ", std::cin.getline(question, 30)) {
        if (strcmp ("Hey! How are you?", question) == 0) {
            std::cout << "Bot: Heeeey! I'm fine, thank you. What about you?" << std::endl;
            continue;
        }
        if (strcmp ("Have you done your homework?", question) == 0) {
            std::cout << "Bot: Of course I've done" << std::endl;
            continue;
        }
        if (strcmp ("How old are you?", question) == 0) {
            std::cout << "Bot: I've created on 04.04.2018" << std::endl;
            continue;
        }
        if (strcmp ("You're amazing!", question) == 0) {
            std::cout << "Bot: You're more so" << std::endl;
            continue;
        }
        if (strcmp ("Bye", question) == 0) {
            std::cout << "Bot: Bye :-)" << std::endl;
            return 0;
        } else {
            std::cout << "Bot: Sorry, I can't understand you" << std::endl;
            continue; 
        }
        
    }
    return 0;
}
