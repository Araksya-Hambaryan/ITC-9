#include <iostream>

int arr[3];
int max = arr[0];

void zangvac() {
    std::cout << "mutqagrel zangvaci elementner: ";
    for (int i = 0; i < 3; ++i) {
        std::cin >> arr[i];
    };
}

int maximum() {
    for (int i = 1; i < 3; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void tpelMax() {
    std::cout << "Mecaguyn elementy: " << max << std::endl;
}


#define mutqagrel_zangvac zangvac();
#define hashvel_max_arjeq maximum();
#define tpel tpelMax(); 

int main() {
    mutqagrel_zangvac
    hashvel_max_arjeq
    tpel
    return 0;
 }
           
