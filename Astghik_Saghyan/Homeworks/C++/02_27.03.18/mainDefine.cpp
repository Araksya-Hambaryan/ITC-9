// // ******************Task 2_Main************
#include <iostream>

#define mutqagrel_zangvaci_yerkarutyuny int i, n; float arr[100]; std:: cout << "Enter total number of array elements: "; std:: cin >> n; std:: cout << std:: endl;
#define mutqagrel_zangvaci_elementnery for(i = 0; i < n; ++i) {std:: cout << "Enter Number " << i + 1 << " : "; std:: cin >> arr[i];}
#define hashvel_zangvaci_mecaguyn_arjheq for(i = 1;i < n; ++i) {if(arr[0] < arr[i]) {arr[0] = arr[i];}}
#define tpel_zangvaci_mecaguyn_arjheq std:: cout << "Largest element = " << arr[0];

int main() {
    mutqagrel_zangvaci_yerkarutyuny
    mutqagrel_zangvaci_elementnery
    hashvel_zangvaci_mecaguyn_arjheq
    tpel_zangvaci_mecaguyn_arjheq
    return 0;
}
