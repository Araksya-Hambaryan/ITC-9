#include<iostream>

int foo(int, float, char arr[]){
    std::cout<<"1 tarberak \n";
    return 1;
}

int foo(int, double ){
    std::cout<<"2 tarberak\n";
    return 2;
}

int foo (char, double, int ){
    std::cout<<"3 tarberak\n";
    return 3;
}

int foo (char,double){
   std::cout<<"4 tarberak\n";
   return 4;
}

int main () {
    
    char arr[] = {'T', 'u', 'x'};
  
//    foo(7,7.0,arr) ;   
//    foo(i7,7);
//    foo(7.0,1,);  
    foo ('a',7.0,5);
//    foo ('a', 7,7);
//    foo ('a',7);

    return 0;
}
