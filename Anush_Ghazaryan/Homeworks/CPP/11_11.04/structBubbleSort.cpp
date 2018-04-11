#include<iostream>
struct Rect {

	int x;
	int y;
	Rect( int x1, int y1 ) {
		x = x1;
		y = y1;
	}

	int area( int ,  int ); 
	
};
 int  Rect::area( int x, int y ) {
	return x * y;
};

void bubbleSort(int array[], int size)    // Bubble recursion sort
{
	if ( 1 == size) {
		return;    
    }
	for (int i = 0; i < size - 1; ++i) {
            if (array[i] > array[i + 1]) {
                int tmp = array[i];     
                array[i] = array[i + 1];
                array[i + 1] = tmp;
            }
    }
    bubbleSort(array, size - 1);
}

 
void printArray(int arr[], int size)
{
   
    for ( int i = 0; i < size; ++i ) {
       std::cout <<  arr[i] << " ";
	}
    std::cout << ("\n");
	
}
 int main() {
	Rect *r1 = new Rect( 2, 5 );
	Rect *r2 = new Rect( 5, 8 );
	Rect *r3 = new Rect( 6, 2 );
	Rect *r4 = new Rect( 9, 4 );
	Rect *r5 = new Rect( 7, 3 );
	int result1 = r1->area(r1->x, r1->y);
	int result2 = r2->area(r2->x, r2->y);
	int result3 = r3->area(r3->x, r3->y);
	int result4 = r4->area(r4->x, r4->y);
	int result5 = r5->area(r5->x, r5->y);
	int arr[5] = { result1, result2, result3, result4, result5 };

 
	std::cout << ("Given array is \n");
	printArray(arr, 5);
 
	bubbleSort( arr, 5 );
 
	std::cout << ("\nSorted array is \n");
	printArray(arr, 5);	

return 0;
}
