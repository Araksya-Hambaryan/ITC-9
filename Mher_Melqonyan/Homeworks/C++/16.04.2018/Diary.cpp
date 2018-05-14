#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
#include <cstdlib>
void print(const std::string& str) {
    std::cout << str << "\n"; 
}
void show() {
    std::cout << "input names & dates \n";
    std::cout << "Meliq 11/02/2018 12:25, \nMiqael 12/05/2008 13:05, \nAnush 24/04/2007 15:00, \nArman 21/12/2006 13:00, \nKaren 14/04/2006 11:10 \n";
    std::cout << "Your request_";

}
int main() {
    std::string path = "info.txt";
    std::ifstream fin;
    fin.open("info.txt");
    if(!fin.is_open()) {
        std::cout << "file is not open";
    } else {
        std::string str;
        std::string request;
        std::string mem;
        show();
        int counter=0;
        std::getline(std::cin, request);
        while(!fin.eof()) {
            ++counter;
            std::getline(fin, str);
            if(str == request) {
                if(0 != counter % 2) {
                    std::getline(fin, str);                    
                    print(str);
                    exit(1);
                } else if(0 == counter % 2) {
                    print(mem);
                    exit(1);
                } 
            }

            mem=str;
        }
        std::cout << "please input correct \n " ;
    }
    fin.close();
    return 0;
}
