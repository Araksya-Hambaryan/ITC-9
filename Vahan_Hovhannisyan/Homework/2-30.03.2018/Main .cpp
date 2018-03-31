#include <limits> 
#include <iostream> 
#include <cmath> 
#define SHOW_RANGE(TYPE) show_range < TYPE > (#TYPE)
template < typename T > void show_range(const char * type) {
  typedef std::numeric_limits < T > limits;
  std::cout << "type: " << type << " min: " << limits::min() << " max: " << limits::max() << '\n';
}

int main() {
  int rangeOfIntNeg = pow(2, (sizeof(int) * 8) - 1) * (-1);
  int rangeOfIntPos = pow(2, (sizeof(int) * 8) - 1) - 1;
  std::cout << "type int min " << rangeOfIntNeg << " max " << rangeOfIntPos << "\n";
  SHOW_RANGE(double);
  SHOW_RANGE(unsigned long long);
  SHOW_RANGE(float);
}
				