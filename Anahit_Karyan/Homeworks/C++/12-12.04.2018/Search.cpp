#include <iostream>
bool bsearch(int* array, int num, int first, int last) {    
   int mid = ( first + last) / 2;
   if(mid == last && mid == first){
       return false;
   } else {        if ( array[mid] == num ) {
       return true;
   } else if ( array[mid] > num ) {
       return bsearch(array,num,first,mid);
   } else {
       return bsearch(array,num,mid + 1,last);
    }
   }
}
int main(){
       int arr[] = {3,5,7,9,11,36};
       int num = 0;
       for (int i = 0; i < 6;i++){
       std::cout << arr[i] << " ";
       }
       std::cout << std::endl << "Mutqafrel tiv" << std::endl;
       std:: cin >> num;
       if (bsearch(arr,num,0,5)) {
       std::cout << "Nshvac tiv@ ka zangvacum" << std :: endl;
       } else {
           std::cout << "Nshavc Tiv@ chka zangvacum" << std :: endl;
       }
return 0;
}

