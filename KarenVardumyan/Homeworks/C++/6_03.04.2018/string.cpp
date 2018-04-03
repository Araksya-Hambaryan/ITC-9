#include<iostream>

int qanak (char a, char array[]) {
 
    int counter = 0;
    for(int i = 0; 20 > i; ++i) {
        if(array[i] == a) {
	    counter++;
	}
    }
    return counter;
}

void popoxel (char a,char b, char array[]) { /*teksti mej a-n poxarinel b-ov*/

    for(int i = 0; 20 > i; ++i){
	if(array[i] == a){
	    array[i] = b;
	}
    }
    for(int i=0; 20 > i; ++i){
	std::cout<<array[i];
    }
    std::cout<<"\n";
}

void jnjel (char a, char array[]) { /*teksti mejic jnjum e a- simvolnery */

    for(int i = 0; 20 > i; ++i){
        if(array[i] == a){
            array[i] = ' ';
        }
    }
    for(int i=0; 20 > i; ++i){
        std::cout<<array[i];
    }
    std::cout<<"\n";
}


int main () {

    char array[20] = {'w', 'e', 's','o','m','e','t','i','m','e','s', 'r','e','a','d','b','o','o','k','s'};
    std::cout<<"\nUnenq htevyal naxadasutyuny --- we sometimes read books --- \n";
    std::cout<<"Nermuceq hramani hamary heto katareq hamapatasxan gorcoxutyunery\n";
    std::cout<<"1. nermuceq tar.Cragiry khashvi te qani angam e tekstum ayd tary krknvum \n";
    std::cout<<"2. nermuceq erku tar.Cragiry teksti mej arajiny kpoxarini erkrordov\n";
    std::cout<<"3. nermuceq tar.Cragiry ayun kjnji teksti mejic\n";
    std::cout<<"4. greq 4 ev durs kgaq cragric\n\n";
    
    int hraman;
    std::cin>>hraman;

    while( hraman != 4){
	
        switch ( hraman ) {
             case 1 : {
	        std::cout<<"Nermuceq tar.Cragiry khashvi te qani angam e tekstum ayd tary krknvum \n";
	        char tar;
	        std::cin>>tar;
	        std::cout<<"teksti mej "<<tar<<" tary krknvum e "<<qanak(tar, array)<<" angam\n";
	        break;
             }
             case 2 : {
	         std::cout<<"Nermuceq erku tar.Cragiry teksti mej arajiny kpoxarini erkrordov\n";
                 char tar1;
                 char tar2;
	         std::cin>>tar1>>tar2;
	         popoxel(tar1,tar2,array);
                 break;
             }
	     case 3 : {
	         std::cout<<"Nermuceq tar.Cragiry ayun kjnji teksti mejic\n";
                 char tar;
	         std::cin>>tar;
                 jnjel(tar, array);
	         break;
             }             
	}
        std::cin>>hraman; 
    }
    std::cout<<"Hajoxutyun!!!\n";
    return 0;
}
