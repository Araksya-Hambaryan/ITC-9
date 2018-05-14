#include <iostream>
#include <string>

char revers(char symbol) {
    char el;
    if ('(' == symbol) {
         el = ')';
    }
    if ('[' == symbol) {
         el = ']';
    }
    if ('{' == symbol) {
         el = '}';
    }
    if ('"' == symbol) {
         el = '"';
    }
return el;
}

int pieces (char bracke,int textsize, std::string txt) { 
    int num = 0;
    for (int i = 0; i < textsize; ++i) {
        if (bracke == txt[i]) {
            ++num;
        }
    }
    return num;
}

int main() {
    bool yes = 0;
    char element = 0;
    int forwhile = 0;
    int bracket10 = 0;
    int bracket11 = 0;
    int bracket20 = 0;
    int bracket21 = 0;
    int bracket30 = 0;
    int bracket31 = 0;
    int bracket40 = 0;
    std::string text;
    std::cout << "enter your text" << std::endl;
    getline(std::cin, text);
    bracket10 = pieces('(', text.size(), text);
    bracket11 = pieces(')', text.size(), text);
    bracket20 = pieces('[', text.size(), text);
    bracket21 = pieces(']', text.size(), text);
    bracket30 = pieces('{', text.size(), text);
    bracket31 = pieces('}', text.size(), text);
    bracket40 = pieces('"', text.size(), text);
    if (bracket10 == bracket11 && bracket20 == bracket21 && bracket30 == bracket31 && 0 == (bracket40 % 2)) {
        yes = 1; 
        while (forwhile <= text.size()) {
            for(int i = 0; i < text.size(); ++i) {
                if (')' == text[i] || '}' == text[i] || ']' == text[i]) {
                    std::cout << "error! pozition number is " << i + 1 << std::endl;
                    text[i] = '0';
                    yes = 0;
                    break;
                } else {
                    if ('(' == text[i] || '{' == text[i] || '[' == text [i] || '"' == text[i]) { 
                        int fori = i;
                        for (int j = 1 + fori; j < text.size(); ++j) {
                            element = revers(text[fori]);
                            if (text[j] == element) {
                                text[fori] = '0';
                                text[j] = '0';
                                break;
                            } else {
                                if ('(' == text[j] || '[' == text[j] || '{' == text[j] || '"' == text[j]) {
                                fori = j ;  //
                                } else {
                                    if(')' == text[j] || '}' == text [j] || ']' == text[j]  ) {
                                    std::cout << "error! pozition number is " << j + 1 << std::endl;
                                    text[i] = '0';
                                    text[j] = '0';
                                    yes = 0;
                                    break;    
                                    } else {
                                        text[fori] = '0';  //
                                        std::cout << "error! position number is " << fori + 1 << std::endl;
                                    }
                                }       
                            }
                        }
                    }
                }
                break;
            }
            ++forwhile;               
        }
    } else {
        while (forwhile <= text.size()) {
            for(int i = 0; i < text.size(); ++i) {  //
                if (')' == text[i] || '}' == text[i] || ']' == text[i]) {
                    std::cout << "error! pozition number is " << i + 1 << std::endl;
                    text[i] = '0';
                    yes = 0;
                    break;
                } else {
                    if ('(' == text[i] || '{' == text[i] || '[' == text [i] || '"' == text[i]) { 
                        int fori = i;
                        for (int j = 1 + fori; j < text.size(); ++j) {          //
                            element = revers(text[fori]);
                            if (text[j] == element) {
                                text[fori] = '0';
                                text[j] = '0';
                                break;
                            } else {
                                if ('(' == text[j] || '[' == text[j] || '{' == text[j] || '"' == text[j]) {
                                fori = j ;  //
                                } else {
                                    if(')' == text[j] || '}' == text [j] || ']' == text[j]  ) {
                                    std::cout << "error! pozition number is " << j + 1 << std::endl;
                                    text[i] = '0';
                                    text[j] = '0';
                                    yes = 0;
                                    break;    
                                    } else {
                                        text[fori] = '0'; //
                                        std::cout << "error! position number is " << fori + 1 << std::endl;
                                    }
                                }       
                            }
                        }
                    }
                }
                break;
            }
            ++forwhile;               
        }
    }
    if (yes == 1) {
        std::cout << "your text is correct" << std:: endl;
    }
    return 0;
} 
