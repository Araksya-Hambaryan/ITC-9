#include <iostream>
#define mutq_anel_zangvac int max = 0; int size = inputSize(); int arr[size]; inputArray(arr, size);
#define hashvel_maximum_arjeq max = Max(arr, size);
#define tpel printMax(max);

int inputSize() {
   	 int size = 0;
   	 std :: cout << "nermucel zangvaci chap@: ";
   	 std :: cin >> size;
   	 return size;
}
void inputArray(int* arr, int size) {
   	 std :: cout << "nermucel " << size << " tiv : ";
   	 for(int i = 0; i < size; ++i) {
       		 std :: cin >> arr[i];
        }
}
int Max(int* arr, int size) {
       	int max = arr[0];
        for(int i = 1; i < size; ++i) {
		 if(arr[i] > max) {
		    max = arr[i]
    	    }
	 }
   	 return max;
}
void printMax(int max){
   	 std :: cout << "zangvaci mecagujn elementn e " << max << std :: endl;
}
int main() {
    	mutq_anel_zangvac
    	hashvel_maximum_arjeq
     	tpel
       	return 0;
}
