#include<iostream>

int foo (char harcum[]){

    int patasxan = 0; /*funkciai ardyunqy */
    int i = 0;
    char harc1[5] = {'b', 'a', 'r', 'e' , 'v'};
    char harc2[7] = {'v', 'o', 'n', 'c', 'e', 's','?'};
    char harc3[13] = {'d', 'a', 's', 'e', 'r', 't', 'a', 'r', 'e', 'l', 'e','s', '?'};
    char harc4[10] = {'h', 'a', 'j', 'o', 'x', 'u', 't', 'y', 'u', 'n'};
   
    bool h1 = true;
    bool h2 = true;
    bool h3 = true;
    bool h4 = true;

    while(5 > i) {
        if(harcum[i] == harc1[i]){
	    i++;
	} else {
	    h1 = false;
	    break;
	}
    }
    i = 0;
    while(5 > i){
        if(harcum[i] == harc2[i]){
            i++;
        } else {
            h2 = false;
            break;
        }
    }
    i = 0;
    while(5 > i){
        if(harcum[i] == harc3[i]){
            i++;
        } else {
            h3 = false;
            break;
        }
    }
    i = 0;
    while(5 > i){
        if(harcum[i] == harc4[i]){
            i++;
        } else {
            h4 = false;
            break;
        }
    }

    if (true == h1){
	patasxan = 1;
    } else if (true == h2){
	patasxan = 2;
    } else if (true == h3){
	patasxan = 3;
    } else if (true == h4) {
	patasxan = 4;
    } else {
	patasxan = 0;
    }
    return patasxan;
}

int main () {

    std::cout<<"Nermuceq hetevyal harcumneric meky \n";

    std::cout<<"1. barev\n";
    std::cout<<"2. vonc es?\n";
    std::cout<<"3. dasert arel es?\n";
    std::cout<<"4. hajoxutyun\n";

    int patasxan;
    char harcum[20];
    for (int i = 0; 5 > i; i++){
	std::cin>>harcum[i];
    }
    patasxan = foo(harcum);
   

while(patasxan != 4){
 
    switch (patasxan) {
	case 1: {
	    std::cout<<"Bari or\n";
	    break;
	}
	case 2: {
	    std::cout<<"Lav em\n";
	    break;
	}
	case 3: {
	    std::cout<<"Dasers verjacrel em\n";
	    break;
	}
	case 0: {
	    std::cout<<"Harcumy haskanali chi\n";
	    break;
	}
	   
    }

    for (int i = 0; 5 > i; i++){
        std::cin>>harcum[i];
    }
    patasxan = foo(harcum);

}

    std::cout<<"Hajoxutyun dzez\n";


    return 0;
}
