#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
int countOf(std::string str, char x) {
  int counter = 0;
  for(int i = 0; i <= str.length (); ++i) {
      if(x == str[i]) {
	  ++counter;
	  }
  }
  return counter;
}

int replace(std::string str, char x, char y) {
  for(int i = 0; i <= str.length (); ++i) {
      if(x == str[i]) {
	  str[i] = y;
	  }
  }
  std::cout << str << std::endl;
  return 0;
}

int remove(std::string str, char x) {
  int len = str.length ();
  for(int i = 0; i <= len; ++i) {
      if(x == str[i]) {
	  str.erase (i, 1);
	  --i;
	  }
   }
  std::cout << str << std::endl;
  return 0;
}

int main() {
  std::string str;
  int choose;
  char sym1;
  char sym2;
  std::cout << "input your Text\n";
  std::cin >> str;
  std::cout << "1 count.  2 replace.  3 remove.  4 exit\n";

    while(4 != choose) {
    std::cout << "\n" << "text\n" << str << std::endl;
    std::cout << "choose=";
    std::cin >> choose;
    switch(choose) {
    	case 1: {
    	    std::cout << "nermuceq simvol@\n";
    	    std::cin >> sym1;
    	    int cont = countOf (str, sym1);
    	    std::cout << "\n" << " counter=";
    	    std::cout << cont << "\n";
    	    break;
    	}
    	case 2: {
    	    std::cout << "nermuceq simvol@\n";
    	    std::cin >> sym1;
    	    std::cout << "&";
    	    std::cin >> sym2;
    	    int k = replace (str, sym1, sym2);
    	    break;
    	}
    	case 3: {
    	    std::cout << "nermuceq simvol@\n";
    	    std::cin >> sym1;
    	    int k = remove (str, sym1);
    	    break;
    	}
    	case 4:
    	{
    	    std::cout << "Good luck\n";
    	    break;
    	}
    	default:
    	{
    	    std::cout << "@ntreq ays 4 keteric mek@\n";
    	    break;
    
    	}
   }
   }
  return 0;

}
