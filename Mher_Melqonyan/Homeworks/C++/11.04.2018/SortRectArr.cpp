#include <iostream>
struct Rect{
    int len;
    int wid;
};
void sort(int arr[], int n) {
    int min;
    int mem;

    for(int i = 0; i < n -1; ++i){
        min = i;
        for(int j = i+1; j < n; j++){

            if(arr[min]> arr[j]){
                min = j;
            }
        }
        mem = arr[i];
        arr[i] = arr[min];
        arr[min] = mem;


    }

    std::cout << "Sorted array = [ ";
    for(int i = 0; i < n ; ++i){
        std::cout << arr[i] << ", ";
    }
    std::cout << "];";
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
    std::cout << "arr[  ";
    for(int i = 0; i < n; ++i){
        res = rec[i].len * rec[i].wid;
        arr[i] = res;
        std::cout << arr[i] << ", ";
    }
    std::cout << "]\n" << n;
    sort(arr, n);
    return 0;
}
