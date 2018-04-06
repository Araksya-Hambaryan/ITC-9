#include<iostream>

int fb (int num,int &counter){
    
    counter++;
    if (num == 1){
        return 1;
    }
    if (num < 1){
        return 0;
    }
    return fb(num -1,counter) + fb(num - 2,counter);

}

int main(){
    
    int num;
    int counter = 0;
    
    std::cout<<"Mutqagreq tiv.Cragiry khashvi fibonachii axyusakum dran hamapatasxan arjeqy ";
    std::cin>>num;
 
    std::cout<<fb(num,counter)<<"\n";
    std::cout<<"Rekursiv funkcian kanchvel e "<<counter<<" angam \n";
    return 0;
}
