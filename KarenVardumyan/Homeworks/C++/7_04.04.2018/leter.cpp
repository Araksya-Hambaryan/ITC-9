#include<iostream>

void drow (char** &,char &);

    int main () {
    char** arr;
    char simvol;
    std::cout<<"\nNermuceq voreve simvol ";
    std::cin>>simvol;

    arr =  new char *[11];

    for(int i=0; i<11; i++){
        arr[i] = new char[7];
    }

    drow(arr,simvol);
  
    for(int i = 0; i < 11; i++){
        delete arr[i];
    }
    delete [] arr;
}

void drow (char** &arr,char &simvol){
   
    int i;
    int j;
    for(int i = 0; i < 11; i++){
        for(j = 0; j < 7; j ++){
            arr[i][j] = ' ';
	}
    }
    for(int i = 0; i < 11; i++){
        arr[i][0] = simvol;
    }

    j = 6;
    for(int i = 0, k = 10; i<5, k > 4; i++,k--){
        arr[i][j] = simvol;
        arr[k][j] = simvol;
        j--;
    }    

    std::cout<<"\n";
    for(int i = 0; i < 11; i++){
        for(j = 0; j < 7; j ++){
           std::cout<< arr[i][j];
        }
        std::cout<<"\n";
    }
    std::cout<<"\n";
}

