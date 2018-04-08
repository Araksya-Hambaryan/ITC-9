#include<iostream>
#include <cstdlib>
#include <ctime>

int zarP (char** &,int,int &,char &);      //xaxacoxi zari funkcian
int zarC (char** &,int,int &,char &);    //hamakargchi zari funkcian

int main () {
    char a;        //simvoly vorov nkarvelu en zarery
    std::cout<<"\nMutqagreq simvoly vorov cankanum eq nkarel zarery ";
    std::cin>>a; 
    
    int i;    //cragri mej bilor i popoxakannery uyc en talu syuni indeks
    int j;    //cragri mej bilor j popoxakannery uyc en talu toxi indeks
    
    srand(time(NULL));
    int ardyunq = (rand() % 6) + 1;  //patahakan tiv vory kpoxancvi funkcianerin vorpes argument
   
    char** arrC;     //hamakargchi masivy      
    char** arrP;     //xaxacoxi masivy

    int comp = 0;    //hamakargchi gcac zari tivy
    int pley = 0;    //xaxacoxi gcac zari tivy
    int n = 1;       //zari vandaki dirqy xaxacoxi masivum
    int m = 1;       //zari vandaki dirqy hamakargchi masivum
    
    arrP =  new char *[3];   //stexcum enq xaxacoix zareri hamar erkchap msiv

    for(i=0; i<3; i++){
        arrP[i] = new char[17];
    }
    for(i=0; i<3; i++){
        for(j=0; j<17; j++){
            arrP[i][j] = ' ';
        }
    }
    for(i = 0; i <3; i++){
        for(j=0; j <17; j = j+4){
            arrP[i][j] = '|';
            arrP[i][j] = '|';
        }
    }

    arrC =  new char *[3];    //stexcum hamakargchi zareri hamar erkchap masiv
        for(i=0; i<3; i++){
            arrC[i] = new char[17];
    }
    for(i=0; i<3; i++){
        for(j=0; j<17; j++){
            arrC[i][j] = ' ';
        }
    }
    for(i = 0; i <3; i++){
      for(j=0; j <17; j = j+4){
            arrC[i][j] = '|';
            arrC[i][j] = '|';
        }
    }

    int pointC = 0;     //hamakargchi miavornery
    int pointP = 0;     //xaxacoxi miavornery

    std::cout<<"\n\n\n\t\t\t\t\tXaxy sksvac e!!!\n\n";

    while(true){
        int i;
        int j;
    
        comp = zarC(arrC,ardyunq,m,a);
        std::cout<<"Hamakargichay gcec ir zary.herty dzern e.Greq p sexmeq ENTER\n";

        ardyunq = (rand() % 6) + 1;
        pley = zarP(arrP,ardyunq,n,a);

        for(i=0; i<3; i++){
            for(j=0; j<17; j++){
                arrP[i][j] = ' ';
            }
        }
        for(i = 0; i <3; i++){
            for(j=0; j <17; j = j+4){
                arrP[i][j] = '|';
                arrP[i][j] = '|';
            }
        }
        for(i=0; i<3; i++){
            for(j=0; j<17; j++){
                arrC[i][j] = ' ';
            }
        }
        for(i = 0; i <3; i++){
            for(j=0; j <17; j = j+4){
                arrC[i][j] = '|';
                arrC[i][j] = '|';
            }
        }
        m = 1;     //mekakan zar gceluc heto dirqery
        n = 1;     //berum enq skzbnakan vichak
      
        if(comp > pley){
            std::cout<<"\n\n\t\t   Xaxy sksec hamakargichy.greq p sexmeq ENTER sharunakelu hamar\n";
            while (m != 17 && m != 17){
                comp = zarC(arrC,ardyunq,m,a);
                ardyunq = (rand() % 6) + 1;
                pointC = pointC + comp;
                pley = zarP(arrP,ardyunq,n,a);
                pointP = pointP + pley;
                ardyunq = (rand() % 6) + 1;
                std::cout<<"\n\n";
                std::cout<<"Herty dzern e. Greq p sexmeq ENTER\n";
            } break;    
   
        } else if (pley > comp) {
            std::cout<<"\n\n\t\t\t\tXaxy sksum eq duq.Greq p sexmeq ENTER\n";
	    while (n != 17 && m != 17){
                pley = zarP(arrP,ardyunq,n,a);
                pointP = pointP + pley;
                ardyunq = (rand() % 6) + 1;
                comp = zarC(arrC,ardyunq,m,a);
                pointC = pointC + comp;
                ardyunq = (rand() % 6) + 1;
                std::cout<<"\n\n";
                std::cout<<"Hamakargichy xaxac.herty dzern e.greq p sexmeq ENTER\n";
            } break; 

        } else {
	    std::cout<<"\nKrkin porceq\n";
        }
    }
    std::cout<<"\n\n\n\t\t\t\t Xaxi miavorneri ampomum\n\n";
    std::cout<<"\t\tHamakargichi miavornery - "<<pointC<<"\t\t"; 
    std::cout<<"Dzer  miavornery - "<<pointP<<"\n";

    for(i=0; i<3; i++){
        int k;
        std::cout<<"\t\t";
        for(j=0,k = 0; j<17 , k<17; j++, k++){
            std::cout<<arrC[i][j];
        }
        std::cout<<"\t\t\t";
        for(k = 0; k <17; k++){
	    std::cout<<arrP[i][k];
	}
        std::cout<<"\n";        
    }
  
    if(pointP > pointC){
        std::cout<<"\n\t\t\t\t     Haxteciq duq!!!\n\n";
    } else if(pointC > pointP){
        std::cout<<"\n\t\t\t\t Haxtec hamakargichy!!!\n\n";
    } else {
	std::cout<<"\n\t\t\t\t  Chhaxtec voch voeq!!!\n\n";
    }

    for(i = 0; i < 3; ++i) {
        delete arrP[i];
    }
    delete [] arrP;    

    for(i = 0; i < 3; ++i) {
        delete arrC[i];
    }
    delete [] arrC;

    return 0;
}

