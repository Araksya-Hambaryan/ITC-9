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
}





int merge( arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 =  r - m;
 
    
	int L[n1];
	int  R[n2];
 
	for (i = 0; i < n1; i++) {
		L[i] = arr[l + i];
	}
	for (j = 0; j < n2; j++) {
        	R[j] = arr[m + 1+ j];
	 }
   
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        
        
        int m = l+(r-l)/2;
 
        
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
 
        merge(arr, l, m, r);
    }
}
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++) {
       std:: printf("%d ", A[i]);
    std::cout << ("\n");
	}
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
	
	int arr_size = sizeof(arr)/sizeof(arr[0]);
 
    std::cout << ("Given array is \n");
    printArray(arr, arr_size);
 
    mergeSort(arr, 0, arr_size - 1);
 
    std::cout << ("\nSorted array is \n");
    printArray(arr, arr_size);	

return 0;
}
