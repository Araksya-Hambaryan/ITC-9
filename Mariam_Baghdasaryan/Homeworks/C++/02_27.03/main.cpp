#include <iostream>

#define mutqagrel_zangvac float max = 0; int size = inputSize (); float array[size]; inputArray (array, size);
#define hashvel_zangvaci_mecaguyn_arjeq max = findMax (array, size);
#define tpel_zangvaci_mecaguyn_arjeq printMax (max);

int inputSize() {

    int size;
    
    std :: cout << "Enter array size : ";
    std :: cin >> size;

    while (!std :: cin || size <= 0) {
        std :: cin.clear ();
        std :: cin.ignore ();
        std :: cout << "Please input number bigger than 0 : ";
        std :: cin >> size;
    }

    return size;
}

void inputArray(float* array, int size) {

    for (int counter = 0; counter < size; counter++) {
	std :: cout << "Enter array[" << counter << "]=";
	std :: cin >> array[counter];
        while (!std :: cin) {
            std :: cin.clear ();
            std :: cin.ignore ();
            std :: cout << "Please input only number : ";
            std :: cin >> array[counter];
        }
    }
}


float findMax(float* array, int size) {
 
    float max = array[0];
    
    for (int counter = 1; counter < size; counter++) {
	if (array[counter] > max) {
 	    max = array[counter];
	}
    }
    return max;
}

void printMax(float max) {
 
    std :: cout << "Max of this array is " << max << std :: endl;
}

int main () {
    
    mutqagrel_zangvac
    hashvel_zangvaci_mecaguyn_arjeq
    tpel_zangvaci_mecaguyn_arjeq

    return 0;
}
