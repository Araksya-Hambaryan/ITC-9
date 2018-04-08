#include<iostream>
#include<string>

using namespace std;

int qanak (char*,int,char);
void popoxel (char,char,char*,int ); // teksti mej a-n poxarinel b-ov
void jnjel (char,char*,int);         //teksti mejic jnjum e nshvac simvoly- simvolnery 

int main () {

    string array;      
    cout<<"\nNermuceq voreve tekst \n\n";
    getline(cin,array);
    int hraman;
    int chap = array.length();
    char *argument = &array[0];

    cout<<"\nNermuceq hramani hamary,sexmeq ENTER heto katareq hamapatasxan gorcoxutyunery\n";
    cout<<"1. nermuceq tar.Cragiry khashvi te qani angam e tekstum ayd tary krknvum \n";
    cout<<"2. nermuceq erku tar.Cragiry teksti mej arajiny kpoxarini erkrordov\n";
    cout<<"3. nermuceq tar.Cragiry ayun kjnji teksti mejic\n";
    cout<<"4. greq 4 ev durs kgaq cragric\n\n";
    cin>>hraman;

    while (hraman != 4) {
        switch ( hraman ) {
             case 1 : {
	        cout<<"Nermuceq tar.Cragiry khashvi te qani angam e tekstum ayd tary krknvum \n";
                char tar;
	        cin>>tar;
	        cout<<"teksti mej "<<tar<<" tary krknvum e "<<qanak(argument,chap,tar)<<" angam\n";
                cout<<"Nermuceq hajord hramani hamary ";
                break;
             }
             case 2 : {
	         cout<<"Nermuceq erku tar.Cragiry teksti mej arajiny kpoxarini erkrordov\n";
                 char tar1;
                 char tar2;
	         cin>>tar1>>tar2;
	         popoxel(tar1,tar2,argument,chap);
                 cout<<"Nermuceq hajord hramani hamary ";

                 break;
             }
	     case 3 : {
	         cout<<"Nermuceq tar.Cragiry ayun kjnji teksti mejic\n";
                 char tar;
	         cin>>tar;
                 jnjel(tar, argument, chap);
                 cout<<"Nermuceq hajord hramani hamary ";
	         break;
             }             
	}
        cin>>hraman; 
    }
    cout<<"Hajoxutyun!!!\n";
  
    return 0;
}

int qanak (char* array, int chap,char a) {

    int counter = 0;
    for(int i = 0; chap > i; ++i) {
        if(array[i] == a) {
            counter++;
        }
    }
    return counter;
}

void popoxel (char a,char b, char* array,int chap) { // teksti mej a-n poxarinel b-ov

    for(int i = 0; chap > i; ++i){
        if(array[i] == a){
            array[i] = b;
        }
    }
    for(int i=0; chap > i; ++i){
        cout<<array[i];
    }
    cout<<"\n";
}

void jnjel (char a, char* array, int chap) { //teksti mejic jnjum e a- simvolnery 
  
    int counter = 0;
    for(int i = 0; i < chap; i++){
	if(array[i] == a){
	    counter++;
	}
    }

    for(int k = 0; k < counter; k++){

    for(int i = 0; chap > i; ++i){
        if(array[i] == a){
            for(int j = i; chap > j; ++j){
                array[j] = array[j+1];
            }
        }
    }

    }
    for(int i = 0;  chap > i; ++i){
        cout<<array[i];
    }
    cout<<"\n";
}
