#include <iostream>

bool search(int array[], int num,  int firstIndx, int lastIndx) {    // The method searches the inputted number in array
    if (firstIndx <= lastIndx) {
        int midIndx = (firstIndx + lastIndx) / 2;
        if (array[midIndx] < num) {
            return search(array, num, midIndx + 1 , lastIndx);
        }
        if (array[midIndx] > num){
            return search(array, num, firstIndx, midIndx - 1);
        }
        return true;
    }
    return false;
}
void inputArray(int array[], int size) {            // The method requares input of numbers in array by the  user
    for (int i = 0; i < size; ++i) {
        std::cout << "array[" << i << "]= ";
        std::cin >> array[i]; 
    }
}
void printingArray(int array[], int size) {    // Prints array
    for (int i = 0; i < 10; ++i) {
        std :: cout << array[i] << " ";
    }
    std :: cout << std :: endl;
}
int main() {
	int num;
	std::cout << "Input a number : ";
	std::cin >> num;
	std::cout << "\n";
	int array[10];
	std::cout << "Input numbers in array " << std::endl;
	inputArray( array, 10 );
	std::cout << "The array is : " << std::endl;
	printingArray(array, 10);
	if ( search( array, num, 0, 9 ) ) {
		std::cout << " There is number " << num << " in the array" << std::endl;
	} else {
		std::cout << " There is no number  " << num << " in the array" << std::endl;
	}


return 0;
}
