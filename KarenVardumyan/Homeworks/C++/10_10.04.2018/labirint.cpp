#include<iostream>

int  muve (char** &arr,int uxutyun,int i, int j ){


    char araj;
    char het;
    char ach;
    char dzax;



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





    
//    arr[i][j]  = 'o';
//    arr[i-1][j] = 'l';
//    arr[i][j+1] = 'o';

     std::cout<<"ach - "<<ach<<"\n";
     std::cout<<"araj - "<<araj<<"\n";
     std::cout<<"het - "<<het<<"\n";
     std::cout<<"dzax - "<<dzax<<"\n";


}



int main () {
    int i;
    int j;


    
    int uxutyun;
    // uxutyun 1 >
    // uxutyun 2 <
    // uxutyun 3 ^
    // uxutyun 4 v

    std::cin>>uxutyun;


    char** arr;

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
    



     i = 1;
     j = 2;
     muve(arr,uxutyun,i,j);







    for(i = 0;i < 12; ++i  ){
        for(j = 0; j <12; ++j){
             std::cout<<arr[i][j]<<" ";
        }
        std::cout<<"\n";
    }
 


    for(int i = 0; i < 12; i++){
        delete arr[i];
    }
    delete [] arr;





    return 0;
}
