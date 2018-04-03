#include<iostream>
#include<cmath>

bool parzTiv (int a) {

    bool ardyunq = true;
    for (int i = 2; i < a; i++){
	if (0 == a % i){
	    ardyunq = false;
	    break;
	}
    }
    return ardyunq;
}

int main () {
   
    std::cout<<"Nermuceq erku tiv.Cragiry cuyc e talu arajin tvi chkrknvox parz artadrichnery ";
    int tiv1;
    int tiv2;
    std::cin>>tiv1>>tiv2;

    /*cikly petq e stugi ayd tveric mecaguyni chapov */
    int mecagyun;
    if (tiv1 >= tiv2){
	mecagyun = tiv1;
    } else {
        mecagyun = tiv2;
    }    


    int counter = 0; /*chkrknvox parz artadrichneri qanaky */
    if (0 != tiv1 && 0 != tiv2){

        int i = 1; /* cikli indeks */
        while(i <= mecagyun/2){
	    if( tiv1 % i == 0 && tiv2 % i != 0 && parzTiv(i) == true){
	        std::cout<<i<<"\n";
	        counter++;
	        i++;
	    } else {
	        i++;
	    }
        }

    }else {
	std::cout<<"0 tivy chi karox unenal voreve artadrich  \n";
    }

    if (counter == 0){
	   std::cout<<"Chkrkanvox parz artadrichner nermucvac tvery chunen\n";
    }
    return 0;
}
