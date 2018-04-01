#include <iostream>
#include <cmath>
#include <stdio.h>
#include <string>
#include <stack>

int main() {
  std::string str;
  std::stack < int > contain;
  int res;
  int iMem;
  int count1 = 2;
  std::cin >> str;
  contain.push(0);
  for (int i = 0; i < str.length(); ++i){
      iMem = contain.size();
      if ('[' == str[i]) {
	  res = 1;
	}
      if (']' == str[i]) {
	  res = -1;
	}
      if ('}' == str[i]) {
	  res = -2;
	}
      if ('{' == str[i]) {
	  res = 2;
	}
      if ('(' == str[i]) {
	  res = 3;
	}
      if (')' == str[i]) {
	  res = -3;
	}
      if ('"' == str[i]) {
	  res = pow (-1, count1) * 4;
	  ++count1;
	}
      if (0 < res) {
	  contain.push(res);
	} else {
	  if (0 == contain.top()) {
	      contain.push (7);
	     std:: cout << "arajin pakagic@ chi karox pakox linel" << std::endl;
	      break;
	    } else {
	      if (0 == contain.top() + res) {
		  contain.pop();
		}

	    }
	}

    }
  if (0 == contain.top()) {
      std::cout << "amen inch chisht e" <<std::endl;
    }
  else {
      if (7 != contain.top())
	std::cout  << iMem <<"-rd andam@ sxal e " << std::endl;
    }
  return 0;
}

	

