#include<iostream>
#include<cmath>

bool parzTiv (int a) {
    
    for (int i = 2; i < sqrt(a); i++){
	if (a % i == 0){
	    return  false;
	    break;
	}
    }
    return true;
}

int main () {
    std::cout<<"Nermuceq tiv vory kverlucvi parz artadichneri ";
    int tiv;
    std::cin>>tiv;
   
    if (0 != tiv){
 
        for(int i = 1; i <= tiv; i++){
	    if(0 == tiv % i && true == parzTiv(i)) {
	        std::cout<<i<<"\n";
	    }
        }

    } else {
	std::cout<<"0 tivy chi karox unenal voreve artadrich\n";
    }
    return 0;
}
