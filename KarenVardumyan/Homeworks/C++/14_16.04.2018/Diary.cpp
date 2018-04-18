#include<iostream>
#include <fstream>
bool isName (std::string str){
     if( ('A' < str[0] && 'Z' > str[0]) ||  ('a' < str[0] && 'z' > str[0]) ) {
	return true;
     }
     else {
	return false;
     }
}
int main () {
    std::fstream blok;
    blok.open("myFile.txt");
    blok << "Karen 12.06.2017\nSevan 07.01.2017\nMeliq 28.04.2017\nMher 03.03.2018\nVahan 01.09.2017\n";
    blok.close();
    std::string str;
    std::ifstream F;
    F.open("myFile.txt");
    std::string buff;
    std::cout<<"\nNermuceq anun cragiry kasi te erb eq handipel nshvac mardun\n";
    std::cout<<"Nermuceq amsativ  cragiry lasi te um eq handipel nshavac amsatvin\n\n";
    std::string tekst;    
    std::getline(std::cin,tekst);
    
    int  j = 0;
    while (j < 10){
    	if (F) {
     	    if(isName(tekst)){
            	F>>buff;
            	if(buff == tekst){
	    	    F>>buff;
                    std::cout<<buff<<"\n";
                } else {
                    F>>buff;
                }
	    } else { 
	        F>>buff;
                str = buff;
	        F>>buff;
                if(buff == tekst){
                    std::cout<< str <<"\n";
                }
            }
        }
   	++j;
    }
    F.close();
    return 0;
}
