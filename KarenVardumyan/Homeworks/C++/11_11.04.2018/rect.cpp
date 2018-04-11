#include<iostream>

struct Rect {
    int erkarutyun;
    int laynutyun;
    };

void Merge(int *,int,int,int);
void MergeSort(int *,int,int);
int area (Rect);

int main () {

    Rect a1;
    a1.erkarutyun = 10;
    a1.laynutyun = 20;
    
    Rect a2;
    a2.erkarutyun = 14;
    a2.laynutyun = 15;
    
    Rect a3;
    a3.erkarutyun = 17;
    a3.laynutyun = 8;
    
    Rect a4;
    a4.erkarutyun = 20;
    a4.laynutyun = 50;
    
    Rect a5;
    a5.erkarutyun = 10;
    a5.laynutyun = 5;
    
    int area1 = area(a1);
    int area2 = area(a2);
    int area3 = area(a3);
    int area4 = area(a4);
    int area5 = area(a5);
  
    int arr[5] = {area1,area2,area3,area4,area5};
    
    std::cout<<"\nArea array before sorting \n";
    for(int i = 0; 5 > i ; ++i){
	std::cout<<arr[i]<<" ";
    }

    int f = 0;
    int l = 4;
    int mid = (f + l) / 2;

    MergeSort(arr,f,l);

    std::cout<<"\n\nArea array after sorting \n";
    for(int i = 0; 5 > i ; ++i){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n\n";

    return 0;
}

int area (Rect a){
   return a.laynutyun * a.erkarutyun;
}

void MergeSort(int *arr, int f, int l) {
    int mid;
    if (f < l) {
        mid = (f + l) / 2;
        MergeSort(arr, f, mid);
        MergeSort(arr, mid + 1, l);
        Merge(arr, f, l, mid);
    }
}

void Merge(int *arr, int f, int l, int mid) {
    int temp[l - f + 1];
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