int zarP (char** &arrP,int ardyunq, int &n,char &a){

    int i;
    int j;
    char p;
    std::cin>>p;
    switch (ardyunq) {
        case 1 : {
	    arrP[1][n+1] = a;
		break;
	    }
            case 2 : {
	        arrP[0][n] = a;
	        arrP[2][n+2] = a;
	        break;
 	    }
	    case 3 : {
	        arrP[1][n+1] = a;
	        arrP[0][n] = a;
 	        arrP[2][n+2] = a;
	        break;
	    }
	    case 4 : {
	        arrP[0][n] = a;
	        arrP[2][n+2] = a;
	        arrP[2][n] = a;
	        arrP[0][n+2] = a;
                break;
	    }
            case 5 : {
 	        arrP[1][n+1] = a;
	        arrP[0][n] = a;
	        arrP[2][n+2] = a;
	        arrP[2][n] = a;
	        arrP[0][n+2] = a;
	        break;
	    }
            case 6 : {
	        arrP[0][n] = a;
	        arrP[2][n+2] = a;
	        arrP[2][n] = a;
	        arrP[0][n+2] = a;
	        arrP[1][n] = a;
	        arrP[1][n + 2] = a;
	        break;
           }
       }
       for(i=0; i<3; i++){
           for(j=n-1; j<=n+3; j++){
               std::cout<<arrP[i][j];
           }
           std::cout<<"\n";
      }
      n = n + 4;

      return ardyunq;
}

int zarC (char** &arrC,int ardyunq, int &m,char &a){

    int i;
    int j;
    switch (ardyunq) {
        case 1 : {
	    arrC[1][m+1] = a;
		break;
	}
        case 2 : {
	    arrC[0][m] = a;
	    arrC[2][m+2] = a;
	    break;
 	}
	case 3 : {
	    arrC[1][m+1] = a;
	    arrC[0][m] = a;
 	    arrC[2][m+2] = a;
	    break;
	}
	case 4 : {
	    arrC[0][m] = a;
	    arrC[2][m+2] = a;
	    arrC[2][m] = a;
	    arrC[0][m+2] = a;
            break;
	}
        case 5 : {
 	    arrC[1][m+1] = a;
	    arrC[0][m] = a;
	    arrC[2][m+2] = a;
	    arrC[2][m] = a;
	    arrC[0][m+2] = a;
	    break;
	}
        case 6 : {
	    arrC[0][m] = a;
	    arrC[2][m+2] = a;
	    arrC[2][m] = a;
	    arrC[0][m+2] = a;
	    arrC[1][m] = a;
	    arrC[1][m + 2] = a;
	    break;
           }
       }
       std::cout<<"C\n";
       for(i=0; i<3; i++){
           for(j=m-1; j<=m+3; j++){
               std::cout<<arrC[i][j];
           }
           std::cout<<"\n";
      }
      m = m + 4;

      return ardyunq;
}
