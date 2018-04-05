#include <iostream>
#include <string>

void replace (char text[255], char change) {
    char str;
    std::cout << "pleace enter new letter" << std::endl;
    std::cin >> str;
    for (int i = 0; i < 255; ++i) {
        if(text[i] == change) {
            text[i] = str;
        } 
    }
}


int count (char text[255], char str) {
    int quantity = 0;
    for (int i = 0; i < 255; ++i) {
        if (text[i] == str) {
            ++quantity;
        }    
    }    
    return quantity;
}

            
void remove(char text[255], char rem) {
    for ( int i = 0; i < 255; ++i) {
        if (text[i] == rem) {
            for (int j = i; j < 255; ++j) {
                text[j] = text[j+1];
            }              
        i = i - 1;
        }
    }
}


int main () {
    static  char text[255];
    std::cout << "enter your text" << std::endl;
    std::cin.get(text,255);
    bool k = 1;
    int number = 0;
    char change;
    char prog;
    std::cout << "1 count, cin '1' 'count letter' " << std::endl;
    std::cout << "2 replace, cin '2' 'replace letter'" << std::endl;
    std::cout << "3 remove, cin '3' 'remove letter' " << std::endl;
    std::cout << "4. '4' ' ' for exit " << std::endl;
    while(true == k) {
        std::cout << "please enter 'num' 'letter'" << std::endl;
        std::cin >> number >> prog;
        if (0 >= number && 4 < number) {
            break;
        }
        switch (number) {
            case 1:
                std::cout << "leter is - " <<count(text, prog) << " pices" <<std::endl;
                break;
            case 2:
                replace(text, prog);
                std::cout << text << std::endl;
                break;
            case 3:
                remove(text, prog);
                std::cout << text << std::endl;
                break;
            case 4:
                k = 0;
        }
    }
    return 0;    
}   
