#include <iostream>
#include <string>
#include <cstdlib>
int main(){

    std::string cnndyanOrAmisTari;
    std::cout << "mutqagrel cnndyan or-amis-tari" << std::endl;
    std::cin >> cnndyanOrAmisTari;
    std::string cnundior;
    for(int i = 0;i < 2;i++) {cnundior += cnndyanOrAmisTari[i];}
    std::string cnundiamis;
    for(int i = 3;i < 5;i++) {cnundiamis += cnndyanOrAmisTari[i];}
    std::string cnunditari;
    for(int i = 6;i < 10;i++) {cnunditari += cnndyanOrAmisTari[i];}
    int cnndyanOr = std::stoul(cnundior);//darcnum enq int
    int amis = std::stoul(cnundiamis);
    int tari = std::stoul(cnunditari);
    int shrjvacOr = ( cnndyanOr % 10 ) * 10 + cnndyanOr / 10;
    int shrjvacAmis = ( amis % 10 ) * 10 + amis / 10;

    if (12 < shrjvacOr  || 1 > shrjvacOr || shrjvacAmis < 1) {

        std::cout<<"erbeq chen ga aydpisi amis chka";
    } else {

             if (shrjvacOr == 1 || shrjvacOr == 3 || shrjvacOr == 5  ||
             shrjvacOr == 7 || shrjvacOr == 9 ||  shrjvacOr == 11)  {

             if (shrjvacOr > amis) {
                std::cout << "kushanan";
             } else  if (shrjvacOr < amis)  {
                std::cout << "shut kgan";
             } else if (shrjvacAmis > 31) {
               std::cout << "erbeq chen ga aydpisi or chka";
             } else  if( shrjvacAmis > cnndyanOr) {
               std::cout << "kushanan";
             } else  if (shrjvacAmis < cnndyanOr) {
               std::cout << "shut kgan";
             } else  if (shrjvacAmis == cnndyanOr) {
                std::cout << "chisht jamananakin kgan";
             }
                                                   
                                       
    } else {

if ( shrjvacOr == 4 || shrjvacOr == 6  ||
     shrjvacOr == 8 || shrjvacOr == 10 ||  shrjvacOr == 12)  {

     if (shrjvacOr > amis) {
      	 std::cout << "kushanan";
     } else if (shrjvacOr < amis)  {
     	 std::cout << "shut kgan";
     } else if (shrjvacAmis > 30) {
    	 std::cout << "erbeq chen ga aydpisi or chka";
     } else if( shrjvacAmis > cnndyanOr) {
    	 std::cout << "kushanan";
    } else  if (shrjvacAmis < cnndyanOr) {
    	 std::cout << "shut kgan";
    } else  if (shrjvacAmis == cnndyanOr) {
    	 std::cout << "chisht jamananakin kgan";
    }
                                                   
   } else {
 
   if (shrjvacOr == 2 ) {

   if (shrjvacOr > amis) {
        std::cout << "kushanan";
   } else if ( ( ( tari % 4 == 0 ) && shrjvacAmis > 28 ) ||

             ( ( tari % 4!= 0 ) && shrjvacAmis > 30 ) ) {

             std::cout << "erbeq chen ga aydpisi or chka";
    } else if( shrjvacAmis > cnndyanOr) {
        std::cout << "kushanan";
    } else  if (shrjvacAmis < cnndyanOr) {
   	 std::cout << "shut kgan";
    } else  if (shrjvacAmis == cnndyanOr) {
   	 std::cout << "chisht jamananakin kgan";
                                                       
      }
     }
    }
   }
  }                                      
              
  return 0; 
        
 }





