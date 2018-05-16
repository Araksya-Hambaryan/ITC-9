#include<iostream>

void searchArray (int arr[11],int&,int&,int);
 
int main () {
    std::cout<<"\nUnenq hetevyal zangvacy ";
    int arr[11] = {1,3,5,7,9,11,13,15,17,19,21};
    for (int i = 0; i < 11; ++i){
	std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n\nGreq tiv cragiry kvoroni ayn zangvaci mej - ";
    int arg;
    std::cin>>arg;
    int f = 0;   //first
    int l = 10;  //last
    searchArray(arr,f,l,arg);
}
void searchArray (int arr[11], int &f,int &l, int arg){
    int mid = (l + f) / 2;
    if (l <= f && arr[l] == arg){
        std::cout<<"\nNermucvac tivy gtnvum e zangvaci "<< l <<" hamari indeksum\n\n";
        return;
    }
    if (l <= f && arr[l] != arg){
        std::cout<<"\nNermucvac tivy chka zangvaci mej\n\n";
        return;
    }
    if(arg < arr[mid]){
        l = mid - 1;

    } else if (arg > arr[mid]) {
        f = mid + 1;

    } else {
        std::cout<<"\nNermucvac tivy gtnvum e zangvaci "<< mid <<" hamari indeksum\n\n";
        return;
    }      
    searchArray(arr,f,l,arg);
}

