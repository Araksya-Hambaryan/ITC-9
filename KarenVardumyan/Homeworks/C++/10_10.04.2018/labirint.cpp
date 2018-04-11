#include<iostream>

void  muve (char** &,int &,int &, int & );

int main () {
    int i;   //syuneri indeksnery
    int j;   //toxeri indeksnery
    
    int uxutyun = 1;   // uxutyunnerin tvel em hamarner 1 >   2 <   3 ^  4 v  

    char** arr;

    std::cout<<"\nSexmeq ENTER vorpesi tesneq obyekti hajord qaylery\n";
    
    arr = new char *[12];

    for(i=0; i<12; i++){
        arr[i] = new char[7];
    }
    for(i = 0;i < 12; ++i  ){
        for(j = 0; j <12; ++j){
	    arr[i][j] = '#';
	}
    }
    arr[2][0] = ' ';
    arr[2][1] = ' ';
    arr[6][1] = ' ';
    arr[6][2] = ' ';
    arr[7][2] = ' ';
    arr[2][5] = ' ';
    arr[4][11] = ' ';
    for(i = 1; i < 4; ++i){
         arr[1][i] = ' ';
    }   
    for(i = 2; i < 5; ++i){
         arr[i][3] = ' ';
    }
    for(i = 1; i < 5; ++i){
         arr[4][i] = ' ';
    }
    for(i = 4; i < 9; ++i){
         arr[i][4] = ' ';
    }
    for(i = 1; i < 9; ++i){
         arr[8][i] = ' ';
    }
    for(i = 1; i < 6; ++i){
         arr[10][i] = ' ';
    }
    for(i = 5; i < 9; ++i){
         arr[3][i] = ' ';
    }
    for(i = 1; i < 9; ++i){
         arr[8][i] = ' ';
    }
    for(i = 5; i < 11; ++i){
         arr[1][i] = ' ';
    }

    for(i = 5; i < 11; ++i){
         arr[i][6] = ' ';
    }
    for(i = 3; i < 9; ++i){
         arr[i][8] = ' ';
    }
    for(i = 2; i < 10; ++i){
         arr[i][10] = ' ';
    }
    for(i = 8; i < 11; ++i){
         arr[10][i] = ' ';
    }
    
    i = 2;
    j = 0;
    muve(arr,uxutyun,i,j);
    
    for(int i = 0; i < 12; i++){
        delete arr[i];
    }
    delete [] arr;

    return 0;
}

void  muve (char** &arr,int &uxutyun,int &i, int &j ){

    if (j == 11){
        std::cout<<"Hasanq tex!!!\n\n";
        return;
    }
    char araj;
    char het;
    char ach;
    char dzax;

    if ( arr[i][j] == 'o'){
        arr[i][j] = ' ';
    }

    switch (uxutyun) {
	case 1:{
            araj = arr[i][j+1];
            ach = arr[i+1][j];
            dzax = arr[i-1][j];
            het = arr[i][j-1];
            break;
	}
        case 2:{
            araj = arr[i][j-1];
            ach = arr[i-1][j];
            dzax = arr[i+1][j];
            het = arr[i][j+1];
            break;

	}
       	case 3:{
            araj = arr[i-1][j];
            ach = arr[i][j+1];
            dzax = arr[i][j-1];
            het = arr[i+1][j];
            break;
	}
     	case 4:{
            araj = arr[i+1][j];
            ach = arr[i][j-1];
            dzax = arr[i][j+1];
            het = arr[i-1][j];
           break;
	}
    }
    switch(uxutyun){
    	case 1 :{ 
            if (ach != '#'){
                i = i + 1;
                uxutyun = 4;
                break;
            } else if (araj != '#'){
	        j = j + 1;
	        break;
	    } else if (dzax != '#') {
	        i = i - 1;
                uxutyun = 3;
	        break;
	    } else {
	    	uxutyun = 2;
	    	break;
       	    }

        }  
        case 2:{
	    if(ach != '#'){
	    	i = i - 1;
            	uxutyun = 3;
	    	break;
	    } else if (araj != '#'){
	    	j = j - 1;
	    	break;
	    } else if (dzax != '#'){
	    	i = i + 1;
	    	uxutyun = 4;
	    	break;
	    } else {
	    	uxutyun = 1;
	    }
        }
	case 3: {
	    if(ach != '#'){
	        j = j + 1;
	        uxutyun = 1;
	        break;
	    } else if (araj != '#'){
	    	i = i - 1;
	    	break;
	    } else if (dzax != '#'){
	    	j = j - 1;
	    	uxutyun = 2;
	    	break;
	    } else {
	    	uxutyun = 4;
	    	break;
	    }
	}
        case 4: {
	    if(ach != '#'){
	     	j = j - 1;
	    	uxutyun = 2;
	    	break;
	    } else if (araj != '#'){
	    	i = i + 1;
	    	break;
	    } else if (dzax != '#'){
	    	j = j + 1;
	    	uxutyun = 1;
	    	break;
	    } else {
	    	uxutyun = 3;
	    	break;
	    }
	}
    }
    if (arr[i][j] == ' '){
	arr[i][j] = 'o';
    }

    std::cout<<"\n\ni = "<<i<<"\n";
    std::cout<<"j = "<<j<<"\n";
   
    for(int k = 0;k < 12; ++k  ){
        for(int n = 0; n <12; ++n){
            std::cout<<arr[k][n]<<" ";
        }
        std::cout<<"\n";
    }
    std::cin.ignore();

    muve(arr,uxutyun,i,j);
}

