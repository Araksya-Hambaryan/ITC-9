#include <iostream>
#include <cmath>

int main () {
    std::cout<<"Nermuceq tivy vory petq e stgvi parz tiv e te voch ";
    int tiv;
    std::cin>>tiv;
    bool ardyunq = true;
	
    //Ete minchev cikli avarty gtnvi gone mek tiv vori vra mer skzbnakan tivy 
    //aranc mnacordi bajanvi apa ardyunqy kdarna false ev durs kga ciklic
    for(int i = 2; i < sqrt(tiv); i++) {
        if(0 == tiv % i) {
            ardyunq = false;
            break;
    	}
    }

    if (ardyunq != false){
        std::cout<<"Nermucvac tivy parz tiv e \n";
    } else {
        std::cout<<"Nermucvac tivy parz tiv che \n";
    }
    return 0;
}
