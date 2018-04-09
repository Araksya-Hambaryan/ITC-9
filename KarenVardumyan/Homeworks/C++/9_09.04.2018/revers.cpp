#include<iostream>
#include<string>

int main () {

    std::string str = "Barev Karen";
    std::cout<<str<<"\n";

    int size = str.size();
    char temp;
    char* p1 = &str[0];
    char* p2 = &str[size-1];

    for(int i = 0; i < size/2 ; ++i){    
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	*--p2;
	*++p1;
    }
    std::cout<<str<<"\n";

    return 0;
}
