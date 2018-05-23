#include<iostream>

int main () {

    int skizbJam;
    int skizbRope;
    int verjJam;
    int verjRope;
    char a; /* a-n ':' simvoln e */

    std::cout<<"Nermucvac jamanakahatvacy petq e lini 1:0 -ic minchev 12:59 intervalum\n";
    std::cout<<"Nermuceq skzbnakan jamanaky m:s formatov ";
    std::cin>>skizbJam>>a>>skizbRope;
    std::cout<<"Nermuceq verjnakan jamanaky m:s formatov ";
    std::cin>>verjJam>>a>>verjRope;

    int skizb = (skizbJam-1)*60 + skizbRope;
    int verj = (verjJam-1)*60 + verjRope;
    int qanak = 0;

    if(1 <= skizbJam && 12 >= skizbJam && 0 <= skizbRope && 59 >= skizbRope &&
       1 <= verjJam && 12 >= verjJam && 0 <= skizbRope && 59 >= skizbRope){  
  
        for (int i = skizb; i <= verj; i++){
	    if (0 == i % 60  ||  0 == (i - 7) % 60){
	        qanak++;
	    }
        }
	std::cout<<"Nshvac jamanakahatvacum azdanshany kkrknvi "<<qanak<<" angam"<<"\n";

    }else{
	std::cout<<"Nermucvac tvery chen karox cuyc tal jamanak\n";
    }
    return 0;
}
