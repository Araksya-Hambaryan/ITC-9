#include <iostream>
#include <string>

int main(){
    int i;
    int chakertneriQanak = 0;
    std::string tox;
    std::string bacvox;

    std::cout << "Mutqareq tox kazmvac tarber tipi pakagceric" << std::endl;
    std::cin >> tox;

    for(i = 0; i < tox.size() ; i++){

         if (tox[i] == '(' || tox[i] == '{' || tox[i] == '[' ) {

        	 bacvox += tox[i];

         } else if (tox[i] == '"' && chakertneriQanak % 2 == 0) {
                     
                       bacvox += tox[i];
                       chakertneriQanak ++;
                } else {
                       
			 if (tox[i] == ')' || tox[i] == '}' || tox[i] == ']' || 
                            (tox[i] == '"' && chakertneriQanak % 2 != 0) ) {

                        	 if (bacvox.size() == 0) {
                                	 std::cout<< "arajinn pakvox e sxal e" << std::endl; break;

                          	 } else {

                                	 char  verjinBacvox = bacvox.back();

                                	 if ( (verjinBacvox == '(' && tox[i] != ')' ) ||
                                   	 (verjinBacvox == '{' && tox[i] != '}' ) ||
                                   	 (verjinBacvox == '[' && tox[i] != ']' ) ||
                                   	 (verjinBacvox == '"' && tox[i] != '"' ) ) {

                                   	 std::cout << "sxal pakagic" << " " << i << " " << "indeqsum" ;
					 break;
                                 	
					 }  else {

                                        	 bacvox.resize (bacvox.size () - 1);
                                        }
                                   }
                             }

                       }
                            
                 }
                  
if (i == tox.size()) {
                         std::cout << "amen inch chishta";

                     }



    return 0;
}
            

