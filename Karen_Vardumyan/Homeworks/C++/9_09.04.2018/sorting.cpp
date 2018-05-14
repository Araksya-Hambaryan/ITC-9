#include<iostream>

void achman (int *, int);
void nvazman(int *,int);

int  foo (int,int*,int,  void (*funkcia)(int *,int)  );

int main() {
     
    int chap = 5;   
    int array [5];
    std::cout<<"Mutqagreq 5 hat tiv ";
    for(int i = 0; 5 > i; ++i){
        std::cin>> array[i];
    }
    int* arg = &array[0];

    void (*funkcia)(int *,int)  ;

    int payman;
    std::cout<<"Mutqagreq paymany\n1 - Achman kargov\n2 - Nvazman kargov\n";
    std::cin>>payman;
     
    if(3 == foo(payman,array,chap,funkcia)){
	std::cout<<"Sxal payman\n";
    }
    return 0;
}

int foo (int payman,int*array,int chap,   void (*funkcia)(int *,int) ){

    if(1 == payman){
	funkcia = achman;
    } else if (2 == payman){
	funkcia = nvazman;   
    } else {
	return 3;
    }

    (*funkcia)(array,chap);

    return 1;
}

void achman (int * array, int chap){

    int i;
    int j;
    int k;

    for(i = 0; i < chap; i++){
        for(j = 0; j < chap; j++){
            if(array[i] < array[j]){
                k = array[i];
                array[i] = array[j];
                array[j]=k;
            }
        }
    }
    for(i = 0; i < chap; i++){
        std::cout<< array[i]<<" ";

    }
    std::cout<<"\n";
}

void nvazman (int * array, int chap){

    int i;
    int j;
    int k;

    for(i = 0; i < chap; i++){
        for(j = 0; j < chap; j++){
            if(array[i] > array[j]){
                k = array[i];
                array[i] = array[j];
                array[j]=k;
            }
        }
    }
    for(i = 0; i < chap; i++){
        std::cout<< array[i]<<" ";

    }
    std::cout<<"\n";
}

