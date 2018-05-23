#include<iostream>

int pre (int &a){
   a = a - 1;
   return a;
}
int post (int &a) {
   int b = a;
   a = a - 1;
   return b;
}

int main () {

    int a;
    std::cout<<"Nermuceq a tvi arjeqy a = ";
    std::cin>>a;

    std::cout<<"a++ depqum funkcian ktpi a-i arjeqy heto nor kpoqracni. a = "<<post(a)<<"\n";
    std::cout<<"Hajort tpelu jamanak arden a-i arjeqy poxvel e a = "<<a<<"\n\n";

    int b;
    std::cout<<"Nermuceq b tvi arjeqy b = ";
    std::cin>>b;
    std::cout<<"--b depqum funkcian poxum e b-i arjeqy ev heto tpum "<<pre(b)<<"\n";

    return 0;
}
