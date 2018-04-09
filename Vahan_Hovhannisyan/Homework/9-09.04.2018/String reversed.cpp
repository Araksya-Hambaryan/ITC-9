
#include <iostream>

inline void swap(char * a, char * b) {
  char tmp = * a;
  * a = * b;
  * b = tmp;
}

inline void reverse_string(char * start, char * end) {
  while (start < end) {
    swap(start++, end--);
  }

}

int main() {
  char str[] = "12381";
  char * start = std::begin(str);
  char * end = std::end(str);
  end -= 2; // end points 1 past the null character, so have to go back 2
  std::cout << "The original string " << str << ".\n";
  reverse_string(start, end);
  std::cout << "The reversed string " << str << ".\n";
  return 0;
}
