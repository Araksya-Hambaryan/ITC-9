#include<iostream>
#include<string>

using namespace std;
int foo (char*);

int main () {

    cout<<"Nermuceq hetevyal harcumneric meky \n";
    cout<<"1. barev\n";
    cout<<"2. vonc es?\n";
    cout<<"3. dasert arel es?\n";
    cout<<"4. hajoxutyun\n";

    string harcum;
    getline(cin,harcum);
    char* arg = &harcum[0];
    int patasxan = foo(arg);
     
    while(patasxan != 4){
         switch (patasxan) {
	    case 1: {
	    cout<<"Bari or\n";
	    break;
	    }
	    case 2: {
	    cout<<"Lav em\n";
	    break;
	    }
	    case 3: {
	    cout<<"Dasers verjacrel em\n";
	    break;
	    }
	    case 0: {
	    cout<<"Harcumy haskanali chi\n";
	    break;
	    }
	}
	getline(cin,harcum);
        patasxan = foo(&harcum[0]);
    }
    cout<<"Ctesutyun!!!\n";

    return 0;
}

int foo (char* harcum){
  
    string  harc1 = "barev";
    string  harc2 = "vonc es?";
    string  harc3 = "dasert arel es?";
    string  harc4 = "hajoxutyun";
   
    if(harcum == harc1){
	return 1;
    } else if(harcum == harc2){
	return 2;
    } else if(harcum == harc3){
	return 3;
    } else if(harcum == harc4){
        return 4;
   } else {
	return 0;
   }
}


