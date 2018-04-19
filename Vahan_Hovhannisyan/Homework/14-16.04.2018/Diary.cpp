
#include <iostream> 
#include <fstream>

  void checkForName(std::string str) {
    std::ifstream file("diary.txt"); // pass file name as argment
    std::string linebuffer;

    bool isName = false;

    while (file && std::getline(file, linebuffer)) {
      int i = 0;
      while (' ' != linebuffer[i]) {
        i++;
      }
      if (str == linebuffer.substr(0, (i))) {
        std::cout << "Met " << linebuffer << "\n";
        isName = true;
      } else if (str == linebuffer.substr(i + 1, linebuffer.length())) {
        std::cout << "Met " << linebuffer << "\n";
        isName = true;
      }
    }
    if (false == isName) {
      std::cout << "No such name or date in diary.";
    }
  }

void inputStr(std::string & str) { //I need '&' here so that I can pass 'str' by reference.
  std::cout << "Input a name or date please: ";
  getline(std::cin, str);
}

int main() {
  std::string str;
  inputStr(str);
  checkForName(str);

  return 0;
}
