#include<iostream>

int compare1( int num1, int num2 ) {
    return num1 < num2 ? num1 : num2;
}
int compare2( int num1, int num2 ) {
    return num1 > num2 ? num1 : num2;
}
void inputArrElements( int array[], int size ) {       // the method inputs  the elements in array
    for( int i = 0; i < size; ++i ) {
        std::cout << "array[" << i << "] = ";
            std::cin >> array[i];
    }
}
void printingArr( int array[], int size ) {          // the method prints the elements in array
    for( int i = 0; i < size; ++i ) {
        std::cout << " " <<  array[i];
            std::cout << "\n";
    }
}
void swap(int& num1, int& num2) {
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
}

int* bubbleSort( int arr[], int size, int(*compare)(int, int ) ) {
    int* newArray = new int[size];
    int num = 0;
    for(int i = 0; i < size; ++i) {
        newArray[i] = arr[i];
    }

    for(int i = 0; i < size; ++i) {
        for(int j = 0; j < size - 1 ; ++j) {
            num = compare(newArray[j], newArray[j + 1]);
            if(num == newArray[j + 1]) {
                swap(newArray[j], newArray[j + 1]);
            }
        }
    }
    return newArray;
}


int main() {
    int num = 0;  
    int size = 0;
    int array[size];
    std::cout << "Input the size of the array : ";
    std::cin >> size;
    std::cout << "Input elements in array " << std::endl;
    inputArrElements( array, size ) ;
    printingArr( array, size );
    std::cout << "Type 1 for increase sorting - Type 2 for decrease sorting :";
    std::cin >> num;  
    int* sorted;
                                      // inputing 1 will be done  bubble increase  sorting 
    if( 1 == num ) {
        sorted = bubbleSort( array, size, compare1 );
    } else if( 2 == num ) {                                 // inputing 2 will be done bubble decrease sorting
        sorted = bubbleSort( array, size,  compare2 );
    } else {
        std::cout << "Type only 1 or 2 " << std::endl;
    }
	
    printingArr( sorted, size );    // printing the final result of the array
	


return 0;
}
