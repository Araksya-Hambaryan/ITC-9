#include<iostream>
#include<cmath>

bool parzTiv (int);

int main () {
    std::cout<<"Nermuceq tiv vory kverlucvi parz artadichneri ";
    int tiv;
    std::cin>>tiv;
   
    if (0 < tiv){ 
        for(int i = 1; i <= tiv/2; i++){
	    if(0 == tiv % i && parzTiv(i)) {
	        std::cout<<i<<"\n";
                std::cout<< -1 * i <<"\n";
	    }
        }

        if(parzTiv(tiv)){
	    std::cout<<tiv<<"\n";
            std::cout<< -1 * tiv<<"\n";
        }
    } else if (0 > tiv) {
        tiv = -1 * tiv;
        for(int i = 1; i <= tiv/2; i++){
            if(0 == tiv % i && parzTiv(i)) {
                std::cout<<i<<"\n";
                std::cout<<-1*i<<"\n";
            }
        }
        if(parzTiv(tiv)){
            std::cout<<tiv<<"\n";
            std::cout<<-1*tiv<<"\n";
        }
    } else {
	std::cout<<"0 tivy chi karox unenal voreve artadrich\n";
    }
    return 0;
}

bool parzTiv (int a) {

    for (int i = 2; i <= a/2; i++){
        if (a % i == 0){
            return  false;
        }
    }
    return true;
}
