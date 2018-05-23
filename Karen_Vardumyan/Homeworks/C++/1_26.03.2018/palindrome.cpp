#include <iostream>

// skzbnakanTivy ayn tivn e vory petq e voroshvi hamachap e te voch
int shrjel (int skzbnakanTiv) {
    
    int shrjvacVichak = skzbnakanTiv % 10;
    while (0 != skzbnakanTiv / 10) {
        skzbnakanTiv = skzbnakanTiv / 10;
        shrjvacVichak = shrjvacVichak * 10 + skzbnakanTiv % 10;
    }
    return shrjvacVichak;
}

int main () {
    
    float tiv;
    std::cout<<"Nermuceq voreve tiv vory petk e voroshvi hamachap e te voch  ";
    std::cin>>tiv;
    //Ete tivy drakan e ev havasar e ir amboxj masin`
    //aysinqn kotorakain masy 0 e apa ayn karox e linel hamachap
    if (0 < tiv  &&  tiv == (int)tiv) {
        if((int)tiv == shrjel(tiv) ){
            std::cout<< "Nermucvac tivy hamachap e \n";
        } else {
	    std::cout<< "Nermucvac tivy hamachap che \n";
        }
    // Nermucvac tivy ete 0 lini ayn hamachap klini ir nkatmamb
    } else if (0 == tiv) {       
        std::cout<<"0 tivy hamachap e ir nkatmamb \n";
    // Paymani mej stugel em tivy kotorakain tiv e te amboxj tiv   
    } else if (0 > tiv && tiv != (int)tiv) {
        std::cout<<"Kotorakain tivy chi karox linel hamachap \n";
    // Tivy 0-in havasar ev mec depqery arden qnnarkvel en.
    // Mnacac depqerum ayn bacasakan e ev hamachap linel chi karox
    } else {
        std::cout<<"Bacasakan tivy chi karox linel hamachap \n";
    }
    return 0;
}
