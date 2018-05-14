#include <iostream>

int main() {
       
    char artahaytutyun[10];
    std::cout<<"Nermuceq amis amsativy tari-or-amis formatov ";
    for (int i = 0; 10 > i; ++i) {
        std::cin>>artahaytutyun[i];
    }

    int or1 = (artahaytutyun[5] - '0') * 10 + (artahaytutyun[6] - '0');
    int amis1 = (artahaytutyun[8] - '0') * 10 + (artahaytutyun[9] - '0');
    int or2;
    int amis2;

    if (or1 / 10 == 0) {
        amis2  = (or1 % 10) * 10;
    } else {
		amis2 = (or1 % 10) * 10 + or1 / 10;
    }
    if (amis1 / 10 == 0) {
	or2 = (amis1 % 10) * 10;
    } else {
        or2 = (amis1 % 10) * 10 + amis1 / 10;
    }
        
    if (0 <= or2  &&  28 >= or2  &&  2 == amis2  ||
	0 <= or2  &&  30 >= or2  &&  4 == amis2  ||
	0 <= or2  &&  30 >= or2  &&  6 == amis2  ||
	0 <= or2  &&  30 >= or2  &&  9 == amis2  ||
	0 <= or2  &&  30 >= or2  &&  11 == amis2 ||
        0 <= or2  &&  30 >= or2  &&  1 == amis2  ||
   	0 <= or2  &&  31 >= or2  &&  3 == amis2  ||
	0 <= or2  &&  31 >= or2  &&  5 == amis2  ||
	0 <= or2  &&  31 >= or2  &&  7 == amis2  ||
	0 <= or2  &&  31 >= or2  &&  8 == amis2  ||
	0 <= or2  &&  31 >= or2  &&  10 == amis2 ||
	0 <= or2  &&  31 >= or2  &&  12 == amis2) {
        std::cout<<"\nKaycelen ";
	    for(int i = 0; 5 > i; i++){
	        std::cout<<artahaytutyun[i];
	    }
        std::cout<<or2<<"-"<<amis2<<" amsatvin \n";
    } else {
        std::cout<<"\nChen ayceli vorovhetev nman amsativ chi lini \n";
    }
    return 0;
}
