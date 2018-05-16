#include <iostream>
#include <string>
int main (){
  char gorcoxutyun;
  int number1;
  int number2;
  double a;
  std::cout << "arajin tiv =";
  std::cin >> number1;
  std::cout << "gorcoxutyan nshan@";
  std::cin >> gorcoxutyun;
  std::cout << "erkrord tiv=";
  std::cin >> number2;
  std::cout << "arjeq@ =";
  switch (gorcoxutyun){
    case '+':
      std::cout << number1 + number2;
      break;
    case '-':
      std::cout << number1 - number2;
      break;
    case '/':
      if (number2 != 0){
	  a = (float) number1 / number2;
	  std::cout << a;
	}else{
	  std::cout << "tiv@ 0 i bajanel chi kareli :)";
	}
      break;
    case '*':
      std::cout << number1 * number2;
      break;
    default:
      std::cout << "gorcoxutyan nshan@ sxal e";
      break;

	return 0;
    }
}
