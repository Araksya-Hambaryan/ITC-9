#include<iostream>

int  compair1( int* a, int* b ) {     // here are declared two compair methods 
	if( *a > *b ) {
		return *a;
	} 
}

int  compair2( int* a, int* b ) {
	if ( *b > *a) {
		return *b;
	}  
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
	}
	std::cout << "\n";
}
void bubbleSort( int array[], int size, int  ( *func) ( int*,  int* )) {   // the method sorts array elements , includes in it a  method
	for( int i = 0; i < size - 1; ++i ) {
		for( int j = 0; j < size - i - 1; ++j ) {
		
			if( array[j] > array[j + 1] ) {	
				int temp = array[j];
				array[j] = array[ j + 1 ];
				array[ j + 1 ] = temp;
			}
		}
	}
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
	std::cin >> num;                                        // inputing 1 will be done  bubble increase  sorting 
	if( 1 == num ) {
		bubbleSort( array, size, compair1 );
	} else if( 2 == num ) {                                 // inputing 2 will be done bubble decrease sorting
		bubbleSort( array, size,  compair2 );
	} else {
		std::cout << "Type only 1 or 2 " << std::endl;
	}
	
	printingArr( array, size );    // printing the final result of the array
	


return 0;
}
