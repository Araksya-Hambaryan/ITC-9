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
std::string replace(std::string str, char sym1, char sym2){
    for(int i = 0; i <= str.length (); ++i) {
       if(sym1 == str[i]) {
           str[i] = sym2;
        }
        
    }
return str;
}
std::string deletefun(std::string str, char sym1){
    std::string str1;
    str1.reserve(str.size()); 
    for(int i = 0; i < str.size(); ++i) {
        if(str[i] != sym1)
        str1 += str[i];
        }
        str = str1;
        return str;
}

int main() {
    std::string str;
    int choose;
    char sym1;
    char sym2;
    std::cout << "input your Text\n";
    getline (std::cin, str);
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
                       str = replace(str, sym1, sym2);
                        std::cout << str << std::endl;
                        break;
                    }
            case 3: {
                        std::cout << "nermuceq simvol@\n";
                        std::cin >> sym1;
                        str = deletefun(str, sym1);
                        std::cout << str << std::endl;
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
                        std::cout << "choose=";
                        std::cin >> choose;
                        break;    
                    }
        }
    }
    return 0;

}

