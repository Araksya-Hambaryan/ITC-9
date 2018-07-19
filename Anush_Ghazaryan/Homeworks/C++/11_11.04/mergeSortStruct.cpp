#include <iostream>

struct Rect {

	int width;
	int heigth;
	Rect( int x, int y ) {   // constructor
		width = x;
		heigth = y;
	}
	int area( int, int );
};
       int Rect::area( int width, int heigth) {

		return width * heigth;
	}
 
// A function to merge the two half into a sorted data.
void merge(int arr[], int low, int high, int mid)
{
	// We have low to mid and mid+1 to high already sorted.
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;
 
	// Merge the two parts into temp[].
	while (i <= mid && j <= high)
	{
		if (arr[i] < arr[j])
		{
			temp[k] = arr[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = arr[j];
			k++;
			j++;
		}
	}
 
	// Insert all the remaining values from i to mid into temp[].
	while (i <= mid)
	{
		temp[k] = arr[i];
		k++;
		i++;
	}
 
	// Insert all the remaining values from j to high into temp[].
	while (j <= high)
	{
		temp[k] = arr[j];
		k++;
		j++;
	}
 
 
	// Assign sorted data stored in temp[] to arr[].
	for (i = low; i <= high; i++)
	{
		arr[i] = temp[i-low];
	}
}
 
// A function to split array into two parts.
void mergeSort(int arr[], int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		// Split the data into two half.
		mergeSort(arr, low, mid);
		mergeSort(arr, mid+1, high);
 
		// Merge them to get sorted output.
		merge(arr, low, high, mid);
	}
}

int main() {
	
	Rect *r1 = new Rect( 2, 5 );
	Rect *r2 = new Rect( 5, 8 );
	Rect *r3 = new Rect( 6, 2 );
	Rect *r4 = new Rect( 9, 4 );
	Rect *r5 = new Rect( 7, 3 );
	int result1 = r1->area(r1->width, r1->heigth);
	int result2 = r2->area(r2->width, r2->heigth);
	int result3 = r3->area(r3->width, r3->heigth);
	int result4 = r4->area(r4->width, r4->heigth);
	int result5 = r5->area(r5->width, r5->heigth);
	int arr[5] = { result1, result2, result3, result4, result5 };
	std::cout << "The given array is : ";
	for(int i = 0; i < 5; ++i ) {
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
	mergeSort( arr, 0, 4 );
	std::cout << "The sorted array is : ";
	for( int i = 0; i < 5; ++i ) {
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
return 0;
}
