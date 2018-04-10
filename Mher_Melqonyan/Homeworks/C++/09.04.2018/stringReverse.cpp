#include <iostream> 
#include <string>

  int main() {
    std::string str;
    std::cout << "nermuceq text\n";
    getline(std::cin, str);
    char* begin;
    char* eNd;
    int size = str.size();
    for (int i = 0; i < size / 2; ++i) {
      begin = & str.at(0);
      eNd = & str.at(size - 1);
      char res;
      res = * (begin + i);
      * (begin + i) = * (eNd - i);
      * (eNd - i) = res;
    }

    std::cout << str;
    return 0;
  }
