#include<iostream>

struct Data {
    int month;
    int dey;
    };

int main () {

    Data date1;
    std::cout<<"\nGreq araijin orva   ory ev amisy ";
    std::cin>>date1.dey;
    std::cin>>date1.month;


    std::cout<<"\nGreq erkrord orva   ory ev amisy ";
    Data date2;
    std::cin>>date2.dey;
    std::cin>>date2.month;

    if(0 < date1.dey && 31 >date1.dey && 0 < date1.month && 13 > date1.month && 
       0 < date2.dey && 31 >date2.dey && 0 < date2.month && 13 > date2.month){

   	Data time;   // jamanakneri tarberutyuny
	int deys1 = (date1.month * 30) + date1.dey; 
    	int deys2 = (date2.month * 30) + date2.dey;

	if(deys2 >= deys1){
     	    time.dey = (deys2 - deys1) % 30;
	    time.month = (deys2 - deys1) / 30;
	    std::cout<<"\nJamanakneri tarbrutyunn e "<<time.month<<" amis ev "<<time.dey<<" or\n";
        } else {
	    std::cout<<"\nErkrord ory petq e lini arajin oric heto \n";
        }
    } else {
 	std::cout<<"\nOrery petq e linen 1-ic 30, isk amisnery 1-ic 12 \n";
    }
    return 0;
}
