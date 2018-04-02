
#include <iostream> 
#include <string>

int main() { 
    std::string str; 
    std::cout << "enter line ";
    std::cin >> str;
    int i = 0;
    char s[str.size()];
    for (int j = 0; j < str.size() ;++j) { 
    char c = str[j];
    switch (c) { 
	    case '(': case '{': case '[':
            ++i;
	    s[i] = c; 
            break; 
        case '"':
        if(s[i] == '"') {
	    --i;
	 } else {
	    ++i;
	    s[i] = c;
	 }	 
	case ')':  
            if(s[i] == '(') {
            	--i;
    	    }
	    break; 
		
	case '}':  
            if(s[i] == '{') {
            	--i;
	    }
            break; 
		
  	case ']':  
            if(s[i] == '[') {
            	--i; 
	    }
	    break; 
        }
    } 
    if(i == 0) {
    	std::cout << "yes" << '\n';
    } else {
          std::cout << "no" << '\n';
    }
    return 0;
}
