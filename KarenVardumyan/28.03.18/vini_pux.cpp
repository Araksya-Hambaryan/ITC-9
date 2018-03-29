#include <iostream>



int main()
{
        char artahaytutyun[10];
	std::cout<<"Nermuceq amis amsativy tari-or-amis formatov ";
        for(int i=0; i<10; i++){
               std::cin>>artahaytutyun[i];
        }

  /*  for(int i=0; i<10; i++){
        cout<<artahaytutyun[i]<<"\n";
    }*/


        int or1 = (artahaytutyun[5] - '0')*10 + (artahaytutyun[6] - '0');

        int amis1 = (artahaytutyun[8] - '0')*10 + (artahaytutyun[9] - '0');
	
	int or2,amis2;


	if(or1/10 == 0 ){
		amis2  = (or1%10)*10;
	}else{
		 amis2 = (or1%10)*10 + or1/10;
	}


	if(amis1/10 == 0){
		or2 = (amis1%10)*10;
	}else{
        	 or2 = (amis1%10)*10 + amis1/10;
	}
        
        
       std::cout<<"\n";
        
//        cout<<or2<<"-"<<amis2<<"\n";
        
	


	if(0<=or2 && or2<= 28 && amis2==2   && amis2 <= amis1  && or1 < or2  || \

		0<=or2 && or2 <=30 && amis2==4  && amis2 <= amis1  && or1 < or2 || \
                0<=or2 && or2 <=30 && amis2==6  && amis2 <= amis1  && or1 < or2 || \
		0<=or2 && or2 <=30 && amis2==9  && amis2 <= amis1  && or1 < or2 || \
		0<=or2 && or2 <=30 && amis2==11 && amis2 <= amis1  && or1 < or2 ||
                
		0<=or2 && or2 <=31 && amis2==1  && amis2 <= amis1  && or1 < or2 || \
		0<=or2 && or2 <=31 && amis2==3  && amis2 <= amis1  && or1 < or2 || \
                0<=or2 && or2 <=31 && amis2==5  && amis2 <= amis1  && or1 < or2 || \
		0<=or2 && or2 <=31 && amis2==7  && amis2 <= amis1  && or1 < or2 || \
		0<=or2 && or2 <=31 && amis2==8  && amis2 <= amis1  && or1 < or2 || \
		0<=or2 && or2 <=31 && amis2==10 && amis2 <= amis1  && or1 < or2 || \
		0<=or2 && or2 <=31 && amis2==12 && amis2 <= amis1  && or1 < or2){
		

		std::cout<<"kaycelen ";
		for(int i=0; i<5; i++){
		std::cout<<artahaytutyun[i];
		}
		std::cout<<or2<<"-"<<amis2<<" amsatvin"<<"\n";

			

	}else if (0<=or2 && or2<= 28 && amis2==2  || \

		0<=or2 && or2 <=30 && amis2==4  || \
		0<=or2 && or2 <=30 && amis2==6  || \
		0<=or2 && or2 <=30 && amis2==9  || \
		0<=or2 && or2 <=30 && amis2==11 || \

		0<=or2 && or2 <=31 && amis2==1  || \
		0<=or2 && or2 <=31 && amis2==3  || \
		0<=or2 && or2 <=31 && amis2==5  || \
		0<=or2 && or2 <=31 && amis2==7  || \
		0<=or2 && or2 <=31 && amis2==8  || \
		0<=or2 && or2 <=31 && amis2==10 || \
		0<=or2 && or2 <=31 && amis2==12){

		std::cout<<"kaycelen ";
		for(int i=0; i<5; i++){
			std::cout<<artahaytutyun[i];
		}
		std::cout<<or2<<"-"<<amis2<<" amsatvin"<<"\n";


	}else{
		std::cout<<"Chen ayceli vorovhetev nman amsativ chi lini"<<"\n";
	}


    return 0;
}
