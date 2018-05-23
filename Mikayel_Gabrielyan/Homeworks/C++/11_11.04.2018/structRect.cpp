#include <iostream>
struct Rect{
    int len;
    int wid;
};
void sort(int* arr, int f, int l, int mid) {
   int temp[l-f+1];
   int i = f;
   int k = 0;
   int j = mid + 1;
   while(i <= mid && j <= l) {
       if(arr[i] < arr[j]) {
           temp[k] = arr[i];
           k++;
           i++;
       } else {
           temp[k] = arr[j];
           k++;
           j++;
       }
   } while(i <= mid) {
       temp[k] = arr[i];
       k++;
       i++;
   }
   while(j <= l) {
       temp[k] = arr[j];
       k++;
       j++;
   }
   for(i = f; i <= l; i++) {
       arr[i] = temp[i-f];
   }
}
void MergeSort(int *arr, int f, int l) {
   int mid;
   if (f < l) {
       mid = (f + l) / 2;
       MergeSort(arr, f, mid);
       MergeSort(arr, mid + 1, l);
       sort(arr, f, l, mid);
   }
}

void arrPrint(int* arr, int n) {
     std::cout << "After sorting  \n" << "arr[  ";
    for(int i = 0; i < n; ++i) {
        std::cout << arr[i] << ", ";
    }
     std::cout << "]\n";
}

int main() {
    const int n = 5;
    int lEn;
    int wId;
    Rect rec[n];
    for(int i = 0; i < n; ++i){
        std::cout << "\n" << "rec[" << i << "].length=";
        std::cin >> lEn;
        if(0 < lEn){
            rec[i].len = lEn ;
        } else {
            std::cout << "Try one more time. Next time input > 0 ;)\n";
            break;
        }
        std::cout << "\n" << "rec[" << i << "].width=";
        std::cin >> wId;
        if(0 < wId){
            rec[i].wid = wId;
        }else{
            std::cout << "Try one more time. Next time input > 0 ;)\n";
            break;  
        }
    }
    int arr[n];
    int res;
    std::cout <<"Before sorting \n"<< "arr[  ";
    for(int i = 0; i < n; ++i){
        res = rec[i].len * rec[i].wid;
        arr[i] = res;
        std::cout << arr[i] << ", ";
    }
    std::cout << "]\n";
    MergeSort(arr, 0,  n-1);
   arrPrint( arr,  n);
    return 0;
}
